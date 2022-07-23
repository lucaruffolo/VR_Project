#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<Mirror.NetworkConnectionToClient>
struct Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// System.Action`2<Mirror.NetworkConnectionToClient,System.Exception>
struct Action_2_tAA074BFFCD0A3D9A4205919A05094016EB28BD98;
// System.Collections.Generic.Dictionary`2<Mirror.Examples.MultipleMatch.CellValue,Mirror.Examples.MultipleMatch.CellGUI>
struct Dictionary_2_t21A58570BF69142737A6DA95313A875D27EE6806;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Collections.Generic.HashSet`1<Mirror.NetworkConnectionToClient>>
struct Dictionary_2_tADCDAB470C61167BB31BB78DB0188C38B76BF754;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>
struct Dictionary_2_t26A96311B045C0EA9BAAEF6E836C515D1F1A4663;
// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.Examples.MultipleMatch.MatchInfo>
struct Dictionary_2_tD45905B3308F3A9FF85973451EA8D635912FBFFB;
// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.SpawnHandlerDelegate>
struct Dictionary_2_t7CC03CE2616B963DEA8AA98EAB118B8B8F6F31B5;
// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.UnSpawnDelegate>
struct Dictionary_2_tF2595C06836CD6AF8DFA199D553B2AAB5F2C384A;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher>
struct Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999;
// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869;
// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnectionToClient,System.Guid>
struct Dictionary_2_tE8CDB1A26ED7465B5EF89949849448BDDCEB4061;
// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnectionToClient,System.String>
struct Dictionary_2_t5EB215AAE8E57E4A6E249F7FE37798A218A2ABF9;
// System.Collections.Generic.Dictionary`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Dictionary_2_t5AD73BEC930D21C6CD64BB9884B5CE15DF5B0A42;
// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817;
// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity>
struct Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Mirror.NetworkWriterPooled>
struct Func_1_tB330B45018FD695711A62A2C3F7AA2E5197DAB8A;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C;
// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05;
// System.Collections.Generic.HashSet`1<Mirror.NetworkConnectionToClient>
struct HashSet_1_tB3C9185A6787ED7D6E47A728C937F2BF337E01D3;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct IDictionary_2_t433B2CAC0BA4E5D90F977D518A9654CC9EFC557D;
// System.Collections.Generic.IEqualityComparer`1<Mirror.NetworkConnection>
struct IEqualityComparer_1_tF5A6231262B4821CCA4B5C695E5A5C83E01C634E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>
struct KeyCollection_t6C78AFA0FA6C49E195DB6FABEC351FD260808BB2;
// System.Collections.Generic.List`1<Mirror.SyncIDictionary`2/Change<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>>
struct List_1_t3C30DA04C97415B693281D368366D834943DDB0E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient>
struct List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536;
// System.Collections.Generic.List`1<Mirror.NetworkRoomPlayer>
struct List_1_t12E07DEAE79B9E370C8C88598C5BC4D3A5B328A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>
struct List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2;
// System.Collections.Generic.List`1<Mirror.SyncObject>
struct List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.Generic.List`1<Mirror.NetworkRoomManager/PendingPlayer>
struct List_1_t38A5A5E401291927667E9840827169D1FFDA2EFC;
// Mirror.Pool`1<Mirror.NetworkWriterPooled>
struct Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902;
// Mirror.Pool`1<System.Object>
struct Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_tA7752B0A4A9766B08D060160D0440B3FA7475B0B;
// System.Collections.Generic.Stack`1<Mirror.NetworkWriterPooled>
struct Stack_1_tF3A9898F13F5DACB68262A3B73BF34630DD7A71E;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// Mirror.SyncIDictionary`2/SyncDictionaryChanged<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncDictionaryChanged_tE5AFA20CCB2F051D41078F3B40B95143DF92C0FA;
// Mirror.SyncDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20;
// Mirror.SyncIDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483;
// Mirror.SyncIDictionary`2<System.Object,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncIDictionary_2_t684AFF4EDA841677AABE02FB09AD46C611D7755D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>
struct ValueCollection_t14E14E913A799C5C2FE9457C73E34274876DF7C6;
// System.Collections.Generic.Dictionary`2/Entry<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>[]
struct EntryU5BU5D_t55E438495708B32F8CBCCFE9D12D8B0C90384BBD;
// System.Collections.Generic.HashSet`1/Slot<Mirror.NetworkConnection>[]
struct SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC;
// Mirror.NetworkConnectionToClient[]
struct NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.SceneManagement.Scene[]
struct SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager
struct AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B;
// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager
struct AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// Mirror.Examples.MultipleMatch.CanvasController
struct CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// Mirror.Examples.Chat.ChatAuthenticator
struct ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1;
// Mirror.Examples.Chat.ChatUI
struct ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// Mirror.Examples.AdditiveLevels.FadeInOut
struct FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// Mirror.InterestManagement
struct InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7;
// Mirror.Examples.MultipleMatch.MatchController
struct MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager
struct MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF;
// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// Mirror.NetworkManager
struct NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15;
// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9;
// Mirror.NetworkRoomPlayer
struct NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F;
// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A;
// Mirror.NetworkWriterPooled
struct NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Mirror.Examples.AdditiveLevels.PlayerController
struct PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF;
// Mirror.Examples.MultipleAdditiveScenes.PlayerScore
struct PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD;
// Mirror.Examples.AdditiveLevels.Portal
struct Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8;
// Mirror.Examples.Tanks.Projectile
struct Projectile_t1C5430FC42935877498341CC359F93F1987C4586;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Mirror.RemoteCalls.RemoteCallDelegate
struct RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Mirror.Examples.MultipleMatch.RoomGUI
struct RoomGUI_t0046C98B93B6FEEE80EB71E30078556D4509EE78;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Mirror.Examples.MultipleAdditiveScenes.Spawner
struct Spawner_tE1D9FC7CBE2C02A623247F9BBE98312C839594B4;
// Mirror.Examples.NetworkRoom.Spawner
struct Spawner_tBBF6EA0F50BBB5D8CA665B2F0EFFF790BDABC8CC;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// Mirror.Examples.Tanks.Tank
struct Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Mirror.Transport
struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D;
// System.Type
struct Type_t;
// Mirror.Unbatcher
struct Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Mirror.Examples.AdditiveScenes.ZoneHandler
struct ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E;
// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11
struct U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097;
// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7
struct U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2;
// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5
struct U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62;
// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8
struct U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653;
// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5
struct U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7;
// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6
struct U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Mirror.Examples.MultipleMatch.CanvasController/<>c
struct U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2;
// Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8
struct U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590;
// Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12
struct U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150;
// Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5
struct U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700;
// Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6
struct U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17
struct U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692;
// Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32
struct U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3;
// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13
struct U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94;
// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7
struct U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60;
// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9
struct U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB;
// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11
struct U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041;
// Mirror.Examples.Pong.NetworkManagerPong/<>c
struct U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75;
// Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8
struct U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteProcedureCalls_t1102DEC394CB2FCFB489C0CDA8A23FAB3178502F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03E170E8209664E0E5EC4BFA0C00EC477E7A12B8;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9670AB400BDA0B8502E26772DF292597A50639;
IL2CPP_EXTERN_C String_t* _stringLiteral38BC05DCF68F7A284B2AA915AEF3BA18FD916690;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC;
IL2CPP_EXTERN_C String_t* _stringLiteral77268F8E0AEA59C91A55EDE2F7B86EEA25D51817;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F80BCE9ECBDA5A753E0B76268039021F829D21;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF3BEC369881ADB53670DA01625A9FCF7417ECD;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0D009D32A58FBC249306BDE39B2CDD7B71D925;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m417BE693B5917637E3BB1626C702C5321D0F4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD_m7B6A4CBDF36DAC6F05A925A85F9503868235B98C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisProjectile_t1C5430FC42935877498341CC359F93F1987C4586_mEADD8636FE88D5887F6D8A98F47D2CA7EA5189EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisPlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF_mC3EC44FB962D23B595D6F9D68A82EDE510E36153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mA0F7A29637DAA05CE1346C384DD9167577DF7C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mDB349AC24641A62F1F480EA18BEAA66C005D6480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatchController_OnPlayerDisconnected_m378A5E4D1F308872C3BEF524843FA93555C9DB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m200F48A04FDC9338198ACCB232D74592BD6B1EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Return_mCEC655E65DA5CB52561A33C080F52A3C88EA9F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tank_InvokeUserCode_CmdFire_mF71C4B9F7B071D30181146B8EF45ABBC94156643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tank_InvokeUserCode_RpcOnFire_m38F69F1C09EEB363DC20A9B277683822F5A3DE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddPlayerDelayedU3Ed__11_System_Collections_IEnumerator_Reset_m05DAF011219B4D14F9221144EAE452A7D766CBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddPlayersToMatchControllerU3Ed__17_System_Collections_IEnumerator_Reset_mAB207301748E419A4DE5ABA57059C788101E7EE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAppendAndScrollU3Ed__12_System_Collections_IEnumerator_Reset_m75B463A9ADA364370C41DF63FCAD5B2AAC25D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClientUnloadSubScenesU3Ed__13_System_Collections_IEnumerator_Reset_m2ADD1D2DAD49537BE340D144A7CB09E20453D9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDisconnectU3Ed__8_System_Collections_IEnumerator_Reset_m48206916B824245655182F08D08653C1F94D9DA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mABDC6E80F20A25BFF78A00CB7FFFF2C9AA55163B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m0EA808FA0BF1FCDAE68D8C504A6C483F50A7C20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdditiveU3Ed__7_System_Collections_IEnumerator_Reset_m846470A10B3217A016C68A409DC2DE1FC037AE66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m4C94A6DEA691FA16E8FEA8490D218A662886C8B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnServerAddPlayerDelayedU3Ed__7_System_Collections_IEnumerator_Reset_mEFF9E7201756BC13720B0137F3DCE2752C7E96F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendPlayerToNewSceneU3Ed__8_System_Collections_IEnumerator_Reset_m4FBB3CE6281197F76471B71B67A8255D04365B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CServerEndMatchU3Ed__32_System_Collections_IEnumerator_Reset_mC9C6B3A40C7CADB3054268372AF8A7FBC067B533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CServerLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m29EFBF354FBD69416452E5020D655EAF06ABE3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CServerLoadSubScenesU3Ed__9_System_Collections_IEnumerator_Reset_m2BC1B69C8E13D8EE942A9B25767AECB1082D5A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CServerUnloadSubScenesU3Ed__11_System_Collections_IEnumerator_Reset_mF53BA387E854794A285F6A70BAD7AD869E9F2309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnloadAdditiveU3Ed__8_System_Collections_IEnumerator_Reset_mEA2A4C1F00BA5F57FD686271AC6E34753E0FD641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnloadScenesU3Ed__6_System_Collections_IEnumerator_Reset_m4E11E463AE806D344D6E6C1F62C2982F87717041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t55E438495708B32F8CBCCFE9D12D8B0C90384BBD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6C78AFA0FA6C49E195DB6FABEC351FD260808BB2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t14E14E913A799C5C2FE9457C73E34274876DF7C6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___entries_1)); }
	inline EntryU5BU5D_t55E438495708B32F8CBCCFE9D12D8B0C90384BBD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t55E438495708B32F8CBCCFE9D12D8B0C90384BBD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t55E438495708B32F8CBCCFE9D12D8B0C90384BBD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___keys_7)); }
	inline KeyCollection_t6C78AFA0FA6C49E195DB6FABEC351FD260808BB2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6C78AFA0FA6C49E195DB6FABEC351FD260808BB2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6C78AFA0FA6C49E195DB6FABEC351FD260808BB2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ___values_8)); }
	inline ValueCollection_t14E14E913A799C5C2FE9457C73E34274876DF7C6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t14E14E913A799C5C2FE9457C73E34274876DF7C6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t14E14E913A799C5C2FE9457C73E34274876DF7C6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____slots_8)); }
	inline SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tD84A56CBB0DB1C92859ACB6B2285C07CB9E1374D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient>
struct List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536, ____items_1)); }
	inline NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* get__items_1() const { return ____items_1; }
	inline NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536_StaticFields, ____emptyArray_5)); }
	inline NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NetworkConnectionToClientU5BU5D_tA627DC7E1207F99DF4D21E007292978D1D9CEEDF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>
struct List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2, ____items_1)); }
	inline SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* get__items_1() const { return ____items_1; }
	inline SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2_StaticFields, ____emptyArray_5)); }
	inline SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Mirror.Pool`1<Mirror.NetworkWriterPooled>
struct Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Mirror.Pool`1::objects
	Stack_1_tF3A9898F13F5DACB68262A3B73BF34630DD7A71E * ___objects_0;
	// System.Func`1<T> Mirror.Pool`1::objectGenerator
	Func_1_tB330B45018FD695711A62A2C3F7AA2E5197DAB8A * ___objectGenerator_1;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902, ___objects_0)); }
	inline Stack_1_tF3A9898F13F5DACB68262A3B73BF34630DD7A71E * get_objects_0() const { return ___objects_0; }
	inline Stack_1_tF3A9898F13F5DACB68262A3B73BF34630DD7A71E ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(Stack_1_tF3A9898F13F5DACB68262A3B73BF34630DD7A71E * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_objectGenerator_1() { return static_cast<int32_t>(offsetof(Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902, ___objectGenerator_1)); }
	inline Func_1_tB330B45018FD695711A62A2C3F7AA2E5197DAB8A * get_objectGenerator_1() const { return ___objectGenerator_1; }
	inline Func_1_tB330B45018FD695711A62A2C3F7AA2E5197DAB8A ** get_address_of_objectGenerator_1() { return &___objectGenerator_1; }
	inline void set_objectGenerator_1(Func_1_tB330B45018FD695711A62A2C3F7AA2E5197DAB8A * value)
	{
		___objectGenerator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectGenerator_1), (void*)value);
	}
};


// Mirror.Pool`1<System.Object>
struct Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Mirror.Pool`1::objects
	Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * ___objects_0;
	// System.Func`1<T> Mirror.Pool`1::objectGenerator
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___objectGenerator_1;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00, ___objects_0)); }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * get_objects_0() const { return ___objects_0; }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_objectGenerator_1() { return static_cast<int32_t>(offsetof(Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00, ___objectGenerator_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_objectGenerator_1() const { return ___objectGenerator_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_objectGenerator_1() { return &___objectGenerator_1; }
	inline void set_objectGenerator_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___objectGenerator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectGenerator_1), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311  : public RuntimeObject
{
public:
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_1;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_2;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_3;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_4;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_5;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CidentityU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher> Mirror.NetworkConnection::batches
	Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * ___batches_7;
	// System.Double Mirror.NetworkConnection::<remoteTimeStamp>k__BackingField
	double ___U3CremoteTimeStampU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_connectionId_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___connectionId_1)); }
	inline int32_t get_connectionId_1() const { return ___connectionId_1; }
	inline int32_t* get_address_of_connectionId_1() { return &___connectionId_1; }
	inline void set_connectionId_1(int32_t value)
	{
		___connectionId_1 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isAuthenticated_2)); }
	inline bool get_isAuthenticated_2() const { return ___isAuthenticated_2; }
	inline bool* get_address_of_isAuthenticated_2() { return &___isAuthenticated_2; }
	inline void set_isAuthenticated_2(bool value)
	{
		___isAuthenticated_2 = value;
	}

	inline static int32_t get_offset_of_authenticationData_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___authenticationData_3)); }
	inline RuntimeObject * get_authenticationData_3() const { return ___authenticationData_3; }
	inline RuntimeObject ** get_address_of_authenticationData_3() { return &___authenticationData_3; }
	inline void set_authenticationData_3(RuntimeObject * value)
	{
		___authenticationData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_3), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isReady_4)); }
	inline bool get_isReady_4() const { return ___isReady_4; }
	inline bool* get_address_of_isReady_4() { return &___isReady_4; }
	inline void set_isReady_4(bool value)
	{
		___isReady_4 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___lastMessageTime_5)); }
	inline float get_lastMessageTime_5() const { return ___lastMessageTime_5; }
	inline float* get_address_of_lastMessageTime_5() { return &___lastMessageTime_5; }
	inline void set_lastMessageTime_5(float value)
	{
		___lastMessageTime_5 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CidentityU3Ek__BackingField_6)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CidentityU3Ek__BackingField_6() const { return ___U3CidentityU3Ek__BackingField_6; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CidentityU3Ek__BackingField_6() { return &___U3CidentityU3Ek__BackingField_6; }
	inline void set_U3CidentityU3Ek__BackingField_6(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CidentityU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_batches_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___batches_7)); }
	inline Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * get_batches_7() const { return ___batches_7; }
	inline Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 ** get_address_of_batches_7() { return &___batches_7; }
	inline void set_batches_7(Dictionary_2_t23D414497C46C84B75FD28526D9E0612B78F1E07 * value)
	{
		___batches_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batches_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremoteTimeStampU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CremoteTimeStampU3Ek__BackingField_8)); }
	inline double get_U3CremoteTimeStampU3Ek__BackingField_8() const { return ___U3CremoteTimeStampU3Ek__BackingField_8; }
	inline double* get_address_of_U3CremoteTimeStampU3Ek__BackingField_8() { return &___U3CremoteTimeStampU3Ek__BackingField_8; }
	inline void set_U3CremoteTimeStampU3Ek__BackingField_8(double value)
	{
		___U3CremoteTimeStampU3Ek__BackingField_8 = value;
	}
};


// Mirror.NetworkServer
struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields
{
public:
	// System.Boolean Mirror.NetworkServer::initialized
	bool ___initialized_0;
	// System.Int32 Mirror.NetworkServer::maxConnections
	int32_t ___maxConnections_1;
	// Mirror.NetworkConnectionToClient Mirror.NetworkServer::<localConnection>k__BackingField
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___U3ClocalConnectionU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connections
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___connections_3;
	// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * ___handlers_4;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkServer::spawned
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___spawned_5;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_6;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_7;
	// System.Boolean Mirror.NetworkServer::isLoadingScene
	bool ___isLoadingScene_8;
	// Mirror.InterestManagement Mirror.NetworkServer::aoi
	InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * ___aoi_9;
	// System.Action`1<Mirror.NetworkConnectionToClient> Mirror.NetworkServer::OnConnectedEvent
	Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * ___OnConnectedEvent_10;
	// System.Action`1<Mirror.NetworkConnectionToClient> Mirror.NetworkServer::OnDisconnectedEvent
	Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * ___OnDisconnectedEvent_11;
	// System.Action`2<Mirror.NetworkConnectionToClient,System.Exception> Mirror.NetworkServer::OnErrorEvent
	Action_2_tAA074BFFCD0A3D9A4205919A05094016EB28BD98 * ___OnErrorEvent_12;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkConnectionToClient> Mirror.NetworkServer::newObservers
	HashSet_1_tB3C9185A6787ED7D6E47A728C937F2BF337E01D3 * ___newObservers_13;
	// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connectionsCopy
	List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * ___connectionsCopy_14;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___initialized_0)); }
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline static int32_t get_offset_of_maxConnections_1() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___maxConnections_1)); }
	inline int32_t get_maxConnections_1() const { return ___maxConnections_1; }
	inline int32_t* get_address_of_maxConnections_1() { return &___maxConnections_1; }
	inline void set_maxConnections_1(int32_t value)
	{
		___maxConnections_1 = value;
	}

	inline static int32_t get_offset_of_U3ClocalConnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3ClocalConnectionU3Ek__BackingField_2)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_U3ClocalConnectionU3Ek__BackingField_2() const { return ___U3ClocalConnectionU3Ek__BackingField_2; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_U3ClocalConnectionU3Ek__BackingField_2() { return &___U3ClocalConnectionU3Ek__BackingField_2; }
	inline void set_U3ClocalConnectionU3Ek__BackingField_2(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___U3ClocalConnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalConnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_connections_3() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connections_3)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_connections_3() const { return ___connections_3; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_connections_3() { return &___connections_3; }
	inline void set_connections_3(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___connections_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_3), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_4() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___handlers_4)); }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * get_handlers_4() const { return ___handlers_4; }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D ** get_address_of_handlers_4() { return &___handlers_4; }
	inline void set_handlers_4(Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * value)
	{
		___handlers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_5() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___spawned_5)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_spawned_5() const { return ___spawned_5; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_spawned_5() { return &___spawned_5; }
	inline void set_spawned_5(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___spawned_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_5), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_6() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___dontListen_6)); }
	inline bool get_dontListen_6() const { return ___dontListen_6; }
	inline bool* get_address_of_dontListen_6() { return &___dontListen_6; }
	inline void set_dontListen_6(bool value)
	{
		___dontListen_6 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3CactiveU3Ek__BackingField_7)); }
	inline bool get_U3CactiveU3Ek__BackingField_7() const { return ___U3CactiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_7() { return &___U3CactiveU3Ek__BackingField_7; }
	inline void set_U3CactiveU3Ek__BackingField_7(bool value)
	{
		___U3CactiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_isLoadingScene_8() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___isLoadingScene_8)); }
	inline bool get_isLoadingScene_8() const { return ___isLoadingScene_8; }
	inline bool* get_address_of_isLoadingScene_8() { return &___isLoadingScene_8; }
	inline void set_isLoadingScene_8(bool value)
	{
		___isLoadingScene_8 = value;
	}

	inline static int32_t get_offset_of_aoi_9() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___aoi_9)); }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * get_aoi_9() const { return ___aoi_9; }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 ** get_address_of_aoi_9() { return &___aoi_9; }
	inline void set_aoi_9(InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * value)
	{
		___aoi_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aoi_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectedEvent_10() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnConnectedEvent_10)); }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * get_OnConnectedEvent_10() const { return ___OnConnectedEvent_10; }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF ** get_address_of_OnConnectedEvent_10() { return &___OnConnectedEvent_10; }
	inline void set_OnConnectedEvent_10(Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * value)
	{
		___OnConnectedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectedEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectedEvent_11() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnDisconnectedEvent_11)); }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * get_OnDisconnectedEvent_11() const { return ___OnDisconnectedEvent_11; }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF ** get_address_of_OnDisconnectedEvent_11() { return &___OnDisconnectedEvent_11; }
	inline void set_OnDisconnectedEvent_11(Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * value)
	{
		___OnDisconnectedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnErrorEvent_12() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___OnErrorEvent_12)); }
	inline Action_2_tAA074BFFCD0A3D9A4205919A05094016EB28BD98 * get_OnErrorEvent_12() const { return ___OnErrorEvent_12; }
	inline Action_2_tAA074BFFCD0A3D9A4205919A05094016EB28BD98 ** get_address_of_OnErrorEvent_12() { return &___OnErrorEvent_12; }
	inline void set_OnErrorEvent_12(Action_2_tAA074BFFCD0A3D9A4205919A05094016EB28BD98 * value)
	{
		___OnErrorEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnErrorEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_newObservers_13() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___newObservers_13)); }
	inline HashSet_1_tB3C9185A6787ED7D6E47A728C937F2BF337E01D3 * get_newObservers_13() const { return ___newObservers_13; }
	inline HashSet_1_tB3C9185A6787ED7D6E47A728C937F2BF337E01D3 ** get_address_of_newObservers_13() { return &___newObservers_13; }
	inline void set_newObservers_13(HashSet_1_tB3C9185A6787ED7D6E47A728C937F2BF337E01D3 * value)
	{
		___newObservers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObservers_13), (void*)value);
	}

	inline static int32_t get_offset_of_connectionsCopy_14() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connectionsCopy_14)); }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * get_connectionsCopy_14() const { return ___connectionsCopy_14; }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 ** get_address_of_connectionsCopy_14() { return &___connectionsCopy_14; }
	inline void set_connectionsCopy_14(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * value)
	{
		___connectionsCopy_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionsCopy_14), (void*)value);
	}
};


// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};


// Mirror.NetworkWriterPool
struct NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0  : public RuntimeObject
{
public:

public:
};

struct NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields
{
public:
	// Mirror.Pool`1<Mirror.NetworkWriterPooled> Mirror.NetworkWriterPool::Pool
	Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * ___Pool_0;

public:
	inline static int32_t get_offset_of_Pool_0() { return static_cast<int32_t>(offsetof(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields, ___Pool_0)); }
	inline Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * get_Pool_0() const { return ___Pool_0; }
	inline Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 ** get_address_of_Pool_0() { return &___Pool_0; }
	inline void set_Pool_0(Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * value)
	{
		___Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pool_0), (void*)value);
	}
};


// Mirror.Examples.MultipleAdditiveScenes.Spawner
struct Spawner_tE1D9FC7CBE2C02A623247F9BBE98312C839594B4  : public RuntimeObject
{
public:

public:
};


// Mirror.Examples.NetworkRoom.Spawner
struct Spawner_tBBF6EA0F50BBB5D8CA665B2F0EFFF790BDABC8CC  : public RuntimeObject
{
public:

public:
};


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


// Mirror.SyncObject
struct SyncObject_tF740D66879BE22A643953CC31ABABB0466371195  : public RuntimeObject
{
public:
	// System.Action Mirror.SyncObject::OnDirty
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDirty_0;
	// System.Func`1<System.Boolean> Mirror.SyncObject::IsRecording
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___IsRecording_1;

public:
	inline static int32_t get_offset_of_OnDirty_0() { return static_cast<int32_t>(offsetof(SyncObject_tF740D66879BE22A643953CC31ABABB0466371195, ___OnDirty_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDirty_0() const { return ___OnDirty_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDirty_0() { return &___OnDirty_0; }
	inline void set_OnDirty_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDirty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDirty_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsRecording_1() { return static_cast<int32_t>(offsetof(SyncObject_tF740D66879BE22A643953CC31ABABB0466371195, ___IsRecording_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_IsRecording_1() const { return ___IsRecording_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_IsRecording_1() { return &___IsRecording_1; }
	inline void set_IsRecording_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___IsRecording_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsRecording_1), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11
struct U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::<>4__this
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * ___U3CU3E4__this_2;
	// Mirror.NetworkConnectionToClient Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::conn
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn_3;
	// UnityEngine.GameObject Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::<player>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CplayerU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097, ___U3CU3E4__this_2)); }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_conn_3() { return static_cast<int32_t>(offsetof(U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097, ___conn_3)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_conn_3() const { return ___conn_3; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_conn_3() { return &___conn_3; }
	inline void set_conn_3(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___conn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CplayerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097, ___U3CplayerU3E5__2_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CplayerU3E5__2_4() const { return ___U3CplayerU3E5__2_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CplayerU3E5__2_4() { return &___U3CplayerU3E5__2_4; }
	inline void set_U3CplayerU3E5__2_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CplayerU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplayerU3E5__2_4), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7
struct U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::<>4__this
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * ___U3CU3E4__this_2;
	// System.String Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::sceneName
	String_t* ___sceneName_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2, ___U3CU3E4__this_2)); }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_3() { return static_cast<int32_t>(offsetof(U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2, ___sceneName_3)); }
	inline String_t* get_sceneName_3() const { return ___sceneName_3; }
	inline String_t** get_address_of_sceneName_3() { return &___sceneName_3; }
	inline void set_sceneName_3(String_t* value)
	{
		___sceneName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_3), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5
struct U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::<>4__this
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * ___U3CU3E4__this_2;
	// System.String[] Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::<>7__wrap1
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CU3E7__wrap1_3;
	// System.Int32 Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62, ___U3CU3E4__this_2)); }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62, ___U3CU3E7__wrap1_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8
struct U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::<>4__this
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * ___U3CU3E4__this_2;
	// System.String Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::sceneName
	String_t* ___sceneName_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653, ___U3CU3E4__this_2)); }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_3() { return static_cast<int32_t>(offsetof(U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653, ___sceneName_3)); }
	inline String_t* get_sceneName_3() const { return ___sceneName_3; }
	inline String_t** get_address_of_sceneName_3() { return &___sceneName_3; }
	inline void set_sceneName_3(String_t* value)
	{
		___sceneName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_3), (void*)value);
	}
};


// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5
struct U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::<>4__this
	AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * ___U3CU3E4__this_2;
	// System.String[] Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::<>7__wrap1
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CU3E7__wrap1_3;
	// System.Int32 Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7, ___U3CU3E4__this_2)); }
	inline AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7, ___U3CU3E7__wrap1_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6
struct U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::<>4__this
	AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * ___U3CU3E4__this_2;
	// System.String[] Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::<>7__wrap1
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CU3E7__wrap1_3;
	// System.Int32 Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4, ___U3CU3E4__this_2)); }
	inline AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4, ___U3CU3E7__wrap1_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Mirror.Examples.MultipleMatch.CanvasController/<>c
struct U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields
{
public:
	// Mirror.Examples.MultipleMatch.CanvasController/<>c Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9
	U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * ___U3CU3E9_0;
	// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9__35_0
	Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * ___U3CU3E9__35_0_1;
	// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9__42_0
	Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * ___U3CU3E9__42_0_2;
	// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9__43_0
	Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * ___U3CU3E9__43_0_3;
	// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9__44_0
	Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * ___U3CU3E9__44_0_4;
	// System.Func`2<Mirror.NetworkConnectionToClient,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController/<>c::<>9__47_0
	Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * ___U3CU3E9__47_0_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9__35_0_1)); }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * get_U3CU3E9__35_0_1() const { return ___U3CU3E9__35_0_1; }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C ** get_address_of_U3CU3E9__35_0_1() { return &___U3CU3E9__35_0_1; }
	inline void set_U3CU3E9__35_0_1(Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * value)
	{
		___U3CU3E9__35_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9__42_0_2)); }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * get_U3CU3E9__42_0_2() const { return ___U3CU3E9__42_0_2; }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C ** get_address_of_U3CU3E9__42_0_2() { return &___U3CU3E9__42_0_2; }
	inline void set_U3CU3E9__42_0_2(Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * value)
	{
		___U3CU3E9__42_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9__43_0_3)); }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * get_U3CU3E9__43_0_3() const { return ___U3CU3E9__43_0_3; }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C ** get_address_of_U3CU3E9__43_0_3() { return &___U3CU3E9__43_0_3; }
	inline void set_U3CU3E9__43_0_3(Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * value)
	{
		___U3CU3E9__43_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__44_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9__44_0_4)); }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * get_U3CU3E9__44_0_4() const { return ___U3CU3E9__44_0_4; }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C ** get_address_of_U3CU3E9__44_0_4() { return &___U3CU3E9__44_0_4; }
	inline void set_U3CU3E9__44_0_4(Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * value)
	{
		___U3CU3E9__44_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__44_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields, ___U3CU3E9__47_0_5)); }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * get_U3CU3E9__47_0_5() const { return ___U3CU3E9__47_0_5; }
	inline Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C ** get_address_of_U3CU3E9__47_0_5() { return &___U3CU3E9__47_0_5; }
	inline void set_U3CU3E9__47_0_5(Func_2_tE300F2D77A6CC3715412C9671C6A260F71F0C82C * value)
	{
		___U3CU3E9__47_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_5), (void*)value);
	}
};


// Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8
struct U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::waitTime
	float ___waitTime_2;
	// Mirror.Examples.Chat.ChatAuthenticator Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::<>4__this
	ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * ___U3CU3E4__this_3;
	// Mirror.NetworkConnectionToClient Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::conn
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590, ___U3CU3E4__this_3)); }
	inline ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_conn_4() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590, ___conn_4)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_conn_4() const { return ___conn_4; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_conn_4() { return &___conn_4; }
	inline void set_conn_4(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___conn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_4), (void*)value);
	}
};


// Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12
struct U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.Chat.ChatUI Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::<>4__this
	ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * ___U3CU3E4__this_2;
	// System.String Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150, ___U3CU3E4__this_2)); }
	inline ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5
struct U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.FadeInOut Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::<>4__this
	FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * ___U3CU3E4__this_2;
	// System.Single Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::<alpha>5__2
	float ___U3CalphaU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700, ___U3CU3E4__this_2)); }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700, ___U3CalphaU3E5__2_3)); }
	inline float get_U3CalphaU3E5__2_3() const { return ___U3CalphaU3E5__2_3; }
	inline float* get_address_of_U3CalphaU3E5__2_3() { return &___U3CalphaU3E5__2_3; }
	inline void set_U3CalphaU3E5__2_3(float value)
	{
		___U3CalphaU3E5__2_3 = value;
	}
};


// Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6
struct U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.AdditiveLevels.FadeInOut Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::<>4__this
	FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * ___U3CU3E4__this_2;
	// System.Single Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::<alpha>5__2
	float ___U3CalphaU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8, ___U3CU3E4__this_2)); }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8, ___U3CalphaU3E5__2_3)); }
	inline float get_U3CalphaU3E5__2_3() const { return ___U3CalphaU3E5__2_3; }
	inline float* get_address_of_U3CalphaU3E5__2_3() { return &___U3CalphaU3E5__2_3; }
	inline void set_U3CalphaU3E5__2_3(float value)
	{
		___U3CalphaU3E5__2_3 = value;
	}
};


// Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17
struct U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.MultipleMatch.MatchController Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::<>4__this
	MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692, ___U3CU3E4__this_2)); }
	inline MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32
struct U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.MultipleMatch.MatchController Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::<>4__this
	MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * ___U3CU3E4__this_2;
	// System.Boolean Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::disconnected
	bool ___disconnected_3;
	// Mirror.NetworkConnectionToClient Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::conn
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3, ___U3CU3E4__this_2)); }
	inline MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_disconnected_3() { return static_cast<int32_t>(offsetof(U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3, ___disconnected_3)); }
	inline bool get_disconnected_3() const { return ___disconnected_3; }
	inline bool* get_address_of_disconnected_3() { return &___disconnected_3; }
	inline void set_disconnected_3(bool value)
	{
		___disconnected_3 = value;
	}

	inline static int32_t get_offset_of_conn_4() { return static_cast<int32_t>(offsetof(U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3, ___conn_4)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_conn_4() const { return ___conn_4; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_conn_4() { return &___conn_4; }
	inline void set_conn_4(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___conn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_4), (void*)value);
	}
};


// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13
struct U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::<index>5__2
	int32_t ___U3CindexU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94, ___U3CindexU3E5__2_2)); }
	inline int32_t get_U3CindexU3E5__2_2() const { return ___U3CindexU3E5__2_2; }
	inline int32_t* get_address_of_U3CindexU3E5__2_2() { return &___U3CindexU3E5__2_2; }
	inline void set_U3CindexU3E5__2_2(int32_t value)
	{
		___U3CindexU3E5__2_2 = value;
	}
};


// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7
struct U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::<>4__this
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * ___U3CU3E4__this_2;
	// Mirror.NetworkConnectionToClient Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::conn
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60, ___U3CU3E4__this_2)); }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_conn_3() { return static_cast<int32_t>(offsetof(U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60, ___conn_3)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_conn_3() const { return ___conn_3; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_conn_3() { return &___conn_3; }
	inline void set_conn_3(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___conn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_3), (void*)value);
	}
};


// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9
struct U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::<>4__this
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * ___U3CU3E4__this_2;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::<index>5__2
	int32_t ___U3CindexU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB, ___U3CU3E4__this_2)); }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB, ___U3CindexU3E5__2_3)); }
	inline int32_t get_U3CindexU3E5__2_3() const { return ___U3CindexU3E5__2_3; }
	inline int32_t* get_address_of_U3CindexU3E5__2_3() { return &___U3CindexU3E5__2_3; }
	inline void set_U3CindexU3E5__2_3(int32_t value)
	{
		___U3CindexU3E5__2_3 = value;
	}
};


// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11
struct U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::<>4__this
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * ___U3CU3E4__this_2;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::<index>5__2
	int32_t ___U3CindexU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10, ___U3CU3E4__this_2)); }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10, ___U3CindexU3E5__2_3)); }
	inline int32_t get_U3CindexU3E5__2_3() const { return ___U3CindexU3E5__2_3; }
	inline int32_t* get_address_of_U3CindexU3E5__2_3() { return &___U3CindexU3E5__2_3; }
	inline void set_U3CindexU3E5__2_3(int32_t value)
	{
		___U3CindexU3E5__2_3 = value;
	}
};


// Mirror.Examples.Pong.NetworkManagerPong/<>c
struct U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_StaticFields
{
public:
	// Mirror.Examples.Pong.NetworkManagerPong/<>c Mirror.Examples.Pong.NetworkManagerPong/<>c::<>9
	U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.GameObject> Mirror.Examples.Pong.NetworkManagerPong/<>c::<>9__3_0
	Predicate_1_tA7752B0A4A9766B08D060160D0440B3FA7475B0B * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Predicate_1_tA7752B0A4A9766B08D060160D0440B3FA7475B0B * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Predicate_1_tA7752B0A4A9766B08D060160D0440B3FA7475B0B ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Predicate_1_tA7752B0A4A9766B08D060160D0440B3FA7475B0B * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8
struct U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_2;
	// Mirror.Examples.AdditiveLevels.Portal Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::<>4__this
	Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * ___U3CU3E4__this_3;
	// Mirror.NetworkConnectionToClient Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::<conn>5__2
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___U3CconnU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC, ___player_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_2() const { return ___player_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC, ___U3CU3E4__this_3)); }
	inline Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC, ___U3CconnU3E5__2_4)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_U3CconnU3E5__2_4() const { return ___U3CconnU3E5__2_4; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_U3CconnU3E5__2_4() { return &___U3CconnU3E5__2_4; }
	inline void set_U3CconnU3E5__2_4(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___U3CconnU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnU3E5__2_4), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// Mirror.SyncIDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483  : public SyncObject_tF740D66879BE22A643953CC31ABABB0466371195
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Mirror.SyncIDictionary`2::objects
	RuntimeObject* ___objects_2;
	// System.Boolean Mirror.SyncIDictionary`2::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_3;
	// Mirror.SyncIDictionary`2/SyncDictionaryChanged<TKey,TValue> Mirror.SyncIDictionary`2::Callback
	SyncDictionaryChanged_tE5AFA20CCB2F051D41078F3B40B95143DF92C0FA * ___Callback_4;
	// System.Collections.Generic.List`1<Mirror.SyncIDictionary`2/Change<TKey,TValue>> Mirror.SyncIDictionary`2::changes
	List_1_t3C30DA04C97415B693281D368366D834943DDB0E * ___changes_5;
	// System.Int32 Mirror.SyncIDictionary`2::changesAhead
	int32_t ___changesAhead_6;

public:
	inline static int32_t get_offset_of_objects_2() { return static_cast<int32_t>(offsetof(SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483, ___objects_2)); }
	inline RuntimeObject* get_objects_2() const { return ___objects_2; }
	inline RuntimeObject** get_address_of_objects_2() { return &___objects_2; }
	inline void set_objects_2(RuntimeObject* value)
	{
		___objects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483, ___U3CIsReadOnlyU3Ek__BackingField_3)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_3() const { return ___U3CIsReadOnlyU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_3() { return &___U3CIsReadOnlyU3Ek__BackingField_3; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_3(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483, ___Callback_4)); }
	inline SyncDictionaryChanged_tE5AFA20CCB2F051D41078F3B40B95143DF92C0FA * get_Callback_4() const { return ___Callback_4; }
	inline SyncDictionaryChanged_tE5AFA20CCB2F051D41078F3B40B95143DF92C0FA ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(SyncDictionaryChanged_tE5AFA20CCB2F051D41078F3B40B95143DF92C0FA * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_changes_5() { return static_cast<int32_t>(offsetof(SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483, ___changes_5)); }
	inline List_1_t3C30DA04C97415B693281D368366D834943DDB0E * get_changes_5() const { return ___changes_5; }
	inline List_1_t3C30DA04C97415B693281D368366D834943DDB0E ** get_address_of_changes_5() { return &___changes_5; }
	inline void set_changes_5(List_1_t3C30DA04C97415B693281D368366D834943DDB0E * value)
	{
		___changes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changes_5), (void*)value);
	}

	inline static int32_t get_offset_of_changesAhead_6() { return static_cast<int32_t>(offsetof(SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483, ___changesAhead_6)); }
	inline int32_t get_changesAhead_6() const { return ___changesAhead_6; }
	inline int32_t* get_address_of_changesAhead_6() { return &___changesAhead_6; }
	inline void set_changesAhead_6(int32_t value)
	{
		___changesAhead_6 = value;
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A  : public NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnectionToClient::observing
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___observing_9;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnectionToClient::clientOwnedObjects
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___clientOwnedObjects_10;
	// Mirror.Unbatcher Mirror.NetworkConnectionToClient::unbatcher
	Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * ___unbatcher_11;

public:
	inline static int32_t get_offset_of_observing_9() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___observing_9)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_observing_9() const { return ___observing_9; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_observing_9() { return &___observing_9; }
	inline void set_observing_9(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___observing_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observing_9), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_10() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___clientOwnedObjects_10)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_clientOwnedObjects_10() const { return ___clientOwnedObjects_10; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_clientOwnedObjects_10() { return &___clientOwnedObjects_10; }
	inline void set_clientOwnedObjects_10(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___clientOwnedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_unbatcher_11() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A, ___unbatcher_11)); }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * get_unbatcher_11() const { return ___unbatcher_11; }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 ** get_address_of_unbatcher_11() { return &___unbatcher_11; }
	inline void set_unbatcher_11(Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * value)
	{
		___unbatcher_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unbatcher_11), (void*)value);
	}
};


// Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9 
{
public:
	// System.Int32 Mirror.NetworkIdentitySerialization::tick
	int32_t ___tick_0;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::ownerWriter
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::observersWriter
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;

public:
	inline static int32_t get_offset_of_tick_0() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___tick_0)); }
	inline int32_t get_tick_0() const { return ___tick_0; }
	inline int32_t* get_address_of_tick_0() { return &___tick_0; }
	inline void set_tick_0(int32_t value)
	{
		___tick_0 = value;
	}

	inline static int32_t get_offset_of_ownerWriter_1() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___ownerWriter_1)); }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * get_ownerWriter_1() const { return ___ownerWriter_1; }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A ** get_address_of_ownerWriter_1() { return &___ownerWriter_1; }
	inline void set_ownerWriter_1(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * value)
	{
		___ownerWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownerWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_observersWriter_2() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9, ___observersWriter_2)); }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * get_observersWriter_2() const { return ___observersWriter_2; }
	inline NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A ** get_address_of_observersWriter_2() { return &___observersWriter_2; }
	inline void set_observersWriter_2(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * value)
	{
		___observersWriter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersWriter_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9_marshaled_pinvoke
{
	int32_t ___tick_0;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;
};
// Native definition for COM marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9_marshaled_com
{
	int32_t ___tick_0;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___ownerWriter_1;
	NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___observersWriter_2;
};

// Mirror.NetworkWriterPooled
struct NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1  : public NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A
{
public:

public:
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E 
{
public:
	// System.String Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage::authUsername
	String_t* ___authUsername_0;

public:
	inline static int32_t get_offset_of_authUsername_0() { return static_cast<int32_t>(offsetof(AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E, ___authUsername_0)); }
	inline String_t* get_authUsername_0() const { return ___authUsername_0; }
	inline String_t** get_address_of_authUsername_0() { return &___authUsername_0; }
	inline void set_authUsername_0(String_t* value)
	{
		___authUsername_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authUsername_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_pinvoke
{
	char* ___authUsername_0;
};
// Native definition for COM marshalling of Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_com
{
	Il2CppChar* ___authUsername_0;
};

// Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29 
{
public:
	// System.Byte Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage::code
	uint8_t ___code_0;
	// System.String Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29, ___code_0)); }
	inline uint8_t get_code_0() const { return ___code_0; }
	inline uint8_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(uint8_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_pinvoke
{
	uint8_t ___code_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_com
{
	uint8_t ___code_0;
	Il2CppChar* ___message_1;
};

// Mirror.SyncDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20  : public SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483
{
public:

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Examples.MultipleMatch.CellValue
struct CellValue_tFA3977E894154C486C0B8071410E5D8EE53D726E 
{
public:
	// System.UInt16 Mirror.Examples.MultipleMatch.CellValue::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CellValue_tFA3977E894154C486C0B8071410E5D8EE53D726E, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// Mirror.ConnectState
struct ConnectState_t15686F4328D9B1B20E6771C0FED6F2AE85FBB129 
{
public:
	// System.Int32 Mirror.ConnectState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectState_t15686F4328D9B1B20E6771C0FED6F2AE85FBB129, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LocalPhysicsMode
struct LocalPhysicsMode_t0BC6949E496E4E126141A944F9B5A26939798BE6 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LocalPhysicsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocalPhysicsMode_t0BC6949E496E4E126141A944F9B5A26939798BE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkManagerMode
struct NetworkManagerMode_t53B2212CEC3ED0A68CA0BE2365C233C7E2C83DFD 
{
public:
	// System.Int32 Mirror.NetworkManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkManagerMode_t53B2212CEC3ED0A68CA0BE2365C233C7E2C83DFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___buffer_0)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
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

// Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.PlayerInfo::playerIndex
	int32_t ___playerIndex_0;
	// System.Boolean Mirror.Examples.MultipleMatch.PlayerInfo::ready
	bool ___ready_1;
	// System.Guid Mirror.Examples.MultipleMatch.PlayerInfo::matchId
	Guid_t  ___matchId_2;

public:
	inline static int32_t get_offset_of_playerIndex_0() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___playerIndex_0)); }
	inline int32_t get_playerIndex_0() const { return ___playerIndex_0; }
	inline int32_t* get_address_of_playerIndex_0() { return &___playerIndex_0; }
	inline void set_playerIndex_0(int32_t value)
	{
		___playerIndex_0 = value;
	}

	inline static int32_t get_offset_of_ready_1() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___ready_1)); }
	inline bool get_ready_1() const { return ___ready_1; }
	inline bool* get_address_of_ready_1() { return &___ready_1; }
	inline void set_ready_1(bool value)
	{
		___ready_1 = value;
	}

	inline static int32_t get_offset_of_matchId_2() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___matchId_2)); }
	inline Guid_t  get_matchId_2() const { return ___matchId_2; }
	inline Guid_t * get_address_of_matchId_2() { return &___matchId_2; }
	inline void set_matchId_2(Guid_t  value)
	{
		___matchId_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_pinvoke
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};
// Native definition for COM marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_com
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};

// Mirror.PlayerSpawnMethod
struct PlayerSpawnMethod_t621298130B9992D978B1AC813054DBE1D43D7D96 
{
public:
	// System.Int32 Mirror.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t621298130B9992D978B1AC813054DBE1D43D7D96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Mirror.SceneOperation
struct SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E 
{
public:
	// System.Byte Mirror.SceneOperation::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SyncMode
struct SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2 
{
public:
	// System.Int32 Mirror.SyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Visibility
struct Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9 
{
public:
	// System.Int32 Mirror.Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_tCFB30738FC0DA69F05112777E1A9FB99E92DD1B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
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


// UnityEngine.SceneManagement.LoadSceneParameters
struct LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 
{
public:
	// UnityEngine.SceneManagement.LoadSceneMode UnityEngine.SceneManagement.LoadSceneParameters::m_LoadSceneMode
	int32_t ___m_LoadSceneMode_0;
	// UnityEngine.SceneManagement.LocalPhysicsMode UnityEngine.SceneManagement.LoadSceneParameters::m_LocalPhysicsMode
	int32_t ___m_LocalPhysicsMode_1;

public:
	inline static int32_t get_offset_of_m_LoadSceneMode_0() { return static_cast<int32_t>(offsetof(LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2, ___m_LoadSceneMode_0)); }
	inline int32_t get_m_LoadSceneMode_0() const { return ___m_LoadSceneMode_0; }
	inline int32_t* get_address_of_m_LoadSceneMode_0() { return &___m_LoadSceneMode_0; }
	inline void set_m_LoadSceneMode_0(int32_t value)
	{
		___m_LoadSceneMode_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalPhysicsMode_1() { return static_cast<int32_t>(offsetof(LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2, ___m_LocalPhysicsMode_1)); }
	inline int32_t get_m_LocalPhysicsMode_1() const { return ___m_LocalPhysicsMode_1; }
	inline int32_t* get_address_of_m_LocalPhysicsMode_1() { return &___m_LocalPhysicsMode_1; }
	inline void set_m_LocalPhysicsMode_1(int32_t value)
	{
		___m_LocalPhysicsMode_1 = value;
	}
};


// Mirror.Examples.MultipleMatch.MatchPlayerData
struct MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392 
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.MatchPlayerData::playerIndex
	int32_t ___playerIndex_0;
	// System.Int32 Mirror.Examples.MultipleMatch.MatchPlayerData::wins
	int32_t ___wins_1;
	// Mirror.Examples.MultipleMatch.CellValue Mirror.Examples.MultipleMatch.MatchPlayerData::currentScore
	uint16_t ___currentScore_2;

public:
	inline static int32_t get_offset_of_playerIndex_0() { return static_cast<int32_t>(offsetof(MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392, ___playerIndex_0)); }
	inline int32_t get_playerIndex_0() const { return ___playerIndex_0; }
	inline int32_t* get_address_of_playerIndex_0() { return &___playerIndex_0; }
	inline void set_playerIndex_0(int32_t value)
	{
		___playerIndex_0 = value;
	}

	inline static int32_t get_offset_of_wins_1() { return static_cast<int32_t>(offsetof(MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392, ___wins_1)); }
	inline int32_t get_wins_1() const { return ___wins_1; }
	inline int32_t* get_address_of_wins_1() { return &___wins_1; }
	inline void set_wins_1(int32_t value)
	{
		___wins_1 = value;
	}

	inline static int32_t get_offset_of_currentScore_2() { return static_cast<int32_t>(offsetof(MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392, ___currentScore_2)); }
	inline uint16_t get_currentScore_2() const { return ___currentScore_2; }
	inline uint16_t* get_address_of_currentScore_2() { return &___currentScore_2; }
	inline void set_currentScore_2(uint16_t value)
	{
		___currentScore_2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// Mirror.NetworkClient
struct NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15  : public RuntimeObject
{
public:

public:
};

struct NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate> Mirror.NetworkClient::handlers
	Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * ___handlers_0;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkClient::spawned
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___spawned_1;
	// Mirror.NetworkConnection Mirror.NetworkClient::<connection>k__BackingField
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___U3CconnectionU3Ek__BackingField_2;
	// System.Boolean Mirror.NetworkClient::ready
	bool ___ready_3;
	// Mirror.NetworkIdentity Mirror.NetworkClient::<localPlayer>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3ClocalPlayerU3Ek__BackingField_4;
	// Mirror.ConnectState Mirror.NetworkClient::connectState
	int32_t ___connectState_5;
	// System.Action Mirror.NetworkClient::OnConnectedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnConnectedEvent_6;
	// System.Action Mirror.NetworkClient::OnDisconnectedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDisconnectedEvent_7;
	// System.Action`1<System.Exception> Mirror.NetworkClient::OnErrorEvent
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___OnErrorEvent_8;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject> Mirror.NetworkClient::prefabs
	Dictionary_2_t26A96311B045C0EA9BAAEF6E836C515D1F1A4663 * ___prefabs_9;
	// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.SpawnHandlerDelegate> Mirror.NetworkClient::spawnHandlers
	Dictionary_2_t7CC03CE2616B963DEA8AA98EAB118B8B8F6F31B5 * ___spawnHandlers_10;
	// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.UnSpawnDelegate> Mirror.NetworkClient::unspawnHandlers
	Dictionary_2_tF2595C06836CD6AF8DFA199D553B2AAB5F2C384A * ___unspawnHandlers_11;
	// System.Boolean Mirror.NetworkClient::isSpawnFinished
	bool ___isSpawnFinished_12;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkClient::spawnableObjects
	Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * ___spawnableObjects_13;
	// Mirror.Unbatcher Mirror.NetworkClient::unbatcher
	Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * ___unbatcher_14;
	// Mirror.InterestManagement Mirror.NetworkClient::aoi
	InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * ___aoi_15;
	// System.Boolean Mirror.NetworkClient::isLoadingScene
	bool ___isLoadingScene_16;
	// System.Collections.Generic.List`1<System.UInt32> Mirror.NetworkClient::removeFromSpawned
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___removeFromSpawned_17;

public:
	inline static int32_t get_offset_of_handlers_0() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___handlers_0)); }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * get_handlers_0() const { return ___handlers_0; }
	inline Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D ** get_address_of_handlers_0() { return &___handlers_0; }
	inline void set_handlers_0(Dictionary_2_tE1F6A982D7C7C6C4A5BCE3218D43EDB90A014A7D * value)
	{
		___handlers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_0), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_1() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___spawned_1)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_spawned_1() const { return ___spawned_1; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_spawned_1() { return &___spawned_1; }
	inline void set_spawned_1(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___spawned_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___U3CconnectionU3Ek__BackingField_2)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_U3CconnectionU3Ek__BackingField_2() const { return ___U3CconnectionU3Ek__BackingField_2; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_U3CconnectionU3Ek__BackingField_2() { return &___U3CconnectionU3Ek__BackingField_2; }
	inline void set_U3CconnectionU3Ek__BackingField_2(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___U3CconnectionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_ready_3() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___ready_3)); }
	inline bool get_ready_3() const { return ___ready_3; }
	inline bool* get_address_of_ready_3() { return &___ready_3; }
	inline void set_ready_3(bool value)
	{
		___ready_3 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPlayerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___U3ClocalPlayerU3Ek__BackingField_4)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3ClocalPlayerU3Ek__BackingField_4() const { return ___U3ClocalPlayerU3Ek__BackingField_4; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3ClocalPlayerU3Ek__BackingField_4() { return &___U3ClocalPlayerU3Ek__BackingField_4; }
	inline void set_U3ClocalPlayerU3Ek__BackingField_4(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3ClocalPlayerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalPlayerU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_connectState_5() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___connectState_5)); }
	inline int32_t get_connectState_5() const { return ___connectState_5; }
	inline int32_t* get_address_of_connectState_5() { return &___connectState_5; }
	inline void set_connectState_5(int32_t value)
	{
		___connectState_5 = value;
	}

	inline static int32_t get_offset_of_OnConnectedEvent_6() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___OnConnectedEvent_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnConnectedEvent_6() const { return ___OnConnectedEvent_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnConnectedEvent_6() { return &___OnConnectedEvent_6; }
	inline void set_OnConnectedEvent_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnConnectedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectedEvent_7() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___OnDisconnectedEvent_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDisconnectedEvent_7() const { return ___OnDisconnectedEvent_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDisconnectedEvent_7() { return &___OnDisconnectedEvent_7; }
	inline void set_OnDisconnectedEvent_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDisconnectedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectedEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnErrorEvent_8() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___OnErrorEvent_8)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_OnErrorEvent_8() const { return ___OnErrorEvent_8; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_OnErrorEvent_8() { return &___OnErrorEvent_8; }
	inline void set_OnErrorEvent_8(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___OnErrorEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnErrorEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_prefabs_9() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___prefabs_9)); }
	inline Dictionary_2_t26A96311B045C0EA9BAAEF6E836C515D1F1A4663 * get_prefabs_9() const { return ___prefabs_9; }
	inline Dictionary_2_t26A96311B045C0EA9BAAEF6E836C515D1F1A4663 ** get_address_of_prefabs_9() { return &___prefabs_9; }
	inline void set_prefabs_9(Dictionary_2_t26A96311B045C0EA9BAAEF6E836C515D1F1A4663 * value)
	{
		___prefabs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabs_9), (void*)value);
	}

	inline static int32_t get_offset_of_spawnHandlers_10() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___spawnHandlers_10)); }
	inline Dictionary_2_t7CC03CE2616B963DEA8AA98EAB118B8B8F6F31B5 * get_spawnHandlers_10() const { return ___spawnHandlers_10; }
	inline Dictionary_2_t7CC03CE2616B963DEA8AA98EAB118B8B8F6F31B5 ** get_address_of_spawnHandlers_10() { return &___spawnHandlers_10; }
	inline void set_spawnHandlers_10(Dictionary_2_t7CC03CE2616B963DEA8AA98EAB118B8B8F6F31B5 * value)
	{
		___spawnHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnHandlers_10), (void*)value);
	}

	inline static int32_t get_offset_of_unspawnHandlers_11() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___unspawnHandlers_11)); }
	inline Dictionary_2_tF2595C06836CD6AF8DFA199D553B2AAB5F2C384A * get_unspawnHandlers_11() const { return ___unspawnHandlers_11; }
	inline Dictionary_2_tF2595C06836CD6AF8DFA199D553B2AAB5F2C384A ** get_address_of_unspawnHandlers_11() { return &___unspawnHandlers_11; }
	inline void set_unspawnHandlers_11(Dictionary_2_tF2595C06836CD6AF8DFA199D553B2AAB5F2C384A * value)
	{
		___unspawnHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unspawnHandlers_11), (void*)value);
	}

	inline static int32_t get_offset_of_isSpawnFinished_12() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___isSpawnFinished_12)); }
	inline bool get_isSpawnFinished_12() const { return ___isSpawnFinished_12; }
	inline bool* get_address_of_isSpawnFinished_12() { return &___isSpawnFinished_12; }
	inline void set_isSpawnFinished_12(bool value)
	{
		___isSpawnFinished_12 = value;
	}

	inline static int32_t get_offset_of_spawnableObjects_13() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___spawnableObjects_13)); }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * get_spawnableObjects_13() const { return ___spawnableObjects_13; }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C ** get_address_of_spawnableObjects_13() { return &___spawnableObjects_13; }
	inline void set_spawnableObjects_13(Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * value)
	{
		___spawnableObjects_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnableObjects_13), (void*)value);
	}

	inline static int32_t get_offset_of_unbatcher_14() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___unbatcher_14)); }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * get_unbatcher_14() const { return ___unbatcher_14; }
	inline Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 ** get_address_of_unbatcher_14() { return &___unbatcher_14; }
	inline void set_unbatcher_14(Unbatcher_t9E7E1A61D3B799B2182484F33A2FE2EB687ABD39 * value)
	{
		___unbatcher_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unbatcher_14), (void*)value);
	}

	inline static int32_t get_offset_of_aoi_15() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___aoi_15)); }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * get_aoi_15() const { return ___aoi_15; }
	inline InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 ** get_address_of_aoi_15() { return &___aoi_15; }
	inline void set_aoi_15(InterestManagement_tD79A9D8F926F818D953AD8C27ECF2FB03B6327A7 * value)
	{
		___aoi_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aoi_15), (void*)value);
	}

	inline static int32_t get_offset_of_isLoadingScene_16() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___isLoadingScene_16)); }
	inline bool get_isLoadingScene_16() const { return ___isLoadingScene_16; }
	inline bool* get_address_of_isLoadingScene_16() { return &___isLoadingScene_16; }
	inline void set_isLoadingScene_16(bool value)
	{
		___isLoadingScene_16 = value;
	}

	inline static int32_t get_offset_of_removeFromSpawned_17() { return static_cast<int32_t>(offsetof(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields, ___removeFromSpawned_17)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_removeFromSpawned_17() const { return ___removeFromSpawned_17; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_removeFromSpawned_17() { return &___removeFromSpawned_17; }
	inline void set_removeFromSpawned_17(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___removeFromSpawned_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFromSpawned_17), (void*)value);
	}
};


// Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE 
{
public:
	// System.String Mirror.SceneMessage::sceneName
	String_t* ___sceneName_0;
	// Mirror.SceneOperation Mirror.SceneMessage::sceneOperation
	uint8_t ___sceneOperation_1;
	// System.Boolean Mirror.SceneMessage::customHandling
	bool ___customHandling_2;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperation_1() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneOperation_1)); }
	inline uint8_t get_sceneOperation_1() const { return ___sceneOperation_1; }
	inline uint8_t* get_address_of_sceneOperation_1() { return &___sceneOperation_1; }
	inline void set_sceneOperation_1(uint8_t value)
	{
		___sceneOperation_1 = value;
	}

	inline static int32_t get_offset_of_customHandling_2() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___customHandling_2)); }
	inline bool get_customHandling_2() const { return ___customHandling_2; }
	inline bool* get_address_of_customHandling_2() { return &___customHandling_2; }
	inline void set_customHandling_2(bool value)
	{
		___customHandling_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke
{
	char* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};
// Native definition for COM marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com
{
	Il2CppChar* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<Mirror.NetworkConnectionToClient>
struct Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Mirror.RemoteCalls.RemoteCallDelegate
struct RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
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


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Mirror.Examples.MultipleMatch.CanvasController
struct CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<Mirror.NetworkConnectionToClient> Mirror.Examples.MultipleMatch.CanvasController::OnPlayerDisconnected
	Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * ___OnPlayerDisconnected_4;
	// System.Guid Mirror.Examples.MultipleMatch.CanvasController::localPlayerMatch
	Guid_t  ___localPlayerMatch_10;
	// System.Guid Mirror.Examples.MultipleMatch.CanvasController::localJoinedMatch
	Guid_t  ___localJoinedMatch_11;
	// System.Guid Mirror.Examples.MultipleMatch.CanvasController::selectedMatch
	Guid_t  ___selectedMatch_12;
	// System.Int32 Mirror.Examples.MultipleMatch.CanvasController::playerIndex
	int32_t ___playerIndex_13;
	// UnityEngine.GameObject Mirror.Examples.MultipleMatch.CanvasController::matchList
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___matchList_14;
	// UnityEngine.GameObject Mirror.Examples.MultipleMatch.CanvasController::matchPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___matchPrefab_15;
	// UnityEngine.GameObject Mirror.Examples.MultipleMatch.CanvasController::matchControllerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___matchControllerPrefab_16;
	// UnityEngine.UI.Button Mirror.Examples.MultipleMatch.CanvasController::createButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___createButton_17;
	// UnityEngine.UI.Button Mirror.Examples.MultipleMatch.CanvasController::joinButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___joinButton_18;
	// UnityEngine.GameObject Mirror.Examples.MultipleMatch.CanvasController::lobbyView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lobbyView_19;
	// UnityEngine.GameObject Mirror.Examples.MultipleMatch.CanvasController::roomView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___roomView_20;
	// Mirror.Examples.MultipleMatch.RoomGUI Mirror.Examples.MultipleMatch.CanvasController::roomGUI
	RoomGUI_t0046C98B93B6FEEE80EB71E30078556D4509EE78 * ___roomGUI_21;
	// UnityEngine.UI.ToggleGroup Mirror.Examples.MultipleMatch.CanvasController::toggleGroup
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___toggleGroup_22;

public:
	inline static int32_t get_offset_of_OnPlayerDisconnected_4() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___OnPlayerDisconnected_4)); }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * get_OnPlayerDisconnected_4() const { return ___OnPlayerDisconnected_4; }
	inline Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF ** get_address_of_OnPlayerDisconnected_4() { return &___OnPlayerDisconnected_4; }
	inline void set_OnPlayerDisconnected_4(Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * value)
	{
		___OnPlayerDisconnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlayerDisconnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_localPlayerMatch_10() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___localPlayerMatch_10)); }
	inline Guid_t  get_localPlayerMatch_10() const { return ___localPlayerMatch_10; }
	inline Guid_t * get_address_of_localPlayerMatch_10() { return &___localPlayerMatch_10; }
	inline void set_localPlayerMatch_10(Guid_t  value)
	{
		___localPlayerMatch_10 = value;
	}

	inline static int32_t get_offset_of_localJoinedMatch_11() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___localJoinedMatch_11)); }
	inline Guid_t  get_localJoinedMatch_11() const { return ___localJoinedMatch_11; }
	inline Guid_t * get_address_of_localJoinedMatch_11() { return &___localJoinedMatch_11; }
	inline void set_localJoinedMatch_11(Guid_t  value)
	{
		___localJoinedMatch_11 = value;
	}

	inline static int32_t get_offset_of_selectedMatch_12() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___selectedMatch_12)); }
	inline Guid_t  get_selectedMatch_12() const { return ___selectedMatch_12; }
	inline Guid_t * get_address_of_selectedMatch_12() { return &___selectedMatch_12; }
	inline void set_selectedMatch_12(Guid_t  value)
	{
		___selectedMatch_12 = value;
	}

	inline static int32_t get_offset_of_playerIndex_13() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___playerIndex_13)); }
	inline int32_t get_playerIndex_13() const { return ___playerIndex_13; }
	inline int32_t* get_address_of_playerIndex_13() { return &___playerIndex_13; }
	inline void set_playerIndex_13(int32_t value)
	{
		___playerIndex_13 = value;
	}

	inline static int32_t get_offset_of_matchList_14() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___matchList_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_matchList_14() const { return ___matchList_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_matchList_14() { return &___matchList_14; }
	inline void set_matchList_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___matchList_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchList_14), (void*)value);
	}

	inline static int32_t get_offset_of_matchPrefab_15() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___matchPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_matchPrefab_15() const { return ___matchPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_matchPrefab_15() { return &___matchPrefab_15; }
	inline void set_matchPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___matchPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_matchControllerPrefab_16() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___matchControllerPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_matchControllerPrefab_16() const { return ___matchControllerPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_matchControllerPrefab_16() { return &___matchControllerPrefab_16; }
	inline void set_matchControllerPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___matchControllerPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchControllerPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_createButton_17() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___createButton_17)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_createButton_17() const { return ___createButton_17; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_createButton_17() { return &___createButton_17; }
	inline void set_createButton_17(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___createButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_joinButton_18() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___joinButton_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_joinButton_18() const { return ___joinButton_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_joinButton_18() { return &___joinButton_18; }
	inline void set_joinButton_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___joinButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joinButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_lobbyView_19() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___lobbyView_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lobbyView_19() const { return ___lobbyView_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lobbyView_19() { return &___lobbyView_19; }
	inline void set_lobbyView_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lobbyView_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyView_19), (void*)value);
	}

	inline static int32_t get_offset_of_roomView_20() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___roomView_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_roomView_20() const { return ___roomView_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_roomView_20() { return &___roomView_20; }
	inline void set_roomView_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___roomView_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomView_20), (void*)value);
	}

	inline static int32_t get_offset_of_roomGUI_21() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___roomGUI_21)); }
	inline RoomGUI_t0046C98B93B6FEEE80EB71E30078556D4509EE78 * get_roomGUI_21() const { return ___roomGUI_21; }
	inline RoomGUI_t0046C98B93B6FEEE80EB71E30078556D4509EE78 ** get_address_of_roomGUI_21() { return &___roomGUI_21; }
	inline void set_roomGUI_21(RoomGUI_t0046C98B93B6FEEE80EB71E30078556D4509EE78 * value)
	{
		___roomGUI_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomGUI_21), (void*)value);
	}

	inline static int32_t get_offset_of_toggleGroup_22() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D, ___toggleGroup_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_toggleGroup_22() const { return ___toggleGroup_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_toggleGroup_22() { return &___toggleGroup_22; }
	inline void set_toggleGroup_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___toggleGroup_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleGroup_22), (void*)value);
	}
};

struct CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnectionToClient,System.Guid> Mirror.Examples.MultipleMatch.CanvasController::playerMatches
	Dictionary_2_tE8CDB1A26ED7465B5EF89949849448BDDCEB4061 * ___playerMatches_5;
	// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.Examples.MultipleMatch.MatchInfo> Mirror.Examples.MultipleMatch.CanvasController::openMatches
	Dictionary_2_tD45905B3308F3A9FF85973451EA8D635912FBFFB * ___openMatches_6;
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Collections.Generic.HashSet`1<Mirror.NetworkConnectionToClient>> Mirror.Examples.MultipleMatch.CanvasController::matchConnections
	Dictionary_2_tADCDAB470C61167BB31BB78DB0188C38B76BF754 * ___matchConnections_7;
	// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo> Mirror.Examples.MultipleMatch.CanvasController::playerInfos
	Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * ___playerInfos_8;
	// System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient> Mirror.Examples.MultipleMatch.CanvasController::waitingConnections
	List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * ___waitingConnections_9;

public:
	inline static int32_t get_offset_of_playerMatches_5() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields, ___playerMatches_5)); }
	inline Dictionary_2_tE8CDB1A26ED7465B5EF89949849448BDDCEB4061 * get_playerMatches_5() const { return ___playerMatches_5; }
	inline Dictionary_2_tE8CDB1A26ED7465B5EF89949849448BDDCEB4061 ** get_address_of_playerMatches_5() { return &___playerMatches_5; }
	inline void set_playerMatches_5(Dictionary_2_tE8CDB1A26ED7465B5EF89949849448BDDCEB4061 * value)
	{
		___playerMatches_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerMatches_5), (void*)value);
	}

	inline static int32_t get_offset_of_openMatches_6() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields, ___openMatches_6)); }
	inline Dictionary_2_tD45905B3308F3A9FF85973451EA8D635912FBFFB * get_openMatches_6() const { return ___openMatches_6; }
	inline Dictionary_2_tD45905B3308F3A9FF85973451EA8D635912FBFFB ** get_address_of_openMatches_6() { return &___openMatches_6; }
	inline void set_openMatches_6(Dictionary_2_tD45905B3308F3A9FF85973451EA8D635912FBFFB * value)
	{
		___openMatches_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openMatches_6), (void*)value);
	}

	inline static int32_t get_offset_of_matchConnections_7() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields, ___matchConnections_7)); }
	inline Dictionary_2_tADCDAB470C61167BB31BB78DB0188C38B76BF754 * get_matchConnections_7() const { return ___matchConnections_7; }
	inline Dictionary_2_tADCDAB470C61167BB31BB78DB0188C38B76BF754 ** get_address_of_matchConnections_7() { return &___matchConnections_7; }
	inline void set_matchConnections_7(Dictionary_2_tADCDAB470C61167BB31BB78DB0188C38B76BF754 * value)
	{
		___matchConnections_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchConnections_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerInfos_8() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields, ___playerInfos_8)); }
	inline Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * get_playerInfos_8() const { return ___playerInfos_8; }
	inline Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 ** get_address_of_playerInfos_8() { return &___playerInfos_8; }
	inline void set_playerInfos_8(Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * value)
	{
		___playerInfos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerInfos_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitingConnections_9() { return static_cast<int32_t>(offsetof(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields, ___waitingConnections_9)); }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * get_waitingConnections_9() const { return ___waitingConnections_9; }
	inline List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 ** get_address_of_waitingConnections_9() { return &___waitingConnections_9; }
	inline void set_waitingConnections_9(List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * value)
	{
		___waitingConnections_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingConnections_9), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.FadeInOut
struct FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Mirror.Examples.AdditiveLevels.FadeInOut::speed
	uint8_t ___speed_4;
	// UnityEngine.UI.Image Mirror.Examples.AdditiveLevels.FadeInOut::fadeImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fadeImage_5;
	// UnityEngine.Color Mirror.Examples.AdditiveLevels.FadeInOut::fadeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeColor_6;
	// UnityEngine.WaitForSeconds Mirror.Examples.AdditiveLevels.FadeInOut::waitForSeconds
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___waitForSeconds_7;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81, ___speed_4)); }
	inline uint8_t get_speed_4() const { return ___speed_4; }
	inline uint8_t* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(uint8_t value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_fadeImage_5() { return static_cast<int32_t>(offsetof(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81, ___fadeImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fadeImage_5() const { return ___fadeImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fadeImage_5() { return &___fadeImage_5; }
	inline void set_fadeImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fadeImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_fadeColor_6() { return static_cast<int32_t>(offsetof(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81, ___fadeColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeColor_6() const { return ___fadeColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeColor_6() { return &___fadeColor_6; }
	inline void set_fadeColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeColor_6 = value;
	}

	inline static int32_t get_offset_of_waitForSeconds_7() { return static_cast<int32_t>(offsetof(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81, ___waitForSeconds_7)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_waitForSeconds_7() const { return ___waitForSeconds_7; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_waitForSeconds_7() { return &___waitForSeconds_7; }
	inline void set_waitForSeconds_7(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___waitForSeconds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForSeconds_7), (void*)value);
	}
};


// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnServerAuthenticated
	UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * ___OnServerAuthenticated_4;
	// UnityEngine.Events.UnityEvent Mirror.NetworkAuthenticator::OnClientAuthenticated
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnClientAuthenticated_5;

public:
	inline static int32_t get_offset_of_OnServerAuthenticated_4() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF, ___OnServerAuthenticated_4)); }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * get_OnServerAuthenticated_4() const { return ___OnServerAuthenticated_4; }
	inline UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB ** get_address_of_OnServerAuthenticated_4() { return &___OnServerAuthenticated_4; }
	inline void set_OnServerAuthenticated_4(UnityEventNetworkConnection_t58B9E4CF6E87A0A115B463F03EDB32D6E80BC9CB * value)
	{
		___OnServerAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF, ___OnClientAuthenticated_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnClientAuthenticated_5() const { return ___OnClientAuthenticated_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnClientAuthenticated_5() { return &___OnClientAuthenticated_5; }
	inline void set_OnClientAuthenticated_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnClientAuthenticated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientAuthenticated_5), (void*)value);
	}
};


// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.SyncMode Mirror.NetworkBehaviour::syncMode
	int32_t ___syncMode_4;
	// System.Single Mirror.NetworkBehaviour::syncInterval
	float ___syncInterval_5;
	// System.Double Mirror.NetworkBehaviour::lastSyncTime
	double ___lastSyncTime_6;
	// System.Collections.Generic.List`1<Mirror.SyncObject> Mirror.NetworkBehaviour::syncObjects
	List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * ___syncObjects_7;
	// Mirror.NetworkIdentity Mirror.NetworkBehaviour::<netIdentity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CnetIdentityU3Ek__BackingField_8;
	// System.Int32 Mirror.NetworkBehaviour::<ComponentIndex>k__BackingField
	int32_t ___U3CComponentIndexU3Ek__BackingField_9;
	// System.UInt64 Mirror.NetworkBehaviour::<syncVarDirtyBits>k__BackingField
	uint64_t ___U3CsyncVarDirtyBitsU3Ek__BackingField_10;
	// System.UInt64 Mirror.NetworkBehaviour::syncObjectDirtyBits
	uint64_t ___syncObjectDirtyBits_11;
	// System.UInt64 Mirror.NetworkBehaviour::syncVarHookGuard
	uint64_t ___syncVarHookGuard_12;

public:
	inline static int32_t get_offset_of_syncMode_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncMode_4)); }
	inline int32_t get_syncMode_4() const { return ___syncMode_4; }
	inline int32_t* get_address_of_syncMode_4() { return &___syncMode_4; }
	inline void set_syncMode_4(int32_t value)
	{
		___syncMode_4 = value;
	}

	inline static int32_t get_offset_of_syncInterval_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncInterval_5)); }
	inline float get_syncInterval_5() const { return ___syncInterval_5; }
	inline float* get_address_of_syncInterval_5() { return &___syncInterval_5; }
	inline void set_syncInterval_5(float value)
	{
		___syncInterval_5 = value;
	}

	inline static int32_t get_offset_of_lastSyncTime_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___lastSyncTime_6)); }
	inline double get_lastSyncTime_6() const { return ___lastSyncTime_6; }
	inline double* get_address_of_lastSyncTime_6() { return &___lastSyncTime_6; }
	inline void set_lastSyncTime_6(double value)
	{
		___lastSyncTime_6 = value;
	}

	inline static int32_t get_offset_of_syncObjects_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncObjects_7)); }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * get_syncObjects_7() const { return ___syncObjects_7; }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 ** get_address_of_syncObjects_7() { return &___syncObjects_7; }
	inline void set_syncObjects_7(List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * value)
	{
		___syncObjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObjects_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdentityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CnetIdentityU3Ek__BackingField_8)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CnetIdentityU3Ek__BackingField_8() const { return ___U3CnetIdentityU3Ek__BackingField_8; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CnetIdentityU3Ek__BackingField_8() { return &___U3CnetIdentityU3Ek__BackingField_8; }
	inline void set_U3CnetIdentityU3Ek__BackingField_8(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CnetIdentityU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetIdentityU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CComponentIndexU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CComponentIndexU3Ek__BackingField_9)); }
	inline int32_t get_U3CComponentIndexU3Ek__BackingField_9() const { return ___U3CComponentIndexU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CComponentIndexU3Ek__BackingField_9() { return &___U3CComponentIndexU3Ek__BackingField_9; }
	inline void set_U3CComponentIndexU3Ek__BackingField_9(int32_t value)
	{
		___U3CComponentIndexU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsyncVarDirtyBitsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CsyncVarDirtyBitsU3Ek__BackingField_10)); }
	inline uint64_t get_U3CsyncVarDirtyBitsU3Ek__BackingField_10() const { return ___U3CsyncVarDirtyBitsU3Ek__BackingField_10; }
	inline uint64_t* get_address_of_U3CsyncVarDirtyBitsU3Ek__BackingField_10() { return &___U3CsyncVarDirtyBitsU3Ek__BackingField_10; }
	inline void set_U3CsyncVarDirtyBitsU3Ek__BackingField_10(uint64_t value)
	{
		___U3CsyncVarDirtyBitsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_syncObjectDirtyBits_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncObjectDirtyBits_11)); }
	inline uint64_t get_syncObjectDirtyBits_11() const { return ___syncObjectDirtyBits_11; }
	inline uint64_t* get_address_of_syncObjectDirtyBits_11() { return &___syncObjectDirtyBits_11; }
	inline void set_syncObjectDirtyBits_11(uint64_t value)
	{
		___syncObjectDirtyBits_11 = value;
	}

	inline static int32_t get_offset_of_syncVarHookGuard_12() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncVarHookGuard_12)); }
	inline uint64_t get_syncVarHookGuard_12() const { return ___syncVarHookGuard_12; }
	inline uint64_t* get_address_of_syncVarHookGuard_12() { return &___syncVarHookGuard_12; }
	inline void set_syncVarHookGuard_12(uint64_t value)
	{
		___syncVarHookGuard_12 = value;
	}
};


// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_4;
	// System.Boolean Mirror.NetworkIdentity::<isServer>k__BackingField
	bool ___U3CisServerU3Ek__BackingField_5;
	// System.Boolean Mirror.NetworkIdentity::<isLocalPlayer>k__BackingField
	bool ___U3CisLocalPlayerU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkIdentity::observers
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___observers_8;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_9;
	// System.UInt64 Mirror.NetworkIdentity::sceneId
	uint64_t ___sceneId_10;
	// System.Boolean Mirror.NetworkIdentity::serverOnly
	bool ___serverOnly_11;
	// System.Boolean Mirror.NetworkIdentity::destroyCalled
	bool ___destroyCalled_12;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___U3CconnectionToServerU3Ek__BackingField_13;
	// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::_connectionToClient
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ____connectionToClient_14;
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::<NetworkBehaviours>k__BackingField
	NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* ___U3CNetworkBehavioursU3Ek__BackingField_15;
	// Mirror.Visibility Mirror.NetworkIdentity::visible
	int32_t ___visible_16;
	// Mirror.NetworkIdentitySerialization Mirror.NetworkIdentity::lastSerialization
	NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  ___lastSerialization_17;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_18;
	// System.Boolean Mirror.NetworkIdentity::hasSpawned
	bool ___hasSpawned_22;
	// System.Boolean Mirror.NetworkIdentity::<SpawnedFromInstantiate>k__BackingField
	bool ___U3CSpawnedFromInstantiateU3Ek__BackingField_23;
	// System.Boolean Mirror.NetworkIdentity::clientStarted
	bool ___clientStarted_24;
	// System.Boolean Mirror.NetworkIdentity::hadAuthority
	bool ___hadAuthority_26;

public:
	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisClientU3Ek__BackingField_4)); }
	inline bool get_U3CisClientU3Ek__BackingField_4() const { return ___U3CisClientU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_4() { return &___U3CisClientU3Ek__BackingField_4; }
	inline void set_U3CisClientU3Ek__BackingField_4(bool value)
	{
		___U3CisClientU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisServerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisServerU3Ek__BackingField_5)); }
	inline bool get_U3CisServerU3Ek__BackingField_5() const { return ___U3CisServerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisServerU3Ek__BackingField_5() { return &___U3CisServerU3Ek__BackingField_5; }
	inline void set_U3CisServerU3Ek__BackingField_5(bool value)
	{
		___U3CisServerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisLocalPlayerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisLocalPlayerU3Ek__BackingField_6)); }
	inline bool get_U3CisLocalPlayerU3Ek__BackingField_6() const { return ___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisLocalPlayerU3Ek__BackingField_6() { return &___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline void set_U3CisLocalPlayerU3Ek__BackingField_6(bool value)
	{
		___U3CisLocalPlayerU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3ChasAuthorityU3Ek__BackingField_7)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_7() const { return ___U3ChasAuthorityU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_7() { return &___U3ChasAuthorityU3Ek__BackingField_7; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_7(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_observers_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___observers_8)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_observers_8() const { return ___observers_8; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_observers_8() { return &___observers_8; }
	inline void set_observers_8(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___observers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CnetIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_9() const { return ___U3CnetIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_9() { return &___U3CnetIdU3Ek__BackingField_9; }
	inline void set_U3CnetIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sceneId_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___sceneId_10)); }
	inline uint64_t get_sceneId_10() const { return ___sceneId_10; }
	inline uint64_t* get_address_of_sceneId_10() { return &___sceneId_10; }
	inline void set_sceneId_10(uint64_t value)
	{
		___sceneId_10 = value;
	}

	inline static int32_t get_offset_of_serverOnly_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___serverOnly_11)); }
	inline bool get_serverOnly_11() const { return ___serverOnly_11; }
	inline bool* get_address_of_serverOnly_11() { return &___serverOnly_11; }
	inline void set_serverOnly_11(bool value)
	{
		___serverOnly_11 = value;
	}

	inline static int32_t get_offset_of_destroyCalled_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___destroyCalled_12)); }
	inline bool get_destroyCalled_12() const { return ___destroyCalled_12; }
	inline bool* get_address_of_destroyCalled_12() { return &___destroyCalled_12; }
	inline void set_destroyCalled_12(bool value)
	{
		___destroyCalled_12 = value;
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CconnectionToServerU3Ek__BackingField_13)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_U3CconnectionToServerU3Ek__BackingField_13() const { return ___U3CconnectionToServerU3Ek__BackingField_13; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_13() { return &___U3CconnectionToServerU3Ek__BackingField_13; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_13(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__connectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ____connectionToClient_14)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get__connectionToClient_14() const { return ____connectionToClient_14; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of__connectionToClient_14() { return &____connectionToClient_14; }
	inline void set__connectionToClient_14(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		____connectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkBehavioursU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CNetworkBehavioursU3Ek__BackingField_15)); }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* get_U3CNetworkBehavioursU3Ek__BackingField_15() const { return ___U3CNetworkBehavioursU3Ek__BackingField_15; }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC** get_address_of_U3CNetworkBehavioursU3Ek__BackingField_15() { return &___U3CNetworkBehavioursU3Ek__BackingField_15; }
	inline void set_U3CNetworkBehavioursU3Ek__BackingField_15(NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* value)
	{
		___U3CNetworkBehavioursU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkBehavioursU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_visible_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___visible_16)); }
	inline int32_t get_visible_16() const { return ___visible_16; }
	inline int32_t* get_address_of_visible_16() { return &___visible_16; }
	inline void set_visible_16(int32_t value)
	{
		___visible_16 = value;
	}

	inline static int32_t get_offset_of_lastSerialization_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___lastSerialization_17)); }
	inline NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  get_lastSerialization_17() const { return ___lastSerialization_17; }
	inline NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9 * get_address_of_lastSerialization_17() { return &___lastSerialization_17; }
	inline void set_lastSerialization_17(NetworkIdentitySerialization_t0054F0EA6C74C841B3F2565B8100D12BC561C9A9  value)
	{
		___lastSerialization_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_17))->___ownerWriter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_17))->___observersWriter_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AssetId_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___m_AssetId_18)); }
	inline String_t* get_m_AssetId_18() const { return ___m_AssetId_18; }
	inline String_t** get_address_of_m_AssetId_18() { return &___m_AssetId_18; }
	inline void set_m_AssetId_18(String_t* value)
	{
		___m_AssetId_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_18), (void*)value);
	}

	inline static int32_t get_offset_of_hasSpawned_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hasSpawned_22)); }
	inline bool get_hasSpawned_22() const { return ___hasSpawned_22; }
	inline bool* get_address_of_hasSpawned_22() { return &___hasSpawned_22; }
	inline void set_hasSpawned_22(bool value)
	{
		___hasSpawned_22 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedFromInstantiateU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CSpawnedFromInstantiateU3Ek__BackingField_23)); }
	inline bool get_U3CSpawnedFromInstantiateU3Ek__BackingField_23() const { return ___U3CSpawnedFromInstantiateU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CSpawnedFromInstantiateU3Ek__BackingField_23() { return &___U3CSpawnedFromInstantiateU3Ek__BackingField_23; }
	inline void set_U3CSpawnedFromInstantiateU3Ek__BackingField_23(bool value)
	{
		___U3CSpawnedFromInstantiateU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_clientStarted_24() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___clientStarted_24)); }
	inline bool get_clientStarted_24() const { return ___clientStarted_24; }
	inline bool* get_address_of_clientStarted_24() { return &___clientStarted_24; }
	inline void set_clientStarted_24(bool value)
	{
		___clientStarted_24 = value;
	}

	inline static int32_t get_offset_of_hadAuthority_26() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hadAuthority_26)); }
	inline bool get_hadAuthority_26() const { return ___hadAuthority_26; }
	inline bool* get_address_of_hadAuthority_26() { return &___hadAuthority_26; }
	inline void set_hadAuthority_26(bool value)
	{
		___hadAuthority_26 = value;
	}
};

struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkIdentity::sceneIds
	Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * ___sceneIds_19;
	// System.UInt32 Mirror.NetworkIdentity::nextNetworkId
	uint32_t ___nextNetworkId_20;
	// Mirror.NetworkIdentity/ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * ___clientAuthorityCallback_21;
	// Mirror.NetworkIdentity Mirror.NetworkIdentity::previousLocalPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___previousLocalPlayer_25;

public:
	inline static int32_t get_offset_of_sceneIds_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___sceneIds_19)); }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * get_sceneIds_19() const { return ___sceneIds_19; }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C ** get_address_of_sceneIds_19() { return &___sceneIds_19; }
	inline void set_sceneIds_19(Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * value)
	{
		___sceneIds_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneIds_19), (void*)value);
	}

	inline static int32_t get_offset_of_nextNetworkId_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___nextNetworkId_20)); }
	inline uint32_t get_nextNetworkId_20() const { return ___nextNetworkId_20; }
	inline uint32_t* get_address_of_nextNetworkId_20() { return &___nextNetworkId_20; }
	inline void set_nextNetworkId_20(uint32_t value)
	{
		___nextNetworkId_20 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___clientAuthorityCallback_21)); }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * get_clientAuthorityCallback_21() const { return ___clientAuthorityCallback_21; }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 ** get_address_of_clientAuthorityCallback_21() { return &___clientAuthorityCallback_21; }
	inline void set_clientAuthorityCallback_21(ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * value)
	{
		___clientAuthorityCallback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_21), (void*)value);
	}

	inline static int32_t get_offset_of_previousLocalPlayer_25() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___previousLocalPlayer_25)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_previousLocalPlayer_25() const { return ___previousLocalPlayer_25; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_previousLocalPlayer_25() { return &___previousLocalPlayer_25; }
	inline void set_previousLocalPlayer_25(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___previousLocalPlayer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousLocalPlayer_25), (void*)value);
	}
};


// Mirror.NetworkManager
struct NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Mirror.NetworkManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;
	// System.Boolean Mirror.NetworkManager::runInBackground
	bool ___runInBackground_5;
	// System.Boolean Mirror.NetworkManager::autoStartServerBuild
	bool ___autoStartServerBuild_6;
	// System.Int32 Mirror.NetworkManager::serverTickRate
	int32_t ___serverTickRate_7;
	// System.String Mirror.NetworkManager::offlineScene
	String_t* ___offlineScene_8;
	// System.String Mirror.NetworkManager::onlineScene
	String_t* ___onlineScene_9;
	// Mirror.Transport Mirror.NetworkManager::transport
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___transport_10;
	// System.String Mirror.NetworkManager::networkAddress
	String_t* ___networkAddress_11;
	// System.Int32 Mirror.NetworkManager::maxConnections
	int32_t ___maxConnections_12;
	// Mirror.NetworkAuthenticator Mirror.NetworkManager::authenticator
	NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * ___authenticator_13;
	// UnityEngine.GameObject Mirror.NetworkManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_14;
	// System.Boolean Mirror.NetworkManager::autoCreatePlayer
	bool ___autoCreatePlayer_15;
	// Mirror.PlayerSpawnMethod Mirror.NetworkManager::playerSpawnMethod
	int32_t ___playerSpawnMethod_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mirror.NetworkManager::spawnPrefabs
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___spawnPrefabs_17;
	// System.Boolean Mirror.NetworkManager::clientLoadedScene
	bool ___clientLoadedScene_22;
	// Mirror.NetworkManagerMode Mirror.NetworkManager::<mode>k__BackingField
	int32_t ___U3CmodeU3Ek__BackingField_23;
	// System.Boolean Mirror.NetworkManager::finishStartHostPending
	bool ___finishStartHostPending_24;
	// Mirror.SceneOperation Mirror.NetworkManager::clientSceneOperation
	uint8_t ___clientSceneOperation_27;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_4() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___dontDestroyOnLoad_4)); }
	inline bool get_dontDestroyOnLoad_4() const { return ___dontDestroyOnLoad_4; }
	inline bool* get_address_of_dontDestroyOnLoad_4() { return &___dontDestroyOnLoad_4; }
	inline void set_dontDestroyOnLoad_4(bool value)
	{
		___dontDestroyOnLoad_4 = value;
	}

	inline static int32_t get_offset_of_runInBackground_5() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___runInBackground_5)); }
	inline bool get_runInBackground_5() const { return ___runInBackground_5; }
	inline bool* get_address_of_runInBackground_5() { return &___runInBackground_5; }
	inline void set_runInBackground_5(bool value)
	{
		___runInBackground_5 = value;
	}

	inline static int32_t get_offset_of_autoStartServerBuild_6() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___autoStartServerBuild_6)); }
	inline bool get_autoStartServerBuild_6() const { return ___autoStartServerBuild_6; }
	inline bool* get_address_of_autoStartServerBuild_6() { return &___autoStartServerBuild_6; }
	inline void set_autoStartServerBuild_6(bool value)
	{
		___autoStartServerBuild_6 = value;
	}

	inline static int32_t get_offset_of_serverTickRate_7() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___serverTickRate_7)); }
	inline int32_t get_serverTickRate_7() const { return ___serverTickRate_7; }
	inline int32_t* get_address_of_serverTickRate_7() { return &___serverTickRate_7; }
	inline void set_serverTickRate_7(int32_t value)
	{
		___serverTickRate_7 = value;
	}

	inline static int32_t get_offset_of_offlineScene_8() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___offlineScene_8)); }
	inline String_t* get_offlineScene_8() const { return ___offlineScene_8; }
	inline String_t** get_address_of_offlineScene_8() { return &___offlineScene_8; }
	inline void set_offlineScene_8(String_t* value)
	{
		___offlineScene_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineScene_8), (void*)value);
	}

	inline static int32_t get_offset_of_onlineScene_9() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___onlineScene_9)); }
	inline String_t* get_onlineScene_9() const { return ___onlineScene_9; }
	inline String_t** get_address_of_onlineScene_9() { return &___onlineScene_9; }
	inline void set_onlineScene_9(String_t* value)
	{
		___onlineScene_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onlineScene_9), (void*)value);
	}

	inline static int32_t get_offset_of_transport_10() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___transport_10)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_transport_10() const { return ___transport_10; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_transport_10() { return &___transport_10; }
	inline void set_transport_10(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___transport_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_10), (void*)value);
	}

	inline static int32_t get_offset_of_networkAddress_11() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___networkAddress_11)); }
	inline String_t* get_networkAddress_11() const { return ___networkAddress_11; }
	inline String_t** get_address_of_networkAddress_11() { return &___networkAddress_11; }
	inline void set_networkAddress_11(String_t* value)
	{
		___networkAddress_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkAddress_11), (void*)value);
	}

	inline static int32_t get_offset_of_maxConnections_12() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___maxConnections_12)); }
	inline int32_t get_maxConnections_12() const { return ___maxConnections_12; }
	inline int32_t* get_address_of_maxConnections_12() { return &___maxConnections_12; }
	inline void set_maxConnections_12(int32_t value)
	{
		___maxConnections_12 = value;
	}

	inline static int32_t get_offset_of_authenticator_13() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___authenticator_13)); }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * get_authenticator_13() const { return ___authenticator_13; }
	inline NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF ** get_address_of_authenticator_13() { return &___authenticator_13; }
	inline void set_authenticator_13(NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * value)
	{
		___authenticator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_13), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefab_14() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___playerPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_14() const { return ___playerPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_14() { return &___playerPrefab_14; }
	inline void set_playerPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_autoCreatePlayer_15() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___autoCreatePlayer_15)); }
	inline bool get_autoCreatePlayer_15() const { return ___autoCreatePlayer_15; }
	inline bool* get_address_of_autoCreatePlayer_15() { return &___autoCreatePlayer_15; }
	inline void set_autoCreatePlayer_15(bool value)
	{
		___autoCreatePlayer_15 = value;
	}

	inline static int32_t get_offset_of_playerSpawnMethod_16() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___playerSpawnMethod_16)); }
	inline int32_t get_playerSpawnMethod_16() const { return ___playerSpawnMethod_16; }
	inline int32_t* get_address_of_playerSpawnMethod_16() { return &___playerSpawnMethod_16; }
	inline void set_playerSpawnMethod_16(int32_t value)
	{
		___playerSpawnMethod_16 = value;
	}

	inline static int32_t get_offset_of_spawnPrefabs_17() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___spawnPrefabs_17)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_spawnPrefabs_17() const { return ___spawnPrefabs_17; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_spawnPrefabs_17() { return &___spawnPrefabs_17; }
	inline void set_spawnPrefabs_17(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___spawnPrefabs_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPrefabs_17), (void*)value);
	}

	inline static int32_t get_offset_of_clientLoadedScene_22() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___clientLoadedScene_22)); }
	inline bool get_clientLoadedScene_22() const { return ___clientLoadedScene_22; }
	inline bool* get_address_of_clientLoadedScene_22() { return &___clientLoadedScene_22; }
	inline void set_clientLoadedScene_22(bool value)
	{
		___clientLoadedScene_22 = value;
	}

	inline static int32_t get_offset_of_U3CmodeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___U3CmodeU3Ek__BackingField_23)); }
	inline int32_t get_U3CmodeU3Ek__BackingField_23() const { return ___U3CmodeU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CmodeU3Ek__BackingField_23() { return &___U3CmodeU3Ek__BackingField_23; }
	inline void set_U3CmodeU3Ek__BackingField_23(int32_t value)
	{
		___U3CmodeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_finishStartHostPending_24() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___finishStartHostPending_24)); }
	inline bool get_finishStartHostPending_24() const { return ___finishStartHostPending_24; }
	inline bool* get_address_of_finishStartHostPending_24() { return &___finishStartHostPending_24; }
	inline void set_finishStartHostPending_24(bool value)
	{
		___finishStartHostPending_24 = value;
	}

	inline static int32_t get_offset_of_clientSceneOperation_27() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15, ___clientSceneOperation_27)); }
	inline uint8_t get_clientSceneOperation_27() const { return ___clientSceneOperation_27; }
	inline uint8_t* get_address_of_clientSceneOperation_27() { return &___clientSceneOperation_27; }
	inline void set_clientSceneOperation_27(uint8_t value)
	{
		___clientSceneOperation_27 = value;
	}
};

struct NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> Mirror.NetworkManager::startPositions
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___startPositions_18;
	// System.Int32 Mirror.NetworkManager::startPositionIndex
	int32_t ___startPositionIndex_19;
	// Mirror.NetworkManager Mirror.NetworkManager::<singleton>k__BackingField
	NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * ___U3CsingletonU3Ek__BackingField_20;
	// Mirror.NetworkConnection Mirror.NetworkManager::clientReadyConnection
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___clientReadyConnection_21;
	// System.String Mirror.NetworkManager::<networkSceneName>k__BackingField
	String_t* ___U3CnetworkSceneNameU3Ek__BackingField_25;
	// UnityEngine.AsyncOperation Mirror.NetworkManager::loadingSceneAsync
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___loadingSceneAsync_26;

public:
	inline static int32_t get_offset_of_startPositions_18() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___startPositions_18)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_startPositions_18() const { return ___startPositions_18; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_startPositions_18() { return &___startPositions_18; }
	inline void set_startPositions_18(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___startPositions_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startPositions_18), (void*)value);
	}

	inline static int32_t get_offset_of_startPositionIndex_19() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___startPositionIndex_19)); }
	inline int32_t get_startPositionIndex_19() const { return ___startPositionIndex_19; }
	inline int32_t* get_address_of_startPositionIndex_19() { return &___startPositionIndex_19; }
	inline void set_startPositionIndex_19(int32_t value)
	{
		___startPositionIndex_19 = value;
	}

	inline static int32_t get_offset_of_U3CsingletonU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___U3CsingletonU3Ek__BackingField_20)); }
	inline NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * get_U3CsingletonU3Ek__BackingField_20() const { return ___U3CsingletonU3Ek__BackingField_20; }
	inline NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 ** get_address_of_U3CsingletonU3Ek__BackingField_20() { return &___U3CsingletonU3Ek__BackingField_20; }
	inline void set_U3CsingletonU3Ek__BackingField_20(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * value)
	{
		___U3CsingletonU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsingletonU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_clientReadyConnection_21() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___clientReadyConnection_21)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_clientReadyConnection_21() const { return ___clientReadyConnection_21; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_clientReadyConnection_21() { return &___clientReadyConnection_21; }
	inline void set_clientReadyConnection_21(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___clientReadyConnection_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientReadyConnection_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetworkSceneNameU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___U3CnetworkSceneNameU3Ek__BackingField_25)); }
	inline String_t* get_U3CnetworkSceneNameU3Ek__BackingField_25() const { return ___U3CnetworkSceneNameU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CnetworkSceneNameU3Ek__BackingField_25() { return &___U3CnetworkSceneNameU3Ek__BackingField_25; }
	inline void set_U3CnetworkSceneNameU3Ek__BackingField_25(String_t* value)
	{
		___U3CnetworkSceneNameU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetworkSceneNameU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_loadingSceneAsync_26() { return static_cast<int32_t>(offsetof(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields, ___loadingSceneAsync_26)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_loadingSceneAsync_26() const { return ___loadingSceneAsync_26; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_loadingSceneAsync_26() { return &___loadingSceneAsync_26; }
	inline void set_loadingSceneAsync_26(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___loadingSceneAsync_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingSceneAsync_26), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Mirror.Examples.AdditiveScenes.ZoneHandler
struct ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Mirror.Examples.AdditiveScenes.ZoneHandler::subScene
	String_t* ___subScene_4;

public:
	inline static int32_t get_offset_of_subScene_4() { return static_cast<int32_t>(offsetof(ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E, ___subScene_4)); }
	inline String_t* get_subScene_4() const { return ___subScene_4; }
	inline String_t** get_address_of_subScene_4() { return &___subScene_4; }
	inline void set_subScene_4(String_t* value)
	{
		___subScene_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subScene_4), (void*)value);
	}
};


// Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager
struct AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B  : public NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15
{
public:
	// System.String[] Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager::additiveScenes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___additiveScenes_28;
	// Mirror.Examples.AdditiveLevels.FadeInOut Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager::fadeInOut
	FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * ___fadeInOut_29;
	// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager::subscenesLoaded
	bool ___subscenesLoaded_30;
	// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager::isInTransition
	bool ___isInTransition_31;

public:
	inline static int32_t get_offset_of_additiveScenes_28() { return static_cast<int32_t>(offsetof(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B, ___additiveScenes_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_additiveScenes_28() const { return ___additiveScenes_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_additiveScenes_28() { return &___additiveScenes_28; }
	inline void set_additiveScenes_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___additiveScenes_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additiveScenes_28), (void*)value);
	}

	inline static int32_t get_offset_of_fadeInOut_29() { return static_cast<int32_t>(offsetof(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B, ___fadeInOut_29)); }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * get_fadeInOut_29() const { return ___fadeInOut_29; }
	inline FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 ** get_address_of_fadeInOut_29() { return &___fadeInOut_29; }
	inline void set_fadeInOut_29(FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * value)
	{
		___fadeInOut_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeInOut_29), (void*)value);
	}

	inline static int32_t get_offset_of_subscenesLoaded_30() { return static_cast<int32_t>(offsetof(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B, ___subscenesLoaded_30)); }
	inline bool get_subscenesLoaded_30() const { return ___subscenesLoaded_30; }
	inline bool* get_address_of_subscenesLoaded_30() { return &___subscenesLoaded_30; }
	inline void set_subscenesLoaded_30(bool value)
	{
		___subscenesLoaded_30 = value;
	}

	inline static int32_t get_offset_of_isInTransition_31() { return static_cast<int32_t>(offsetof(AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B, ___isInTransition_31)); }
	inline bool get_isInTransition_31() const { return ___isInTransition_31; }
	inline bool* get_address_of_isInTransition_31() { return &___isInTransition_31; }
	inline void set_isInTransition_31(bool value)
	{
		___isInTransition_31 = value;
	}
};


// Mirror.Examples.AdditiveScenes.AdditiveNetworkManager
struct AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843  : public NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15
{
public:
	// UnityEngine.GameObject Mirror.Examples.AdditiveScenes.AdditiveNetworkManager::Zone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Zone_28;
	// System.String[] Mirror.Examples.AdditiveScenes.AdditiveNetworkManager::subScenes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___subScenes_29;

public:
	inline static int32_t get_offset_of_Zone_28() { return static_cast<int32_t>(offsetof(AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843, ___Zone_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Zone_28() const { return ___Zone_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Zone_28() { return &___Zone_28; }
	inline void set_Zone_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Zone_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Zone_28), (void*)value);
	}

	inline static int32_t get_offset_of_subScenes_29() { return static_cast<int32_t>(offsetof(AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843, ___subScenes_29)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_subScenes_29() const { return ___subScenes_29; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_subScenes_29() { return &___subScenes_29; }
	inline void set_subScenes_29(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___subScenes_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subScenes_29), (void*)value);
	}
};


// Mirror.Examples.Chat.ChatAuthenticator
struct ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1  : public NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection> Mirror.Examples.Chat.ChatAuthenticator::connectionsPendingDisconnect
	HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___connectionsPendingDisconnect_6;
	// System.String Mirror.Examples.Chat.ChatAuthenticator::playerName
	String_t* ___playerName_7;

public:
	inline static int32_t get_offset_of_connectionsPendingDisconnect_6() { return static_cast<int32_t>(offsetof(ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1, ___connectionsPendingDisconnect_6)); }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * get_connectionsPendingDisconnect_6() const { return ___connectionsPendingDisconnect_6; }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 ** get_address_of_connectionsPendingDisconnect_6() { return &___connectionsPendingDisconnect_6; }
	inline void set_connectionsPendingDisconnect_6(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * value)
	{
		___connectionsPendingDisconnect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionsPendingDisconnect_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerName_7() { return static_cast<int32_t>(offsetof(ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1, ___playerName_7)); }
	inline String_t* get_playerName_7() const { return ___playerName_7; }
	inline String_t** get_address_of_playerName_7() { return &___playerName_7; }
	inline void set_playerName_7(String_t* value)
	{
		___playerName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_7), (void*)value);
	}
};


// Mirror.Examples.Chat.ChatUI
struct ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// UnityEngine.UI.InputField Mirror.Examples.Chat.ChatUI::chatMessage
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___chatMessage_13;
	// UnityEngine.UI.Text Mirror.Examples.Chat.ChatUI::chatHistory
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___chatHistory_14;
	// UnityEngine.UI.Scrollbar Mirror.Examples.Chat.ChatUI::scrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___scrollbar_15;
	// System.String Mirror.Examples.Chat.ChatUI::localPlayerName
	String_t* ___localPlayerName_16;
	// System.Collections.Generic.Dictionary`2<Mirror.NetworkConnectionToClient,System.String> Mirror.Examples.Chat.ChatUI::connNames
	Dictionary_2_t5EB215AAE8E57E4A6E249F7FE37798A218A2ABF9 * ___connNames_17;

public:
	inline static int32_t get_offset_of_chatMessage_13() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B, ___chatMessage_13)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_chatMessage_13() const { return ___chatMessage_13; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_chatMessage_13() { return &___chatMessage_13; }
	inline void set_chatMessage_13(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___chatMessage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatMessage_13), (void*)value);
	}

	inline static int32_t get_offset_of_chatHistory_14() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B, ___chatHistory_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_chatHistory_14() const { return ___chatHistory_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_chatHistory_14() { return &___chatHistory_14; }
	inline void set_chatHistory_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___chatHistory_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatHistory_14), (void*)value);
	}

	inline static int32_t get_offset_of_scrollbar_15() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B, ___scrollbar_15)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_scrollbar_15() const { return ___scrollbar_15; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_scrollbar_15() { return &___scrollbar_15; }
	inline void set_scrollbar_15(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___scrollbar_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollbar_15), (void*)value);
	}

	inline static int32_t get_offset_of_localPlayerName_16() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B, ___localPlayerName_16)); }
	inline String_t* get_localPlayerName_16() const { return ___localPlayerName_16; }
	inline String_t** get_address_of_localPlayerName_16() { return &___localPlayerName_16; }
	inline void set_localPlayerName_16(String_t* value)
	{
		___localPlayerName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localPlayerName_16), (void*)value);
	}

	inline static int32_t get_offset_of_connNames_17() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B, ___connNames_17)); }
	inline Dictionary_2_t5EB215AAE8E57E4A6E249F7FE37798A218A2ABF9 * get_connNames_17() const { return ___connNames_17; }
	inline Dictionary_2_t5EB215AAE8E57E4A6E249F7FE37798A218A2ABF9 ** get_address_of_connNames_17() { return &___connNames_17; }
	inline void set_connNames_17(Dictionary_2_t5EB215AAE8E57E4A6E249F7FE37798A218A2ABF9 * value)
	{
		___connNames_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connNames_17), (void*)value);
	}
};

struct ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B_StaticFields
{
public:
	// Mirror.Examples.Chat.ChatUI Mirror.Examples.Chat.ChatUI::instance
	ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * ___instance_18;

public:
	inline static int32_t get_offset_of_instance_18() { return static_cast<int32_t>(offsetof(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B_StaticFields, ___instance_18)); }
	inline ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * get_instance_18() const { return ___instance_18; }
	inline ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B ** get_address_of_instance_18() { return &___instance_18; }
	inline void set_instance_18(ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * value)
	{
		___instance_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_18), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Mirror.Examples.MultipleMatch.MatchController
struct MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// Mirror.SyncDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData> Mirror.Examples.MultipleMatch.MatchController::matchPlayerData
	SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 * ___matchPlayerData_13;
	// System.Collections.Generic.Dictionary`2<Mirror.Examples.MultipleMatch.CellValue,Mirror.Examples.MultipleMatch.CellGUI> Mirror.Examples.MultipleMatch.MatchController::MatchCells
	Dictionary_2_t21A58570BF69142737A6DA95313A875D27EE6806 * ___MatchCells_14;
	// Mirror.Examples.MultipleMatch.CellValue Mirror.Examples.MultipleMatch.MatchController::boardScore
	uint16_t ___boardScore_15;
	// System.Boolean Mirror.Examples.MultipleMatch.MatchController::playAgain
	bool ___playAgain_16;
	// UnityEngine.CanvasGroup Mirror.Examples.MultipleMatch.MatchController::canvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup_17;
	// UnityEngine.UI.Text Mirror.Examples.MultipleMatch.MatchController::gameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gameText_18;
	// UnityEngine.UI.Button Mirror.Examples.MultipleMatch.MatchController::exitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___exitButton_19;
	// UnityEngine.UI.Button Mirror.Examples.MultipleMatch.MatchController::playAgainButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___playAgainButton_20;
	// UnityEngine.UI.Text Mirror.Examples.MultipleMatch.MatchController::winCountLocal
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___winCountLocal_21;
	// UnityEngine.UI.Text Mirror.Examples.MultipleMatch.MatchController::winCountOpponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___winCountOpponent_22;
	// Mirror.Examples.MultipleMatch.CanvasController Mirror.Examples.MultipleMatch.MatchController::canvasController
	CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * ___canvasController_23;
	// Mirror.NetworkIdentity Mirror.Examples.MultipleMatch.MatchController::player1
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___player1_24;
	// Mirror.NetworkIdentity Mirror.Examples.MultipleMatch.MatchController::player2
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___player2_25;
	// Mirror.NetworkIdentity Mirror.Examples.MultipleMatch.MatchController::startingPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___startingPlayer_26;
	// Mirror.NetworkIdentity Mirror.Examples.MultipleMatch.MatchController::currentPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___currentPlayer_27;
	// System.UInt32 Mirror.Examples.MultipleMatch.MatchController::___currentPlayerNetId
	uint32_t ______currentPlayerNetId_28;

public:
	inline static int32_t get_offset_of_matchPlayerData_13() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___matchPlayerData_13)); }
	inline SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 * get_matchPlayerData_13() const { return ___matchPlayerData_13; }
	inline SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 ** get_address_of_matchPlayerData_13() { return &___matchPlayerData_13; }
	inline void set_matchPlayerData_13(SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 * value)
	{
		___matchPlayerData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchPlayerData_13), (void*)value);
	}

	inline static int32_t get_offset_of_MatchCells_14() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___MatchCells_14)); }
	inline Dictionary_2_t21A58570BF69142737A6DA95313A875D27EE6806 * get_MatchCells_14() const { return ___MatchCells_14; }
	inline Dictionary_2_t21A58570BF69142737A6DA95313A875D27EE6806 ** get_address_of_MatchCells_14() { return &___MatchCells_14; }
	inline void set_MatchCells_14(Dictionary_2_t21A58570BF69142737A6DA95313A875D27EE6806 * value)
	{
		___MatchCells_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchCells_14), (void*)value);
	}

	inline static int32_t get_offset_of_boardScore_15() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___boardScore_15)); }
	inline uint16_t get_boardScore_15() const { return ___boardScore_15; }
	inline uint16_t* get_address_of_boardScore_15() { return &___boardScore_15; }
	inline void set_boardScore_15(uint16_t value)
	{
		___boardScore_15 = value;
	}

	inline static int32_t get_offset_of_playAgain_16() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___playAgain_16)); }
	inline bool get_playAgain_16() const { return ___playAgain_16; }
	inline bool* get_address_of_playAgain_16() { return &___playAgain_16; }
	inline void set_playAgain_16(bool value)
	{
		___playAgain_16 = value;
	}

	inline static int32_t get_offset_of_canvasGroup_17() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___canvasGroup_17)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_canvasGroup_17() const { return ___canvasGroup_17; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_canvasGroup_17() { return &___canvasGroup_17; }
	inline void set_canvasGroup_17(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___canvasGroup_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasGroup_17), (void*)value);
	}

	inline static int32_t get_offset_of_gameText_18() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___gameText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gameText_18() const { return ___gameText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gameText_18() { return &___gameText_18; }
	inline void set_gameText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gameText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameText_18), (void*)value);
	}

	inline static int32_t get_offset_of_exitButton_19() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___exitButton_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_exitButton_19() const { return ___exitButton_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_exitButton_19() { return &___exitButton_19; }
	inline void set_exitButton_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___exitButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_playAgainButton_20() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___playAgainButton_20)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_playAgainButton_20() const { return ___playAgainButton_20; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_playAgainButton_20() { return &___playAgainButton_20; }
	inline void set_playAgainButton_20(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___playAgainButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAgainButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_winCountLocal_21() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___winCountLocal_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_winCountLocal_21() const { return ___winCountLocal_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_winCountLocal_21() { return &___winCountLocal_21; }
	inline void set_winCountLocal_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___winCountLocal_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winCountLocal_21), (void*)value);
	}

	inline static int32_t get_offset_of_winCountOpponent_22() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___winCountOpponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_winCountOpponent_22() const { return ___winCountOpponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_winCountOpponent_22() { return &___winCountOpponent_22; }
	inline void set_winCountOpponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___winCountOpponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winCountOpponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_canvasController_23() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___canvasController_23)); }
	inline CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * get_canvasController_23() const { return ___canvasController_23; }
	inline CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D ** get_address_of_canvasController_23() { return &___canvasController_23; }
	inline void set_canvasController_23(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * value)
	{
		___canvasController_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasController_23), (void*)value);
	}

	inline static int32_t get_offset_of_player1_24() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___player1_24)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_player1_24() const { return ___player1_24; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_player1_24() { return &___player1_24; }
	inline void set_player1_24(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___player1_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player1_24), (void*)value);
	}

	inline static int32_t get_offset_of_player2_25() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___player2_25)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_player2_25() const { return ___player2_25; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_player2_25() { return &___player2_25; }
	inline void set_player2_25(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___player2_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player2_25), (void*)value);
	}

	inline static int32_t get_offset_of_startingPlayer_26() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___startingPlayer_26)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_startingPlayer_26() const { return ___startingPlayer_26; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_startingPlayer_26() { return &___startingPlayer_26; }
	inline void set_startingPlayer_26(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___startingPlayer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startingPlayer_26), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayer_27() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ___currentPlayer_27)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_currentPlayer_27() const { return ___currentPlayer_27; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_currentPlayer_27() { return &___currentPlayer_27; }
	inline void set_currentPlayer_27(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___currentPlayer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayer_27), (void*)value);
	}

	inline static int32_t get_offset_of____currentPlayerNetId_28() { return static_cast<int32_t>(offsetof(MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69, ______currentPlayerNetId_28)); }
	inline uint32_t get____currentPlayerNetId_28() const { return ______currentPlayerNetId_28; }
	inline uint32_t* get_address_of____currentPlayerNetId_28() { return &______currentPlayerNetId_28; }
	inline void set____currentPlayerNetId_28(uint32_t value)
	{
		______currentPlayerNetId_28 = value;
	}
};


// Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager
struct MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F  : public NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15
{
public:
	// UnityEngine.GameObject Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::rewardPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rewardPrefab_28;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::instances
	int32_t ___instances_29;
	// System.String Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::gameScene
	String_t* ___gameScene_30;
	// System.Boolean Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::subscenesLoaded
	bool ___subscenesLoaded_31;
	// System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene> Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::subScenes
	List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * ___subScenes_32;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::clientIndex
	int32_t ___clientIndex_33;

public:
	inline static int32_t get_offset_of_rewardPrefab_28() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___rewardPrefab_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rewardPrefab_28() const { return ___rewardPrefab_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rewardPrefab_28() { return &___rewardPrefab_28; }
	inline void set_rewardPrefab_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rewardPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_instances_29() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___instances_29)); }
	inline int32_t get_instances_29() const { return ___instances_29; }
	inline int32_t* get_address_of_instances_29() { return &___instances_29; }
	inline void set_instances_29(int32_t value)
	{
		___instances_29 = value;
	}

	inline static int32_t get_offset_of_gameScene_30() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___gameScene_30)); }
	inline String_t* get_gameScene_30() const { return ___gameScene_30; }
	inline String_t** get_address_of_gameScene_30() { return &___gameScene_30; }
	inline void set_gameScene_30(String_t* value)
	{
		___gameScene_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameScene_30), (void*)value);
	}

	inline static int32_t get_offset_of_subscenesLoaded_31() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___subscenesLoaded_31)); }
	inline bool get_subscenesLoaded_31() const { return ___subscenesLoaded_31; }
	inline bool* get_address_of_subscenesLoaded_31() { return &___subscenesLoaded_31; }
	inline void set_subscenesLoaded_31(bool value)
	{
		___subscenesLoaded_31 = value;
	}

	inline static int32_t get_offset_of_subScenes_32() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___subScenes_32)); }
	inline List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * get_subScenes_32() const { return ___subScenes_32; }
	inline List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 ** get_address_of_subScenes_32() { return &___subScenes_32; }
	inline void set_subScenes_32(List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * value)
	{
		___subScenes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subScenes_32), (void*)value);
	}

	inline static int32_t get_offset_of_clientIndex_33() { return static_cast<int32_t>(offsetof(MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F, ___clientIndex_33)); }
	inline int32_t get_clientIndex_33() const { return ___clientIndex_33; }
	inline int32_t* get_address_of_clientIndex_33() { return &___clientIndex_33; }
	inline void set_clientIndex_33(int32_t value)
	{
		___clientIndex_33 = value;
	}
};


// Mirror.NetworkRoomManager
struct NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516  : public NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15
{
public:
	// System.Boolean Mirror.NetworkRoomManager::showRoomGUI
	bool ___showRoomGUI_28;
	// System.Int32 Mirror.NetworkRoomManager::minPlayers
	int32_t ___minPlayers_29;
	// Mirror.NetworkRoomPlayer Mirror.NetworkRoomManager::roomPlayerPrefab
	NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * ___roomPlayerPrefab_30;
	// System.String Mirror.NetworkRoomManager::RoomScene
	String_t* ___RoomScene_31;
	// System.String Mirror.NetworkRoomManager::GameplayScene
	String_t* ___GameplayScene_32;
	// System.Collections.Generic.List`1<Mirror.NetworkRoomManager/PendingPlayer> Mirror.NetworkRoomManager::pendingPlayers
	List_1_t38A5A5E401291927667E9840827169D1FFDA2EFC * ___pendingPlayers_33;
	// System.Boolean Mirror.NetworkRoomManager::_allPlayersReady
	bool ____allPlayersReady_34;
	// System.Collections.Generic.List`1<Mirror.NetworkRoomPlayer> Mirror.NetworkRoomManager::roomSlots
	List_1_t12E07DEAE79B9E370C8C88598C5BC4D3A5B328A6 * ___roomSlots_35;
	// System.Int32 Mirror.NetworkRoomManager::clientIndex
	int32_t ___clientIndex_36;

public:
	inline static int32_t get_offset_of_showRoomGUI_28() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___showRoomGUI_28)); }
	inline bool get_showRoomGUI_28() const { return ___showRoomGUI_28; }
	inline bool* get_address_of_showRoomGUI_28() { return &___showRoomGUI_28; }
	inline void set_showRoomGUI_28(bool value)
	{
		___showRoomGUI_28 = value;
	}

	inline static int32_t get_offset_of_minPlayers_29() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___minPlayers_29)); }
	inline int32_t get_minPlayers_29() const { return ___minPlayers_29; }
	inline int32_t* get_address_of_minPlayers_29() { return &___minPlayers_29; }
	inline void set_minPlayers_29(int32_t value)
	{
		___minPlayers_29 = value;
	}

	inline static int32_t get_offset_of_roomPlayerPrefab_30() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___roomPlayerPrefab_30)); }
	inline NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * get_roomPlayerPrefab_30() const { return ___roomPlayerPrefab_30; }
	inline NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F ** get_address_of_roomPlayerPrefab_30() { return &___roomPlayerPrefab_30; }
	inline void set_roomPlayerPrefab_30(NetworkRoomPlayer_t2FE49F4EFB86DCC92024BC04E0548DA172D7470F * value)
	{
		___roomPlayerPrefab_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomPlayerPrefab_30), (void*)value);
	}

	inline static int32_t get_offset_of_RoomScene_31() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___RoomScene_31)); }
	inline String_t* get_RoomScene_31() const { return ___RoomScene_31; }
	inline String_t** get_address_of_RoomScene_31() { return &___RoomScene_31; }
	inline void set_RoomScene_31(String_t* value)
	{
		___RoomScene_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomScene_31), (void*)value);
	}

	inline static int32_t get_offset_of_GameplayScene_32() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___GameplayScene_32)); }
	inline String_t* get_GameplayScene_32() const { return ___GameplayScene_32; }
	inline String_t** get_address_of_GameplayScene_32() { return &___GameplayScene_32; }
	inline void set_GameplayScene_32(String_t* value)
	{
		___GameplayScene_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameplayScene_32), (void*)value);
	}

	inline static int32_t get_offset_of_pendingPlayers_33() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___pendingPlayers_33)); }
	inline List_1_t38A5A5E401291927667E9840827169D1FFDA2EFC * get_pendingPlayers_33() const { return ___pendingPlayers_33; }
	inline List_1_t38A5A5E401291927667E9840827169D1FFDA2EFC ** get_address_of_pendingPlayers_33() { return &___pendingPlayers_33; }
	inline void set_pendingPlayers_33(List_1_t38A5A5E401291927667E9840827169D1FFDA2EFC * value)
	{
		___pendingPlayers_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingPlayers_33), (void*)value);
	}

	inline static int32_t get_offset_of__allPlayersReady_34() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ____allPlayersReady_34)); }
	inline bool get__allPlayersReady_34() const { return ____allPlayersReady_34; }
	inline bool* get_address_of__allPlayersReady_34() { return &____allPlayersReady_34; }
	inline void set__allPlayersReady_34(bool value)
	{
		____allPlayersReady_34 = value;
	}

	inline static int32_t get_offset_of_roomSlots_35() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___roomSlots_35)); }
	inline List_1_t12E07DEAE79B9E370C8C88598C5BC4D3A5B328A6 * get_roomSlots_35() const { return ___roomSlots_35; }
	inline List_1_t12E07DEAE79B9E370C8C88598C5BC4D3A5B328A6 ** get_address_of_roomSlots_35() { return &___roomSlots_35; }
	inline void set_roomSlots_35(List_1_t12E07DEAE79B9E370C8C88598C5BC4D3A5B328A6 * value)
	{
		___roomSlots_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomSlots_35), (void*)value);
	}

	inline static int32_t get_offset_of_clientIndex_36() { return static_cast<int32_t>(offsetof(NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516, ___clientIndex_36)); }
	inline int32_t get_clientIndex_36() const { return ___clientIndex_36; }
	inline int32_t* get_address_of_clientIndex_36() { return &___clientIndex_36; }
	inline void set_clientIndex_36(int32_t value)
	{
		___clientIndex_36 = value;
	}
};


// Mirror.Examples.AdditiveLevels.PlayerController
struct PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// UnityEngine.CharacterController Mirror.Examples.AdditiveLevels.PlayerController::characterController
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___characterController_13;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::moveSpeed
	float ___moveSpeed_14;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::turnSensitivity
	float ___turnSensitivity_15;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::maxTurnSpeed
	float ___maxTurnSpeed_16;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::horizontal
	float ___horizontal_17;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::vertical
	float ___vertical_18;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::turn
	float ___turn_19;
	// System.Single Mirror.Examples.AdditiveLevels.PlayerController::jumpSpeed
	float ___jumpSpeed_20;
	// System.Boolean Mirror.Examples.AdditiveLevels.PlayerController::isGrounded
	bool ___isGrounded_21;
	// System.Boolean Mirror.Examples.AdditiveLevels.PlayerController::isFalling
	bool ___isFalling_22;
	// UnityEngine.Vector3 Mirror.Examples.AdditiveLevels.PlayerController::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_23;

public:
	inline static int32_t get_offset_of_characterController_13() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___characterController_13)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_characterController_13() const { return ___characterController_13; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_characterController_13() { return &___characterController_13; }
	inline void set_characterController_13(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___characterController_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterController_13), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_14() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___moveSpeed_14)); }
	inline float get_moveSpeed_14() const { return ___moveSpeed_14; }
	inline float* get_address_of_moveSpeed_14() { return &___moveSpeed_14; }
	inline void set_moveSpeed_14(float value)
	{
		___moveSpeed_14 = value;
	}

	inline static int32_t get_offset_of_turnSensitivity_15() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___turnSensitivity_15)); }
	inline float get_turnSensitivity_15() const { return ___turnSensitivity_15; }
	inline float* get_address_of_turnSensitivity_15() { return &___turnSensitivity_15; }
	inline void set_turnSensitivity_15(float value)
	{
		___turnSensitivity_15 = value;
	}

	inline static int32_t get_offset_of_maxTurnSpeed_16() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___maxTurnSpeed_16)); }
	inline float get_maxTurnSpeed_16() const { return ___maxTurnSpeed_16; }
	inline float* get_address_of_maxTurnSpeed_16() { return &___maxTurnSpeed_16; }
	inline void set_maxTurnSpeed_16(float value)
	{
		___maxTurnSpeed_16 = value;
	}

	inline static int32_t get_offset_of_horizontal_17() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___horizontal_17)); }
	inline float get_horizontal_17() const { return ___horizontal_17; }
	inline float* get_address_of_horizontal_17() { return &___horizontal_17; }
	inline void set_horizontal_17(float value)
	{
		___horizontal_17 = value;
	}

	inline static int32_t get_offset_of_vertical_18() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___vertical_18)); }
	inline float get_vertical_18() const { return ___vertical_18; }
	inline float* get_address_of_vertical_18() { return &___vertical_18; }
	inline void set_vertical_18(float value)
	{
		___vertical_18 = value;
	}

	inline static int32_t get_offset_of_turn_19() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___turn_19)); }
	inline float get_turn_19() const { return ___turn_19; }
	inline float* get_address_of_turn_19() { return &___turn_19; }
	inline void set_turn_19(float value)
	{
		___turn_19 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_20() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___jumpSpeed_20)); }
	inline float get_jumpSpeed_20() const { return ___jumpSpeed_20; }
	inline float* get_address_of_jumpSpeed_20() { return &___jumpSpeed_20; }
	inline void set_jumpSpeed_20(float value)
	{
		___jumpSpeed_20 = value;
	}

	inline static int32_t get_offset_of_isGrounded_21() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___isGrounded_21)); }
	inline bool get_isGrounded_21() const { return ___isGrounded_21; }
	inline bool* get_address_of_isGrounded_21() { return &___isGrounded_21; }
	inline void set_isGrounded_21(bool value)
	{
		___isGrounded_21 = value;
	}

	inline static int32_t get_offset_of_isFalling_22() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___isFalling_22)); }
	inline bool get_isFalling_22() const { return ___isFalling_22; }
	inline bool* get_address_of_isFalling_22() { return &___isFalling_22; }
	inline void set_isFalling_22(bool value)
	{
		___isFalling_22 = value;
	}

	inline static int32_t get_offset_of_velocity_23() { return static_cast<int32_t>(offsetof(PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF, ___velocity_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_23() const { return ___velocity_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_23() { return &___velocity_23; }
	inline void set_velocity_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_23 = value;
	}
};


// Mirror.Examples.MultipleAdditiveScenes.PlayerScore
struct PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.PlayerScore::playerNumber
	int32_t ___playerNumber_13;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.PlayerScore::scoreIndex
	int32_t ___scoreIndex_14;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.PlayerScore::matchIndex
	int32_t ___matchIndex_15;
	// System.UInt32 Mirror.Examples.MultipleAdditiveScenes.PlayerScore::score
	uint32_t ___score_16;
	// System.Int32 Mirror.Examples.MultipleAdditiveScenes.PlayerScore::clientMatchIndex
	int32_t ___clientMatchIndex_17;

public:
	inline static int32_t get_offset_of_playerNumber_13() { return static_cast<int32_t>(offsetof(PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD, ___playerNumber_13)); }
	inline int32_t get_playerNumber_13() const { return ___playerNumber_13; }
	inline int32_t* get_address_of_playerNumber_13() { return &___playerNumber_13; }
	inline void set_playerNumber_13(int32_t value)
	{
		___playerNumber_13 = value;
	}

	inline static int32_t get_offset_of_scoreIndex_14() { return static_cast<int32_t>(offsetof(PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD, ___scoreIndex_14)); }
	inline int32_t get_scoreIndex_14() const { return ___scoreIndex_14; }
	inline int32_t* get_address_of_scoreIndex_14() { return &___scoreIndex_14; }
	inline void set_scoreIndex_14(int32_t value)
	{
		___scoreIndex_14 = value;
	}

	inline static int32_t get_offset_of_matchIndex_15() { return static_cast<int32_t>(offsetof(PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD, ___matchIndex_15)); }
	inline int32_t get_matchIndex_15() const { return ___matchIndex_15; }
	inline int32_t* get_address_of_matchIndex_15() { return &___matchIndex_15; }
	inline void set_matchIndex_15(int32_t value)
	{
		___matchIndex_15 = value;
	}

	inline static int32_t get_offset_of_score_16() { return static_cast<int32_t>(offsetof(PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD, ___score_16)); }
	inline uint32_t get_score_16() const { return ___score_16; }
	inline uint32_t* get_address_of_score_16() { return &___score_16; }
	inline void set_score_16(uint32_t value)
	{
		___score_16 = value;
	}

	inline static int32_t get_offset_of_clientMatchIndex_17() { return static_cast<int32_t>(offsetof(PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD, ___clientMatchIndex_17)); }
	inline int32_t get_clientMatchIndex_17() const { return ___clientMatchIndex_17; }
	inline int32_t* get_address_of_clientMatchIndex_17() { return &___clientMatchIndex_17; }
	inline void set_clientMatchIndex_17(int32_t value)
	{
		___clientMatchIndex_17 = value;
	}
};


// Mirror.Examples.AdditiveLevels.Portal
struct Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.String Mirror.Examples.AdditiveLevels.Portal::destinationScene
	String_t* ___destinationScene_13;
	// UnityEngine.Vector3 Mirror.Examples.AdditiveLevels.Portal::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_14;
	// TMPro.TextMeshPro Mirror.Examples.AdditiveLevels.Portal::label
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___label_15;
	// System.String Mirror.Examples.AdditiveLevels.Portal::labelText
	String_t* ___labelText_16;
	// UnityEngine.WaitForSeconds Mirror.Examples.AdditiveLevels.Portal::waitForFade
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___waitForFade_17;

public:
	inline static int32_t get_offset_of_destinationScene_13() { return static_cast<int32_t>(offsetof(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8, ___destinationScene_13)); }
	inline String_t* get_destinationScene_13() const { return ___destinationScene_13; }
	inline String_t** get_address_of_destinationScene_13() { return &___destinationScene_13; }
	inline void set_destinationScene_13(String_t* value)
	{
		___destinationScene_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destinationScene_13), (void*)value);
	}

	inline static int32_t get_offset_of_startPosition_14() { return static_cast<int32_t>(offsetof(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8, ___startPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_14() const { return ___startPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_14() { return &___startPosition_14; }
	inline void set_startPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_14 = value;
	}

	inline static int32_t get_offset_of_label_15() { return static_cast<int32_t>(offsetof(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8, ___label_15)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_label_15() const { return ___label_15; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_label_15() { return &___label_15; }
	inline void set_label_15(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___label_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_15), (void*)value);
	}

	inline static int32_t get_offset_of_labelText_16() { return static_cast<int32_t>(offsetof(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8, ___labelText_16)); }
	inline String_t* get_labelText_16() const { return ___labelText_16; }
	inline String_t** get_address_of_labelText_16() { return &___labelText_16; }
	inline void set_labelText_16(String_t* value)
	{
		___labelText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelText_16), (void*)value);
	}

	inline static int32_t get_offset_of_waitForFade_17() { return static_cast<int32_t>(offsetof(Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8, ___waitForFade_17)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_waitForFade_17() const { return ___waitForFade_17; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_waitForFade_17() { return &___waitForFade_17; }
	inline void set_waitForFade_17(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___waitForFade_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForFade_17), (void*)value);
	}
};


// Mirror.Examples.Tanks.Projectile
struct Projectile_t1C5430FC42935877498341CC359F93F1987C4586  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Single Mirror.Examples.Tanks.Projectile::destroyAfter
	float ___destroyAfter_13;
	// UnityEngine.Rigidbody Mirror.Examples.Tanks.Projectile::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_14;
	// System.Single Mirror.Examples.Tanks.Projectile::force
	float ___force_15;

public:
	inline static int32_t get_offset_of_destroyAfter_13() { return static_cast<int32_t>(offsetof(Projectile_t1C5430FC42935877498341CC359F93F1987C4586, ___destroyAfter_13)); }
	inline float get_destroyAfter_13() const { return ___destroyAfter_13; }
	inline float* get_address_of_destroyAfter_13() { return &___destroyAfter_13; }
	inline void set_destroyAfter_13(float value)
	{
		___destroyAfter_13 = value;
	}

	inline static int32_t get_offset_of_rigidBody_14() { return static_cast<int32_t>(offsetof(Projectile_t1C5430FC42935877498341CC359F93F1987C4586, ___rigidBody_14)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_14() const { return ___rigidBody_14; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_14() { return &___rigidBody_14; }
	inline void set_rigidBody_14(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_14), (void*)value);
	}

	inline static int32_t get_offset_of_force_15() { return static_cast<int32_t>(offsetof(Projectile_t1C5430FC42935877498341CC359F93F1987C4586, ___force_15)); }
	inline float get_force_15() const { return ___force_15; }
	inline float* get_address_of_force_15() { return &___force_15; }
	inline void set_force_15(float value)
	{
		___force_15 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Mirror.Examples.Tanks.Tank
struct Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// UnityEngine.AI.NavMeshAgent Mirror.Examples.Tanks.Tank::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_13;
	// UnityEngine.Animator Mirror.Examples.Tanks.Tank::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_14;
	// UnityEngine.TextMesh Mirror.Examples.Tanks.Tank::healthBar
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___healthBar_15;
	// UnityEngine.Transform Mirror.Examples.Tanks.Tank::turret
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___turret_16;
	// System.Single Mirror.Examples.Tanks.Tank::rotationSpeed
	float ___rotationSpeed_17;
	// UnityEngine.KeyCode Mirror.Examples.Tanks.Tank::shootKey
	int32_t ___shootKey_18;
	// UnityEngine.GameObject Mirror.Examples.Tanks.Tank::projectilePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectilePrefab_19;
	// UnityEngine.Transform Mirror.Examples.Tanks.Tank::projectileMount
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___projectileMount_20;
	// System.Int32 Mirror.Examples.Tanks.Tank::health
	int32_t ___health_21;

public:
	inline static int32_t get_offset_of_agent_13() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___agent_13)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_13() const { return ___agent_13; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_13() { return &___agent_13; }
	inline void set_agent_13(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_13), (void*)value);
	}

	inline static int32_t get_offset_of_animator_14() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___animator_14)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_14() const { return ___animator_14; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_14() { return &___animator_14; }
	inline void set_animator_14(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_14), (void*)value);
	}

	inline static int32_t get_offset_of_healthBar_15() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___healthBar_15)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_healthBar_15() const { return ___healthBar_15; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_healthBar_15() { return &___healthBar_15; }
	inline void set_healthBar_15(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___healthBar_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_15), (void*)value);
	}

	inline static int32_t get_offset_of_turret_16() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___turret_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_turret_16() const { return ___turret_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_turret_16() { return &___turret_16; }
	inline void set_turret_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___turret_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turret_16), (void*)value);
	}

	inline static int32_t get_offset_of_rotationSpeed_17() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___rotationSpeed_17)); }
	inline float get_rotationSpeed_17() const { return ___rotationSpeed_17; }
	inline float* get_address_of_rotationSpeed_17() { return &___rotationSpeed_17; }
	inline void set_rotationSpeed_17(float value)
	{
		___rotationSpeed_17 = value;
	}

	inline static int32_t get_offset_of_shootKey_18() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___shootKey_18)); }
	inline int32_t get_shootKey_18() const { return ___shootKey_18; }
	inline int32_t* get_address_of_shootKey_18() { return &___shootKey_18; }
	inline void set_shootKey_18(int32_t value)
	{
		___shootKey_18 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_19() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___projectilePrefab_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectilePrefab_19() const { return ___projectilePrefab_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectilePrefab_19() { return &___projectilePrefab_19; }
	inline void set_projectilePrefab_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectilePrefab_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_19), (void*)value);
	}

	inline static int32_t get_offset_of_projectileMount_20() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___projectileMount_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_projectileMount_20() const { return ___projectileMount_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_projectileMount_20() { return &___projectileMount_20; }
	inline void set_projectileMount_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___projectileMount_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileMount_20), (void*)value);
	}

	inline static int32_t get_offset_of_health_21() { return static_cast<int32_t>(offsetof(Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8, ___health_21)); }
	inline int32_t get_health_21() const { return ___health_21; }
	inline int32_t* get_address_of_health_21() { return &___health_21; }
	inline void set_health_21(int32_t value)
	{
		___health_21 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// Mirror.Examples.NetworkRoom.NetworkRoomManagerExt
struct NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B  : public NetworkRoomManager_tFFADEB483DEDE23B4DFAC3E4676012A290BEF516
{
public:
	// UnityEngine.GameObject Mirror.Examples.NetworkRoom.NetworkRoomManagerExt::rewardPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rewardPrefab_37;
	// System.Boolean Mirror.Examples.NetworkRoom.NetworkRoomManagerExt::showStartButton
	bool ___showStartButton_38;

public:
	inline static int32_t get_offset_of_rewardPrefab_37() { return static_cast<int32_t>(offsetof(NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B, ___rewardPrefab_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rewardPrefab_37() const { return ___rewardPrefab_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rewardPrefab_37() { return &___rewardPrefab_37; }
	inline void set_rewardPrefab_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rewardPrefab_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardPrefab_37), (void*)value);
	}

	inline static int32_t get_offset_of_showStartButton_38() { return static_cast<int32_t>(offsetof(NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B, ___showStartButton_38)); }
	inline bool get_showStartButton_38() const { return ___showStartButton_38; }
	inline bool* get_address_of_showStartButton_38() { return &___showStartButton_38; }
	inline void set_showStartButton_38(bool value)
	{
		___showStartButton_38 = value;
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// UnityEngine.SceneManagement.Scene[]
struct SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  m_Items[1];

public:
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::GeneratedSyncVarSetter<System.Int32>(!!0,!!0&,System.UInt64,System.Action`2<!!0,!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_gshared_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___field1, uint64_t ___dirtyBit2, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged3, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::GeneratedSyncVarDeserialize<System.Int32>(!!0&,System.Action`2<!!0,!!0>,!!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_gshared_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t* ___field0, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged1, int32_t ___value2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.SceneMessage>(!!0,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_gshared_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  ___message0, int32_t ___channelId1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  Dictionary_2_get_Item_mE046CDF60F67EA653896A516D314CE12F34D9173_gshared (Dictionary_2_t5AD73BEC930D21C6CD64BB9884B5CE15DF5B0A42 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Mirror.SyncIDictionary`2<System.Object,Mirror.Examples.MultipleMatch.MatchPlayerData>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncIDictionary_2_Add_m5D2650B2512EE83F2A8A8A062C1080EC6249FE04_gshared (SyncIDictionary_2_t684AFF4EDA841677AABE02FB09AD46C611D7755D * __this, RuntimeObject * ___key0, MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392  ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_gshared_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_gshared_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398_gshared (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9_gshared (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// T Mirror.Pool`1<System.Object>::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Get_mC5CE019BB0D46B39DB30076D0D8350539EE964EF_gshared_inline (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, const RuntimeMethod* method);
// System.Void Mirror.Pool`1<System.Object>::Return(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pool_1_Return_m18D10CA725CD2F2D9045CF1191833E64244B71B2_gshared_inline (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteBlittable<System.Int32>(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_gshared_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriter::WriteBlittable<System.UInt64>(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_gshared_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, uint64_t ___value0, const RuntimeMethod* method);
// T Mirror.NetworkReader::ReadBlittable<System.Int32>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_gshared_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method);
// T Mirror.NetworkReader::ReadBlittable<System.UInt64>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_gshared_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___array0, int32_t ___newSize1, const RuntimeMethod* method);

// System.Boolean Mirror.NetworkServer::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method);
// System.Void Mirror.Examples.MultipleAdditiveScenes.Spawner::SpawnReward(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SpawnReward_mAF90340CE99B9A901E30A36CC682297D625CC284 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// Mirror.NetworkManager Mirror.NetworkManager::get_singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::Spawn(UnityEngine.GameObject,Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_Spawn_mE71DE744EA836EE5C4EA51B6FCDDCDB83C1D7846 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___ownerConnection1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mirror.Examples.NetworkRoom.Spawner::SpawnReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SpawnReward_m2855D7ADB8B10C2B846D4A7920E1008088A31259 (const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::get_isLocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isLocalPlayer_mFA35EE97B42DEEE92E4FD5562C8C6A1717607DE0 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m3CFD57C08562A9A79AC501773050A18EA0FC791A (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshAgent_get_velocity_mA6F25F6B38D5092BBE6DECD77F8FDB93D5C515C9 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::CmdFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_CmdFire_m0171B75256D048D58241A7E9B74EDF09155D4C8E (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::RotateTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_RotateTurret_mBD0B59A78A0CEBE41D1DD71FFAE21600D6BB0B39 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method);
// Mirror.NetworkWriterPooled Mirror.NetworkWriterPool::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * NetworkWriterPool_Get_m4049C93631427709E5D43CED89089C9CAD045486_inline (const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendCommandInternal(System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendCommandInternal_mEC82E2864E0EFF7FE5D8B1B92DC9151B5AA61220 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, String_t* ___functionFullName0, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer1, int32_t ___channelId2, bool ___requiresAuthority3, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterPool::Return(Mirror.NetworkWriterPooled)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterPool_Return_m68FA23F3FB4D19F1B747FA83D418CA8F8AD07D5B_inline (NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendRPCInternal(System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendRPCInternal_m1F6F594A7FBDC846223DAD77E2F8362C05DB18B2 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, String_t* ___functionFullName0, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer1, int32_t ___channelId2, bool ___includeOwner3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Mirror.Examples.Tanks.Projectile>()
inline Projectile_t1C5430FC42935877498341CC359F93F1987C4586 * Component_GetComponent_TisProjectile_t1C5430FC42935877498341CC359F93F1987C4586_mEADD8636FE88D5887F6D8A98F47D2CA7EA5189EB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Projectile_t1C5430FC42935877498341CC359F93F1987C4586 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::set_Networkhealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_set_Networkhealth_m507DDE5DDB11E1627F66444DB398722F8F4FD183 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::Destroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_Destroy_m113ADC5542A4627A397C75DC3ECC9BC87F404FFB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::GeneratedSyncVarSetter<System.Int32>(!!0,!!0&,System.UInt64,System.Action`2<!!0,!!0>)
inline void NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___field1, uint64_t ___dirtyBit2, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged3, const RuntimeMethod* method)
{
	((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, int32_t, int32_t*, uint64_t, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *, const RuntimeMethod*))NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_gshared_inline)(__this, ___value0, ___field1, ___dirtyBit2, ___OnChanged3, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::RpcOnFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_RpcOnFire_mEF7A49115867A9BF0A22B24534B380CA9B57E19D (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::UserCode_CmdFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_UserCode_CmdFire_mB685757843B7146FA587A360905BE762599F3070 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkClient::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37 (const RuntimeMethod* method);
// System.Void Mirror.Examples.Tanks.Tank::UserCode_RpcOnFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_UserCode_RpcOnFire_m72C1C6D425EF97D77C7A4E870E52F1B69327AD27 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteCallDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallDelegate__ctor_m3F67716E53766A6A7E680E0C77F7B9D5F1F2D0E1 (RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteProcedureCalls::RegisterCommand(System.Type,System.String,Mirror.RemoteCalls.RemoteCallDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteProcedureCalls_RegisterCommand_m3FBF93ACE360E2DE9C986F943698A29A916C3143 (Type_t * ___componentType0, String_t* ___functionFullName1, RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 * ___func2, bool ___requiresAuthority3, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteProcedureCalls::RegisterRpc(System.Type,System.String,Mirror.RemoteCalls.RemoteCallDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteProcedureCalls_RegisterRpc_mD6EE0378898117C330E0D463F1BDA5A7A3F6FD19 (Type_t * ___componentType0, String_t* ___functionFullName1, RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 * ___func2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___initialState1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteInt(Mirror.NetworkWriter,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt_m131D043593351682FEA1F18B455B80F78A24FD12_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int32_t ___value1, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkBehaviour::get_syncVarDirtyBits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteULong(Mirror.NetworkWriter,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteULong_mF3B9637FA1C3EA31551616D085A5A3AF041E6963_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Int32 Mirror.NetworkReaderExtensions::ReadInt(Mirror.NetworkReader)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkReaderExtensions_ReadInt_m7A9A4138EDF745302020D1404A8A73C5BA0F0597_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::GeneratedSyncVarDeserialize<System.Int32>(!!0&,System.Action`2<!!0,!!0>,!!0)
inline void NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t* ___field0, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged1, int32_t ___value2, const RuntimeMethod* method)
{
	((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, int32_t*, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *, int32_t, const RuntimeMethod*))NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_gshared_inline)(__this, ___field0, ___OnChanged1, ___value2, method);
}
// System.UInt64 Mirror.NetworkReaderExtensions::ReadULong(Mirror.NetworkReader)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkReaderExtensions_ReadULong_m01F59C890722632901DC6C16D461CF39E5EEFDAC_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Mirror.NetworkIdentity>()
inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::get_connectionToClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.SceneMessage>(!!0,System.Int32)
inline void NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  ___message0, int32_t ___channelId1, const RuntimeMethod* method)
{
	((  void (*) (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE , int32_t, const RuntimeMethod*))NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_gshared_inline)(__this, ___message0, ___channelId1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform Mirror.NetworkManager::GetStartPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NetworkManager_GetStartPosition_m25078697FA64905AF7618A26E75ED10750B1A754 (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkServer::AddPlayerForConnection(Mirror.NetworkConnectionToClient,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkServer_AddPlayerForConnection_mC2F0A5B518D848C12E42D427DAA8FD0BFC4E9C56 (NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Examples.AdditiveLevels.FadeInOut::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeInOut_FadeIn_m92458A6B5554928B2A1FAB45DB1C0F0B0E25185C (FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * __this, const RuntimeMethod* method);
// Mirror.NetworkManagerMode Mirror.NetworkManager::get_mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Examples.AdditiveLevels.FadeInOut::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeInOut_FadeOut_m3318C2ED8A8914E78EF55D2130DEDF8369E7312E (FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::set_loadSceneMode(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters_set_loadSceneMode_m8AAA5796E9D642FC5C2C95831F22E272A28DD152 (LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::set_localPhysicsMode(UnityEngine.SceneManagement.LocalPhysicsMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters_set_localPhysicsMode_m2631EA535FA759D9FB0D7FEC0D399614800C589D (LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m77AB3010DA4EE548FE973D65A2D983F0CC86254E (String_t* ___sceneName0, LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2  ___parameters1, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByPath_mC4BDDF04CBFE46FD75CA9A5D5F6D88BDD7EE89F8 (String_t* ___scenePath0, const RuntimeMethod* method);
// System.Void Mirror.Examples.MultipleMatch.CanvasController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA771589C27077954CFFD5366F59BD4007B47252 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Mirror.NetworkConnection,Mirror.Examples.MultipleMatch.PlayerInfo>::get_Item(!0)
inline PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2 (Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___key0, const RuntimeMethod* method)
{
	return ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 *, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, const RuntimeMethod*))Dictionary_2_get_Item_mE046CDF60F67EA653896A516D314CE12F34D9173_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::ServerReject(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator_ServerReject_mE1AAE10EB8217BE0E7F81F529A1C12804D37C96E (NetworkAuthenticator_t6A4A785E3C44826F033B6E4DC140A784D32341DF * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>::Remove(!0)
inline bool HashSet_1_Remove_mDB349AC24641A62F1F480EA18BEAA66C005D6480 (HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * __this, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 *, NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Mirror.SyncIDictionary`2<Mirror.NetworkIdentity,Mirror.Examples.MultipleMatch.MatchPlayerData>::Add(!0,!1)
inline void SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0 (SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___key0, MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392  ___value1, const RuntimeMethod* method)
{
	((  void (*) (SyncIDictionary_2_tEF09DBDAF63BB3EF0B219649DEEC553A3D86D483 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 *, MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392 , const RuntimeMethod*))SyncIDictionary_2_Add_m5D2650B2512EE83F2A8A8A062C1080EC6249FE04_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<Mirror.NetworkConnectionToClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m417BE693B5917637E3BB1626C702C5321D0F4B3B (Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.Examples.MultipleMatch.CanvasController::remove_OnPlayerDisconnected(System.Action`1<Mirror.NetworkConnectionToClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasController_remove_OnPlayerDisconnected_mCA978811629BA15B44A0C2094FD14162744CCB27 (CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * __this, Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Examples.MultipleMatch.MatchController::RpcExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchController_RpcExitGame_mCE74DF41EAD5480E49A62B7CD492E680064885A2 (MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::RemovePlayerForConnection(Mirror.NetworkConnection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9 (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___conn0, bool ___destroyServerObject1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.NetworkConnectionToClient>::Add(!0)
inline void List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2 (List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 *, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Mirror.Examples.MultipleMatch.CanvasController::SendMatchList(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasController_SendMatchList_m3BFF5C6436DD1291EF1FB8D0F603152AB6BD23C1 (CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::op_Inequality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Inequality_m5EE1812777959596639D8D480998B8DE0DE83F6D (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___lhs0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___rhs1, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_m94D080FDA6440916AA8F8F4FA13B1002C96BB589 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E (const RuntimeMethod* method);
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager::<>n__0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSceneNetManager_U3CU3En__0_m065DB5F0C2078792D1764F318C17AB7957A64B80 (MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___conn0, const RuntimeMethod* method);
// Mirror.NetworkIdentity Mirror.NetworkConnection::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Mirror.Examples.MultipleAdditiveScenes.PlayerScore>()
inline PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * Component_GetComponent_TisPlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD_m7B6A4CBDF36DAC6F05A925A85F9503868235B98C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.PlayerScore::set_NetworkplayerNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScore_set_NetworkplayerNumber_mB1D8FC7DDFA50ACF3118B71B82FD17797269E9F8 (PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::get_Count()
inline int32_t List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 *, const RuntimeMethod*))List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_gshared_inline)(__this, method);
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.PlayerScore::set_NetworkscoreIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScore_set_NetworkscoreIndex_m0EB06183F96E9F4D3A4ABAD15EA0171B3F1DFD6A (PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mirror.Examples.MultipleAdditiveScenes.PlayerScore::set_NetworkmatchIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScore_set_NetworkmatchIndex_mE38D225BFC2E1E25D66C076E9CBC025D121DD3ED (PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::get_Item(System.Int32)
inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  (*) (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 *, int32_t, const RuntimeMethod*))List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::Add(!0)
inline void List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398 (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 *, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*))List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398_gshared)(__this, ___item0, method);
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.Spawner::InitialSpawn(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_InitialSpawn_m428209101B410D3ED805AE81812BD9BCD2847CB8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>::Clear()
inline void List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9 (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 *, const RuntimeMethod*))List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9_gshared)(__this, method);
}
// System.Void Mirror.Examples.Pong.NetworkManagerPong/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m894009D897E06C26CC20B2D9F06D36EAB22D361D (U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<Mirror.NetworkIdentity>(!!0&)
inline bool GameObject_TryGetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mA0F7A29637DAA05CE1346C384DD9167577DF7C64 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_path_m1B2CE5FA0F1875C94621EE44BECD5E5C39EBF8BE (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// Mirror.NetworkIdentity Mirror.NetworkClient::get_localPlayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkClient_get_localPlayer_mFA6B51032C92C1B18EAA3B7FCD0369A089A0020C_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<Mirror.Examples.AdditiveLevels.PlayerController>(!!0&)
inline bool Component_TryGetComponent_TisPlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF_mC3EC44FB962D23B595D6F9D68A82EDE510E36153 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// T Mirror.Pool`1<Mirror.NetworkWriterPooled>::Get()
inline NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * Pool_1_Get_m200F48A04FDC9338198ACCB232D74592BD6B1EC6_inline (Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * __this, const RuntimeMethod* method)
{
	return ((  NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * (*) (Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 *, const RuntimeMethod*))Pool_1_Get_mC5CE019BB0D46B39DB30076D0D8350539EE964EF_gshared_inline)(__this, method);
}
// System.Void Mirror.NetworkWriter::Reset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method);
// System.Void Mirror.Pool`1<Mirror.NetworkWriterPooled>::Return(T)
inline void Pool_1_Return_mCEC655E65DA5CB52561A33C080F52A3C88EA9F17_inline (Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * __this, NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 *, NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 *, const RuntimeMethod*))Pool_1_Return_m18D10CA725CD2F2D9045CF1191833E64244B71B2_gshared_inline)(__this, ___item0, method);
}
// System.Void Mirror.NetworkWriter::WriteBlittable<System.Int32>(T)
inline void NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *, int32_t, const RuntimeMethod*))NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_gshared_inline)(__this, ___value0, method);
}
// System.Void Mirror.NetworkWriter::WriteBlittable<System.UInt64>(T)
inline void NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *, uint64_t, const RuntimeMethod*))NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_gshared_inline)(__this, ___value0, method);
}
// T Mirror.NetworkReader::ReadBlittable<System.Int32>()
inline int32_t NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 *, const RuntimeMethod*))NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_gshared_inline)(__this, method);
}
// T Mirror.NetworkReader::ReadBlittable<System.UInt64>()
inline uint64_t NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 *, const RuntimeMethod*))NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_gshared_inline)(__this, method);
}
// System.Boolean Mirror.NetworkServer::get_localClientActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkServer_get_localClientActive_m9C4F4B8848458BB4A2EE6552EDE1E39792C2B3BA (const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::GetSyncVarHookGuard(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_GetSyncVarHookGuard_m69E27CD31431FD5BBDDA23D06E99E18CF7E2590A (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, uint64_t ___dirtyBit0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SetSyncVarHookGuard(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SetSyncVarHookGuard_mF38BC0B793D2A923C63A3A17CA9CA704B5588756 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, uint64_t ___dirtyBit0, bool ___value1, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> Mirror.NetworkWriter::ToArraySegment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  NetworkWriter_ToArraySegment_m20B3969C06F4320029AD66A820B0523A8D6641EF_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void Mirror.NetworkWriter::EnsureCapacity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
inline void Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_gshared)(___array0, ___newSize1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Examples.MultipleAdditiveScenes.Spawner::InitialSpawn(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_InitialSpawn_m428209101B410D3ED805AE81812BD9BCD2847CB8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < 10; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_000c:
	{
		// SpawnReward(scene);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1 = ___scene0;
		Spawner_SpawnReward_mAF90340CE99B9A901E30A36CC682297D625CC284(L_1, /*hidden argument*/NULL);
		// for (int i = 0; i < 10; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0016:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)10))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.Spawner::SpawnReward(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SpawnReward_mAF90340CE99B9A901E30A36CC682297D625CC284 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// Vector3 spawnPosition = new Vector3(Random.Range(-19, 20), 1, Random.Range(-19, 20));
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-19), ((int32_t)20), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-19), ((int32_t)20), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)((float)L_1)), (1.0f), ((float)((float)L_2)), /*hidden argument*/NULL);
		// GameObject reward = Object.Instantiate(((MultiSceneNetManager)NetworkManager.singleton).rewardPrefab, spawnPosition, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_3;
		L_3 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ((MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F *)CastclassClass((RuntimeObject*)L_3, MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F_il2cpp_TypeInfo_var))->get_rewardPrefab_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// SceneManager.MoveGameObjectToScene(reward, scene);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_9 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_8, L_9, /*hidden argument*/NULL);
		// NetworkServer.Spawn(reward);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_Spawn_mE71DE744EA836EE5C4EA51B6FCDDCDB83C1D7846(L_8, (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mA9E18941126107A0792CB73702FC020B7B149E3A (Spawner_tE1D9FC7CBE2C02A623247F9BBE98312C839594B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Examples.NetworkRoom.Spawner::InitialSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_InitialSpawn_mB11896EFCECA50702F008FE6DA5A97445AD3CF47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < 10; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_000c:
	{
		// SpawnReward();
		Spawner_SpawnReward_m2855D7ADB8B10C2B846D4A7920E1008088A31259(/*hidden argument*/NULL);
		// for (int i = 0; i < 10; i++)
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)10))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.NetworkRoom.Spawner::SpawnReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SpawnReward_m2855D7ADB8B10C2B846D4A7920E1008088A31259 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!NetworkServer.active) return;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!NetworkServer.active) return;
		return;
	}

IL_0008:
	{
		// Vector3 spawnPosition = new Vector3(Random.Range(-19, 20), 1, Random.Range(-19, 20));
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-19), ((int32_t)20), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-19), ((int32_t)20), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)((float)L_1)), (1.0f), ((float)((float)L_2)), /*hidden argument*/NULL);
		// NetworkServer.Spawn(Object.Instantiate(((NetworkRoomManagerExt)NetworkManager.singleton).rewardPrefab, spawnPosition, Quaternion.identity));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_3;
		L_3 = NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ((NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B *)CastclassClass((RuntimeObject*)L_3, NetworkRoomManagerExt_tF57240FAD69AC8BFA421B955CAB2B7A5433A993B_il2cpp_TypeInfo_var))->get_rewardPrefab_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_Spawn_mE71DE744EA836EE5C4EA51B6FCDDCDB83C1D7846(L_7, (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Examples.NetworkRoom.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mD1805A49123B37F0C47737BA6EA21A6C3F944052 (Spawner_tBBF6EA0F50BBB5D8CA665B2F0EFFF790BDABC8CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Examples.Tanks.Tank::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_Update_mCE73459E9C27B5F40909F5ECC0149DCBE459C243 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// healthBar.text = new string('-', health);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_healthBar_15();
		int32_t L_1 = __this->get_health_21();
		String_t* L_2;
		L_2 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((int32_t)45), L_1, /*hidden argument*/NULL);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_0, L_2, /*hidden argument*/NULL);
		// if (isLocalPlayer)
		bool L_3;
		L_3 = NetworkBehaviour_get_isLocalPlayer_mFA35EE97B42DEEE92E4FD5562C8C6A1717607DE0(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00d7;
		}
	}
	{
		// float horizontal = Input.GetAxis("Horizontal");
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_4;
		// transform.Rotate(0, horizontal * rotationSpeed * Time.deltaTime, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = __this->get_rotationSpeed_17();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_5, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)L_8)), (0.0f), /*hidden argument*/NULL);
		// float vertical = Input.GetAxis("Vertical");
		float L_9;
		L_9 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_9;
		// Vector3 forward = transform.TransformDirection(Vector3.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// agent.velocity = forward * Mathf.Max(vertical, 0) * agent.speed;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_13 = __this->get_agent_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_2;
		float L_15 = V_1;
		float L_16;
		L_16 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_15, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_16, /*hidden argument*/NULL);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_18 = __this->get_agent_13();
		float L_19;
		L_19 = NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_19, /*hidden argument*/NULL);
		NavMeshAgent_set_velocity_m3CFD57C08562A9A79AC501773050A18EA0FC791A(L_13, L_20, /*hidden argument*/NULL);
		// animator.SetBool("Moving", agent.velocity != Vector3.zero);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21 = __this->get_animator_14();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_22 = __this->get_agent_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = NavMeshAgent_get_velocity_mA6F25F6B38D5092BBE6DECD77F8FDB93D5C515C9(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_25;
		L_25 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_23, L_24, /*hidden argument*/NULL);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_21, _stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC, L_25, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(shootKey))
		int32_t L_26 = __this->get_shootKey_18();
		bool L_27;
		L_27 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d1;
		}
	}
	{
		// CmdFire();
		Tank_CmdFire_m0171B75256D048D58241A7E9B74EDF09155D4C8E(__this, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		// RotateTurret();
		Tank_RotateTurret_mBD0B59A78A0CEBE41D1DD71FFAE21600D6BB0B39(__this, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::CmdFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_CmdFire_m0171B75256D048D58241A7E9B74EDF09155D4C8E (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF3BEC369881ADB53670DA01625A9FCF7417ECD);
		s_Il2CppMethodInitialized = true;
	}
	NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_0;
		L_0 = NetworkWriterPool_Get_m4049C93631427709E5D43CED89089C9CAD045486_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_1 = V_0;
		NetworkBehaviour_SendCommandInternal_mEC82E2864E0EFF7FE5D8B1B92DC9151B5AA61220(__this, _stringLiteralBFF3BEC369881ADB53670DA01625A9FCF7417ECD, L_1, ((int32_t)0), (bool)1, /*hidden argument*/NULL);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_2 = V_0;
		NetworkWriterPool_Return_m68FA23F3FB4D19F1B747FA83D418CA8F8AD07D5B_inline(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::RpcOnFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_RpcOnFire_mEF7A49115867A9BF0A22B24534B380CA9B57E19D (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38BC05DCF68F7A284B2AA915AEF3BA18FD916690);
		s_Il2CppMethodInitialized = true;
	}
	NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_0;
		L_0 = NetworkWriterPool_Get_m4049C93631427709E5D43CED89089C9CAD045486_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_1 = V_0;
		NetworkBehaviour_SendRPCInternal_m1F6F594A7FBDC846223DAD77E2F8362C05DB18B2(__this, _stringLiteral38BC05DCF68F7A284B2AA915AEF3BA18FD916690, L_1, ((int32_t)0), (bool)1, /*hidden argument*/NULL);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_2 = V_0;
		NetworkWriterPool_Return_m68FA23F3FB4D19F1B747FA83D418CA8F8AD07D5B_inline(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_OnTriggerEnter_mAFBFB8D94E79450F7E6C8D3C45E82D9E1CA56B5F (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisProjectile_t1C5430FC42935877498341CC359F93F1987C4586_mEADD8636FE88D5887F6D8A98F47D2CA7EA5189EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		// if (other.GetComponent<Projectile>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		Projectile_t1C5430FC42935877498341CC359F93F1987C4586 * L_2;
		L_2 = Component_GetComponent_TisProjectile_t1C5430FC42935877498341CC359F93F1987C4586_mEADD8636FE88D5887F6D8A98F47D2CA7EA5189EB(L_1, /*hidden argument*/Component_GetComponent_TisProjectile_t1C5430FC42935877498341CC359F93F1987C4586_mEADD8636FE88D5887F6D8A98F47D2CA7EA5189EB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// --health;
		int32_t L_4 = __this->get_health_21();
		Tank_set_Networkhealth_m507DDE5DDB11E1627F66444DB398722F8F4FD183(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		// if (health == 0)
		int32_t L_5 = __this->get_health_21();
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// NetworkServer.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_Destroy_m113ADC5542A4627A397C75DC3ECC9BC87F404FFB(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::RotateTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_RotateTurret_mBD0B59A78A0CEBE41D1DD71FFAE21600D6BB0B39 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Physics.Raycast(ray, out hit, 100))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3 = V_0;
		bool L_4;
		L_4 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), (100.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		// Debug.DrawLine(ray.origin, hit.point);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF(L_5, L_6, /*hidden argument*/NULL);
		// Vector3 lookRotation = new Vector3(hit.point.x, turret.transform.position.y, hit.point.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_turret_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_8, L_12, L_14, /*hidden argument*/NULL);
		// turret.transform.LookAt(lookRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_turret_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank__ctor_mD4F3B197D7FE9AC31EC888E8EB318E29AD58F62E (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	{
		// public float rotationSpeed = 100;
		__this->set_rotationSpeed_17((100.0f));
		// public KeyCode shootKey = KeyCode.Space;
		__this->set_shootKey_18(((int32_t)32));
		// [SyncVar] public int health = 4;
		__this->set_health_21(4);
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_MirrorProcessed_m1BE88C861E30F5CEAC3A6F09612C534D60D429F4 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 Mirror.Examples.Tanks.Tank::get_Networkhealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tank_get_Networkhealth_m8154246C0B15659EF73C51BCDD4695EC9B60C4F8 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_health_21();
		return L_0;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::set_Networkhealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_set_Networkhealth_m507DDE5DDB11E1627F66444DB398722F8F4FD183 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t* L_1 = __this->get_address_of_health_21();
		NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_inline(__this, L_0, (int32_t*)L_1, ((int64_t)1LL), (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)NULL, /*hidden argument*/NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::UserCode_CmdFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_UserCode_CmdFire_mB685757843B7146FA587A360905BE762599F3070 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject projectile = Instantiate(projectilePrefab, projectileMount.position, projectileMount.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_projectilePrefab_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_projectileMount_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_projectileMount_20();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// NetworkServer.Spawn(projectile);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_Spawn_mE71DE744EA836EE5C4EA51B6FCDDCDB83C1D7846(L_5, (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *)NULL, /*hidden argument*/NULL);
		// RpcOnFire();
		Tank_RpcOnFire_mEF7A49115867A9BF0A22B24534B380CA9B57E19D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::InvokeUserCode_CmdFire(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_InvokeUserCode_CmdFire_mF71C4B9F7B071D30181146B8EF45ABBC94156643 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77268F8E0AEA59C91A55EDE2F7B86EEA25D51817);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral77268F8E0AEA59C91A55EDE2F7B86EEA25D51817, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		Tank_UserCode_CmdFire_mB685757843B7146FA587A360905BE762599F3070(((Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 *)CastclassClass((RuntimeObject*)L_1, Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::UserCode_RpcOnFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_UserCode_RpcOnFire_m72C1C6D425EF97D77C7A4E870E52F1B69327AD27 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("Shoot");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_14();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::InvokeUserCode_RpcOnFire(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_InvokeUserCode_RpcOnFire_m38F69F1C09EEB363DC20A9B277683822F5A3DE95 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F80BCE9ECBDA5A753E0B76268039021F829D21);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA7F80BCE9ECBDA5A753E0B76268039021F829D21, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		Tank_UserCode_RpcOnFire_m72C1C6D425EF97D77C7A4E870E52F1B69327AD27(((Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 *)CastclassClass((RuntimeObject*)L_1, Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank__cctor_m64F0633CAC66CB4DD7ADCE09884C1DEACDD58D83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteProcedureCalls_t1102DEC394CB2FCFB489C0CDA8A23FAB3178502F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_InvokeUserCode_CmdFire_mF71C4B9F7B071D30181146B8EF45ABBC94156643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_InvokeUserCode_RpcOnFire_m38F69F1C09EEB363DC20A9B277683822F5A3DE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38BC05DCF68F7A284B2AA915AEF3BA18FD916690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF3BEC369881ADB53670DA01625A9FCF7417ECD);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 * L_2 = (RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 *)il2cpp_codegen_object_new(RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728_il2cpp_TypeInfo_var);
		RemoteCallDelegate__ctor_m3F67716E53766A6A7E680E0C77F7B9D5F1F2D0E1(L_2, NULL, (intptr_t)((intptr_t)Tank_InvokeUserCode_CmdFire_mF71C4B9F7B071D30181146B8EF45ABBC94156643_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemoteProcedureCalls_t1102DEC394CB2FCFB489C0CDA8A23FAB3178502F_il2cpp_TypeInfo_var);
		RemoteProcedureCalls_RegisterCommand_m3FBF93ACE360E2DE9C986F943698A29A916C3143(L_1, _stringLiteralBFF3BEC369881ADB53670DA01625A9FCF7417ECD, L_2, (bool)1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 * L_5 = (RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728 *)il2cpp_codegen_object_new(RemoteCallDelegate_t6572D97718A3DDCB8A94B62652AB115CB7F92728_il2cpp_TypeInfo_var);
		RemoteCallDelegate__ctor_m3F67716E53766A6A7E680E0C77F7B9D5F1F2D0E1(L_5, NULL, (intptr_t)((intptr_t)Tank_InvokeUserCode_RpcOnFire_m38F69F1C09EEB363DC20A9B277683822F5A3DE95_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteProcedureCalls_RegisterRpc_mD6EE0378898117C330E0D463F1BDA5A7A3F6FD19(L_4, _stringLiteral38BC05DCF68F7A284B2AA915AEF3BA18FD916690, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.Examples.Tanks.Tank::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tank_SerializeSyncVars_mD43B12580585595D4AC7964264340F8EE7365442 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___forceAll1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		bool L_1 = ___forceAll1;
		bool L_2;
		L_2 = NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ___forceAll1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		int32_t L_5 = __this->get_health_21();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt_m131D043593351682FEA1F18B455B80F78A24FD12_inline(L_4, L_5, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_001d:
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		uint64_t L_7;
		L_7 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteULong_mF3B9637FA1C3EA31551616D085A5A3AF041E6963_inline(L_6, L_7, /*hidden argument*/NULL);
		uint64_t L_8;
		L_8 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_8&(int64_t)((int64_t)1LL))))
		{
			goto IL_004d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		int32_t L_10 = __this->get_health_21();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt_m131D043593351682FEA1F18B455B80F78A24FD12_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_004d:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void Mirror.Examples.Tanks.Tank::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_DeserializeSyncVars_m588EE8294DD17A9A01AB3382A10D7A08A5F58C20 (Tank_tEFC3DB1DFB08C767865E822421DD5AF86DB23CA8 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		bool L_1 = ___initialState1;
		NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___initialState1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		int32_t* L_3 = __this->get_address_of_health_21();
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NetworkReaderExtensions_ReadInt_m7A9A4138EDF745302020D1404A8A73C5BA0F0597_inline(L_4, /*hidden argument*/NULL);
		NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_inline(__this, (int32_t*)L_3, (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)NULL, L_5, /*hidden argument*/NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_RuntimeMethod_var);
		return;
	}

IL_0022:
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint64_t L_7;
		L_7 = NetworkReaderExtensions_ReadULong_m01F59C890722632901DC6C16D461CF39E5EEFDAC_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int64_t L_8 = V_0;
		if (!((int64_t)((int64_t)L_8&(int64_t)((int64_t)1LL))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t* L_9 = __this->get_address_of_health_21();
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_10 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = NetworkReaderExtensions_ReadInt_m7A9A4138EDF745302020D1404A8A73C5BA0F0597_inline(L_10, /*hidden argument*/NULL);
		NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_inline(__this, (int32_t*)L_9, (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)NULL, L_11, /*hidden argument*/NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_RuntimeMethod_var);
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
// System.Void Mirror.Examples.AdditiveScenes.ZoneHandler::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneHandler_OnTriggerEnter_mBF6741B9DDA99BA90A3691D5AC16E3491C8E6939 (ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		// NetworkIdentity networkIdentity = other.gameObject.GetComponent<NetworkIdentity>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_3;
		L_3 = GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		// SceneMessage message = new SceneMessage{ sceneName = subScene, sceneOperation = SceneOperation.LoadAdditive };
		il2cpp_codegen_initobj((&V_1), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		String_t* L_4 = __this->get_subScene_4();
		(&V_1)->set_sceneName_0(L_4);
		(&V_1)->set_sceneOperation_1(1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_5 = V_1;
		V_0 = L_5;
		// networkIdentity.connectionToClient.Send(message);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_6;
		L_6 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_3, /*hidden argument*/NULL);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_7 = V_0;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_6, L_7, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.ZoneHandler::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneHandler_OnTriggerExit_m76E3BD12B304BBFBFC8B178E466826D18CA1BBC6 (ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		// NetworkIdentity networkIdentity = other.gameObject.GetComponent<NetworkIdentity>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_3;
		L_3 = GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mFA75ACF3666006F9878974466A488C75BBD28247_RuntimeMethod_var);
		// SceneMessage message = new SceneMessage{ sceneName = subScene, sceneOperation = SceneOperation.UnloadAdditive };
		il2cpp_codegen_initobj((&V_1), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		String_t* L_4 = __this->get_subScene_4();
		(&V_1)->set_sceneName_0(L_4);
		(&V_1)->set_sceneOperation_1(2);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_5 = V_1;
		V_0 = L_5;
		// networkIdentity.connectionToClient.Send(message);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_6;
		L_6 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_3, /*hidden argument*/NULL);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_7 = V_0;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_6, L_7, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.ZoneHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZoneHandler__ctor_m1F65FFB54CD82FFF8C343774F74DCD402561B720 (ZoneHandler_t1BA6180829EA4E62C9D6DAEF3A027D0925C3DD5E * __this, const RuntimeMethod* method)
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
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayerDelayedU3Ed__11__ctor_m4E2E7540966A84B369B7F5E688AE2075DD1544C9 (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayerDelayedU3Ed__11_System_IDisposable_Dispose_m2DB382B6A62BD7A18D67C32459A29211B475B429 (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAddPlayerDelayedU3Ed__11_MoveNext_m7017F412C77029B2DC2C1EBAF66A5079E5D3A903 (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_00bc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0042;
	}

IL_002b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		// while (!subscenesLoaded)
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_3 = V_1;
		bool L_4 = L_3->get_subscenesLoaded_30();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// conn.Send(new SceneMessage { sceneName = additiveScenes[0], sceneOperation = SceneOperation.LoadAdditive, customHandling = true });
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_5 = __this->get_conn_3();
		il2cpp_codegen_initobj((&V_3), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_6 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6->get_additiveScenes_28();
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(&V_3)->set_sceneName_0(L_9);
		(&V_3)->set_sceneOperation_1(1);
		(&V_3)->set_customHandling_2((bool)1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_10 = V_3;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_5, L_10, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// Transform start = GetStartPosition();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_11 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = NetworkManager_GetStartPosition_m25078697FA64905AF7618A26E75ED10750B1A754(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// GameObject player = Instantiate(playerPrefab, start);
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_13 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 *)L_13)->get_playerPrefab_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_U3CplayerU3E5__2_4(L_16);
		// player.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_U3CplayerU3E5__2_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_18, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_19 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_19, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00bc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// NetworkServer.AddPlayerForConnection(conn, player);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_20 = __this->get_conn_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_U3CplayerU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = NetworkServer_AddPlayerForConnection_mC2F0A5B518D848C12E42D427DAA8FD0BFC4E9C56(L_20, L_21, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddPlayerDelayedU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF56C8C54F320D747437BFCBD93404876DD7B076A (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayerDelayedU3Ed__11_System_Collections_IEnumerator_Reset_m05DAF011219B4D14F9221144EAE452A7D766CBA5 (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAddPlayerDelayedU3Ed__11_System_Collections_IEnumerator_Reset_m05DAF011219B4D14F9221144EAE452A7D766CBA5_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<AddPlayerDelayed>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddPlayerDelayedU3Ed__11_System_Collections_IEnumerator_get_Current_m021B9BF748603DA74C75E64CA83E0639E80A2AB2 (U3CAddPlayerDelayedU3Ed__11_tEC19CBFB2D8258E3F22CF63C67AF48391453F097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdditiveU3Ed__7__ctor_m7F0A05EFEE8D8C2C7620419B664986C5E1B6E130 (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdditiveU3Ed__7_System_IDisposable_Dispose_mA67F8C6B5AECD6670CDE7A0CC61E2703C6932FBB (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAdditiveU3Ed__7_MoveNext_m107BF5A424DB5B0593FDF064B9C72DFA58AA14B4 (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00c8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isInTransition = true;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_3 = V_1;
		L_3->set_isInTransition_31((bool)1);
		// yield return fadeInOut.FadeIn();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_4 = V_1;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_5 = L_4->get_fadeInOut_29();
		RuntimeObject* L_6;
		L_6 = FadeInOut_FadeIn_m92458A6B5554928B2A1FAB45DB1C0F0B0E25185C(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (mode == NetworkManagerMode.ClientOnly)
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_7 = V_1;
		int32_t L_8;
		L_8 = NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_009b;
		}
	}
	{
		// loadingSceneAsync = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
		String_t* L_9 = __this->get_sceneName_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_10;
		L_10 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748(L_9, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var))->set_loadingSceneAsync_26(L_10);
		goto IL_0088;
	}

IL_0071:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0081:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0088:
	{
		// while (loadingSceneAsync != null && !loadingSceneAsync.isDone)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_11 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var))->get_loadingSceneAsync_26();
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_12 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var))->get_loadingSceneAsync_26();
		bool L_13;
		L_13 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0071;
		}
	}

IL_009b:
	{
		// NetworkClient.isLoadingScene = false;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		((NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var))->set_isLoadingScene_16((bool)0);
		// isInTransition = false;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_14 = V_1;
		L_14->set_isInTransition_31((bool)0);
		// OnClientSceneChanged();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_15 = V_1;
		VirtActionInvoker0::Invoke(28 /* System.Void Mirror.NetworkManager::OnClientSceneChanged() */, L_15);
		// yield return fadeInOut.FadeOut();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_16 = V_1;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_17 = L_16->get_fadeInOut_29();
		RuntimeObject* L_18;
		L_18 = FadeInOut_FadeOut_m3318C2ED8A8914E78EF55D2130DEDF8369E7312E(L_17, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00c8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAdditiveU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2700AF4085F84378264F59887378007E2D7C106D (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdditiveU3Ed__7_System_Collections_IEnumerator_Reset_m846470A10B3217A016C68A409DC2DE1FC037AE66 (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAdditiveU3Ed__7_System_Collections_IEnumerator_Reset_m846470A10B3217A016C68A409DC2DE1FC037AE66_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<LoadAdditive>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAdditiveU3Ed__7_System_Collections_IEnumerator_get_Current_mF4787AA7E7AB14D05023378D4F714D55F440B571 (U3CLoadAdditiveU3Ed__7_tB236C64986340F414B35668BC08C1E40956B12C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__5__ctor_m0681FF66E9A6B21105B9C5FEB618356E11BBB121 (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__5_System_IDisposable_Dispose_m94BADBEE708D7A2EFCEADEF65B950C6C166A5310 (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CServerLoadSubScenesU3Ed__5_MoveNext_m34A8A1AB67EEB877F3AD29C019633ED2EC95EA05 (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * V_1 = NULL;
	String_t* V_2 = NULL;
	LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (string additiveScene in additiveScenes)
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_4 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4->get_additiveScenes_28();
		__this->set_U3CU3E7__wrap1_3(L_5);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_0084;
	}

IL_0033:
	{
		// foreach (string additiveScene in additiveScenes)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_7 = __this->get_U3CU3E7__wrap2_4();
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return SceneManager.LoadSceneAsync(additiveScene, new LoadSceneParameters
		// {
		//     loadSceneMode = LoadSceneMode.Additive,
		//     localPhysicsMode = LocalPhysicsMode.Physics3D // change this to .Physics2D for a 2D game
		// });
		String_t* L_10 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 ));
		LoadSceneParameters_set_loadSceneMode_m8AAA5796E9D642FC5C2C95831F22E272A28DD152((LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 *)(&V_3), 1, /*hidden argument*/NULL);
		LoadSceneParameters_set_localPhysicsMode_m2631EA535FA759D9FB0D7FEC0D399614800C589D((LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 *)(&V_3), 2, /*hidden argument*/NULL);
		LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2  L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_12;
		L_12 = SceneManager_LoadSceneAsync_m77AB3010DA4EE548FE973D65A2D983F0CC86254E(L_10, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_13 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0084:
	{
		// foreach (string additiveScene in additiveScenes)
		int32_t L_14 = __this->get_U3CU3E7__wrap2_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = __this->get_U3CU3E7__wrap1_3();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// subscenesLoaded = true;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_16 = V_1;
		L_16->set_subscenesLoaded_30((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerLoadSubScenesU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6F4B61CD96D2D0336C13617CFA7CB9B0A6B5EDDC (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m29EFBF354FBD69416452E5020D655EAF06ABE3AB (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CServerLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m29EFBF354FBD69416452E5020D655EAF06ABE3AB_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<ServerLoadSubScenes>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerLoadSubScenesU3Ed__5_System_Collections_IEnumerator_get_Current_m30B23A50E96E86FB00084963B39F3A1A0F45BA9C (U3CServerLoadSubScenesU3Ed__5_t4F7CE8E35095F14EB580E76EDF703A38D0356A62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadAdditiveU3Ed__8__ctor_mD1FB244D18FD56665EDDADB4968157676135C1EE (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadAdditiveU3Ed__8_System_IDisposable_Dispose_mE284DE8CF07782D1FC1B4EFA17DE4CAB80A30D59 (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUnloadAdditiveU3Ed__8_MoveNext_m648B00D6B597B80F948D8182DD4D2B60B38925B7 (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_0093;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isInTransition = true;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_3 = V_1;
		L_3->set_isInTransition_31((bool)1);
		// yield return fadeInOut.FadeIn();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_4 = V_1;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_5 = L_4->get_fadeInOut_29();
		RuntimeObject* L_6;
		L_6 = FadeInOut_FadeIn_m92458A6B5554928B2A1FAB45DB1C0F0B0E25185C(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (mode == NetworkManagerMode.ClientOnly)
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_7 = V_1;
		int32_t L_8;
		L_8 = NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_009a;
		}
	}
	{
		// yield return SceneManager.UnloadSceneAsync(sceneName);
		String_t* L_9 = __this->get_sceneName_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_10;
		L_10 = SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0078:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return Resources.UnloadUnusedAssets();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_11;
		L_11 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0093:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009a:
	{
		// NetworkClient.isLoadingScene = false;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		((NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var))->set_isLoadingScene_16((bool)0);
		// isInTransition = false;
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_12 = V_1;
		L_12->set_isInTransition_31((bool)0);
		// OnClientSceneChanged();
		AdditiveLevelsNetworkManager_t9AF17C7F489B3F8E91807AA8056582B22227BF5B * L_13 = V_1;
		VirtActionInvoker0::Invoke(28 /* System.Void Mirror.NetworkManager::OnClientSceneChanged() */, L_13);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnloadAdditiveU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD71F777F12363AA0274D50580909E18C967FCA7E (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadAdditiveU3Ed__8_System_Collections_IEnumerator_Reset_mEA2A4C1F00BA5F57FD686271AC6E34753E0FD641 (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnloadAdditiveU3Ed__8_System_Collections_IEnumerator_Reset_mEA2A4C1F00BA5F57FD686271AC6E34753E0FD641_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.AdditiveLevelsNetworkManager/<UnloadAdditive>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnloadAdditiveU3Ed__8_System_Collections_IEnumerator_get_Current_m033500B8B30205E0E22615FB01DC42F3DEA9A60F (U3CUnloadAdditiveU3Ed__8_t12B07A4292045CDE5CE8B750279F28932DB52653 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSubScenesU3Ed__5__ctor_mE3D2C242B3C61922BA3F40CD93C1159C02201C96 (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSubScenesU3Ed__5_System_IDisposable_Dispose_mF169926ACE4B2C5F1BD5373A89B43FE0DEAFBF6E (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSubScenesU3Ed__5_MoveNext_m1ABC77BF0D87FA5BC99BB530085ADBFE58C28CEC (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F9670AB400BDA0B8502E26772DF292597A50639);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Loading Scenes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2F9670AB400BDA0B8502E26772DF292597A50639, /*hidden argument*/NULL);
		// foreach (string sceneName in subScenes)
		AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * L_4 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4->get_subScenes_29();
		__this->set_U3CU3E7__wrap1_3(L_5);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_0076;
	}

IL_003d:
	{
		// foreach (string sceneName in subScenes)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_7 = __this->get_U3CU3E7__wrap2_4();
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
		String_t* L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_11;
		L_11 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748(L_10, 1, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_0076:
	{
		// foreach (string sceneName in subScenes)
		int32_t L_13 = __this->get_U3CU3E7__wrap2_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = __this->get_U3CU3E7__wrap1_3();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSubScenesU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m61FF2BFCB5FFBAE91BCAA552E7F32E80C26E355A (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m4C94A6DEA691FA16E8FEA8490D218A662886C8B2 (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSubScenesU3Ed__5_System_Collections_IEnumerator_Reset_m4C94A6DEA691FA16E8FEA8490D218A662886C8B2_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<LoadSubScenes>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSubScenesU3Ed__5_System_Collections_IEnumerator_get_Current_m705B2B838B84D94155FA40AA4803F726E6E213F6 (U3CLoadSubScenesU3Ed__5_t54348FFDA4DF3826ED124B58BBD90F051734E8B7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesU3Ed__6__ctor_mA5022964507E422DA6127B1BB249128BA29513FD (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesU3Ed__6_System_IDisposable_Dispose_m0DE5BEB1D7FFC78011A1152093B989CA94CB5213 (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUnloadScenesU3Ed__6_MoveNext_mEAC4515E5ECCBB81E37F10EC5DCBDF084D062A1B (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF0D009D32A58FBC249306BDE39B2CDD7B71D925);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * V_1 = NULL;
	String_t* V_2 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_00cb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Unloading Subscenes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEF0D009D32A58FBC249306BDE39B2CDD7B71D925, /*hidden argument*/NULL);
		// foreach (string sceneName in subScenes)
		AdditiveNetworkManager_t5956E5EF38D49DB6398815DCFFB62530AF370843 * L_3 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3->get_subScenes_29();
		__this->set_U3CU3E7__wrap1_3(L_4);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_00a0;
	}

IL_0048:
	{
		// foreach (string sceneName in subScenes)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_6 = __this->get_U3CU3E7__wrap2_4();
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// if (SceneManager.GetSceneByName(sceneName).IsValid() || SceneManager.GetSceneByPath(sceneName).IsValid())
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_10;
		L_10 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11;
		L_11 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_13;
		L_13 = SceneManager_GetSceneByPath_mC4BDDF04CBFE46FD75CA9A5D5F6D88BDD7EE89F8(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14;
		L_14 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0092;
		}
	}

IL_0076:
	{
		// yield return SceneManager.UnloadSceneAsync(sceneName);
		String_t* L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_16;
		L_16 = SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF(L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0092:
	{
		int32_t L_17 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_00a0:
	{
		// foreach (string sceneName in subScenes)
		int32_t L_18 = __this->get_U3CU3E7__wrap2_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_U3CU3E7__wrap1_3();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// yield return Resources.UnloadUnusedAssets();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_20;
		L_20 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00cb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnloadScenesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF82BE08A90C65D2F8FF21FFFC7873379C5DA66EA (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnloadScenesU3Ed__6_System_Collections_IEnumerator_Reset_m4E11E463AE806D344D6E6C1F62C2982F87717041 (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnloadScenesU3Ed__6_System_Collections_IEnumerator_Reset_m4E11E463AE806D344D6E6C1F62C2982F87717041_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveScenes.AdditiveNetworkManager/<UnloadScenes>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnloadScenesU3Ed__6_System_Collections_IEnumerator_get_Current_mA14D4271429ACD5E8DFAB44D7A7119A0BC70E0D7 (U3CUnloadScenesU3Ed__6_t442B52F0282DB7DD4A01ED89B63A905E46F95DD4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleMatch.CanvasController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m94B44225D76EA8DA7ADBF2B8CF2381729145481B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * L_0 = (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 *)il2cpp_codegen_object_new(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBA771589C27077954CFFD5366F59BD4007B47252(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleMatch.CanvasController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA771589C27077954CFFD5366F59BD4007B47252 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.Examples.MultipleMatch.PlayerInfo Mirror.Examples.MultipleMatch.CanvasController/<>c::<OnServerDisconnect>b__35_0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  U3CU3Ec_U3COnServerDisconnectU3Eb__35_0_m60041A98C04EA29C3FCC90ECD37A5D9273DF4094 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___playerConn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerInfo[] infos = connections.Select(playerConn => playerInfos[playerConn]).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_0 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1 = ___playerConn0;
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_2;
		L_2 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		return L_2;
	}
}
// Mirror.Examples.MultipleMatch.PlayerInfo Mirror.Examples.MultipleMatch.CanvasController/<>c::<OnServerPlayerReady>b__42_0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  U3CU3Ec_U3COnServerPlayerReadyU3Eb__42_0_mFD5CE00D269CFC0D71D41010221FC3196005EE80 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___playerConn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerInfo[] infos = connections.Select(playerConn => playerInfos[playerConn]).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_0 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1 = ___playerConn0;
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_2;
		L_2 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		return L_2;
	}
}
// Mirror.Examples.MultipleMatch.PlayerInfo Mirror.Examples.MultipleMatch.CanvasController/<>c::<OnServerLeaveMatch>b__43_0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  U3CU3Ec_U3COnServerLeaveMatchU3Eb__43_0_m1954A797EC8A83ED621CBBC3BCD6F479EC3728C1 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___playerConn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerInfo[] infos = connections.Select(playerConn => playerInfos[playerConn]).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_0 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1 = ___playerConn0;
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_2;
		L_2 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		return L_2;
	}
}
// Mirror.Examples.MultipleMatch.PlayerInfo Mirror.Examples.MultipleMatch.CanvasController/<>c::<OnServerCreateMatch>b__44_0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  U3CU3Ec_U3COnServerCreateMatchU3Eb__44_0_m79F84BE4EEE720CF25A2F3D8888E3FB2C316B63F (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___playerConn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerInfo[] infos = matchConnections[newMatchId].Select(playerConn => playerInfos[playerConn]).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_0 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1 = ___playerConn0;
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_2;
		L_2 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		return L_2;
	}
}
// Mirror.Examples.MultipleMatch.PlayerInfo Mirror.Examples.MultipleMatch.CanvasController/<>c::<OnServerJoinMatch>b__47_0(Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  U3CU3Ec_U3COnServerJoinMatchU3Eb__47_0_m40C1966AA60A7BC30A630620C301930C0A9515B2 (U3CU3Ec_t4BB7A134B33ACD96ED76905C4AE42682351343B2 * __this, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___playerConn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerInfo[] infos = matchConnections[matchId].Select(playerConn => playerInfos[playerConn]).ToArray();
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_0 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_1 = ___playerConn0;
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_2;
		L_2 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
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
// System.Void Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__8__ctor_mC642CE8CC5993C8B3922D100FCDDAF3884C8C08F (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__8_System_IDisposable_Dispose_m0E1C0BAAFC4626ECE3BD80D1FE3B29E6A75CF7ED (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDisconnectU3Ed__8_MoveNext_m490636BB9D6BDAB41FABE13FE60350489668CBC7 (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mDB349AC24641A62F1F480EA18BEAA66C005D6480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->get_waitTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ServerReject(conn);
		ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * L_5 = V_1;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_6 = __this->get_conn_4();
		NetworkAuthenticator_ServerReject_mE1AAE10EB8217BE0E7F81F529A1C12804D37C96E(L_5, L_6, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
		// connectionsPendingDisconnect.Remove(conn);
		ChatAuthenticator_tB4134D71901D85D62632F18A88F17FA9D589D0A1 * L_7 = V_1;
		HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * L_8 = L_7->get_connectionsPendingDisconnect_6();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_9 = __this->get_conn_4();
		bool L_10;
		L_10 = HashSet_1_Remove_mDB349AC24641A62F1F480EA18BEAA66C005D6480(L_8, L_9, /*hidden argument*/HashSet_1_Remove_mDB349AC24641A62F1F480EA18BEAA66C005D6480_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8CE3A07B44A019153CF43709E9491C30E90D3DF5 (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__8_System_Collections_IEnumerator_Reset_m48206916B824245655182F08D08653C1F94D9DA0 (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedDisconnectU3Ed__8_System_Collections_IEnumerator_Reset_m48206916B824245655182F08D08653C1F94D9DA0_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__8_System_Collections_IEnumerator_get_Current_m4643D1A9FC6248F663C369F03D35C05793B3F70F (U3CDelayedDisconnectU3Ed__8_t8D8A4E32A707ABF2A74C4F1A9DB502CC3D1CF590 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_pinvoke(const AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E& unmarshaled, AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_pinvoke& marshaled)
{
	marshaled.___authUsername_0 = il2cpp_codegen_marshal_string(unmarshaled.get_authUsername_0());
}
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_pinvoke_back(const AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_pinvoke& marshaled, AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E& unmarshaled)
{
	unmarshaled.set_authUsername_0(il2cpp_codegen_marshal_string_result(marshaled.___authUsername_0));
}
// Conversion method for clean up from marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_pinvoke_cleanup(AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___authUsername_0);
	marshaled.___authUsername_0 = NULL;
}
// Conversion methods for marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_com(const AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E& unmarshaled, AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_com& marshaled)
{
	marshaled.___authUsername_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_authUsername_0());
}
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_com_back(const AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_com& marshaled, AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E& unmarshaled)
{
	unmarshaled.set_authUsername_0(il2cpp_codegen_marshal_bstring_result(marshaled.___authUsername_0));
}
// Conversion method for clean up from marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshal_com_cleanup(AuthRequestMessage_t28F15A8DE50AE6DF147A07F258122ABD2738444E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___authUsername_0);
	marshaled.___authUsername_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_pinvoke(const AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29& unmarshaled, AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_pinvoke& marshaled)
{
	marshaled.___code_0 = unmarshaled.get_code_0();
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_pinvoke_back(const AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_pinvoke& marshaled, AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29& unmarshaled)
{
	uint8_t unmarshaled_code_temp_0 = 0x0;
	unmarshaled_code_temp_0 = marshaled.___code_0;
	unmarshaled.set_code_0(unmarshaled_code_temp_0);
	unmarshaled.set_message_1(il2cpp_codegen_marshal_string_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_pinvoke_cleanup(AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_com(const AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29& unmarshaled, AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_com& marshaled)
{
	marshaled.___code_0 = unmarshaled.get_code_0();
	marshaled.___message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_com_back(const AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_com& marshaled, AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29& unmarshaled)
{
	uint8_t unmarshaled_code_temp_0 = 0x0;
	unmarshaled_code_temp_0 = marshaled.___code_0;
	unmarshaled.set_code_0(unmarshaled_code_temp_0);
	unmarshaled.set_message_1(il2cpp_codegen_marshal_bstring_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshal_com_cleanup(AuthResponseMessage_tB620B095ACEB08EF76C926BE68028113524E9F29_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendAndScrollU3Ed__12__ctor_m6FB0C0FD1EFD81635058D6AA21B989BF76FEA287 (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendAndScrollU3Ed__12_System_IDisposable_Dispose_m028F414A1F3D038A692634DB15B233C7570FF4DF (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAppendAndScrollU3Ed__12_MoveNext_m557B3FB42CB019CE1220DB65D0650E396903424A (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0071;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// chatHistory.text += message + "\n";
		ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * L_3 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_chatHistory_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4;
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7 = __this->get_message_3();
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_6, L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0071:
	{
		__this->set_U3CU3E1__state_0((-1));
		// scrollbar.value = 0;
		ChatUI_t905BC14F137A9F8BA41DCD9750B15AA158ADA22B * L_9 = V_1;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_10 = L_9->get_scrollbar_15();
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_10, (0.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAppendAndScrollU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m092DDF36E557EAA9E077315015D8250D318A0C13 (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAppendAndScrollU3Ed__12_System_Collections_IEnumerator_Reset_m75B463A9ADA364370C41DF63FCAD5B2AAC25D228 (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAppendAndScrollU3Ed__12_System_Collections_IEnumerator_Reset_m75B463A9ADA364370C41DF63FCAD5B2AAC25D228_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAppendAndScrollU3Ed__12_System_Collections_IEnumerator_get_Current_m0609FCFA9BF83459F8A5BFC53037C12908F15024 (U3CAppendAndScrollU3Ed__12_tCCFBABDCCC9629BBFD715CB9CA3B6D2B13C57150 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5__ctor_m242F46500B3A16B802952F346AE3D9D244C995BA (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5_System_IDisposable_Dispose_m19E2F183A362F9C115AD2F5BDE36C0CF346AFE14 (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__5_MoveNext_m8586A69736EF59AD395998CEE54804BDF6729A9D (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float alpha = fadeImage.color.a;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_4 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_fadeImage_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.get_a_3();
		__this->set_U3CalphaU3E5__2_3(L_7);
		goto IL_0086;
	}

IL_0036:
	{
		// yield return waitForSeconds;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_8 = V_1;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = L_8->get_waitForSeconds_7();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// alpha += 0.01f;
		float L_10 = __this->get_U3CalphaU3E5__2_3();
		__this->set_U3CalphaU3E5__2_3(((float)il2cpp_codegen_add((float)L_10, (float)(0.00999999978f))));
		// fadeColor.a = alpha;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_11 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_12 = L_11->get_address_of_fadeColor_6();
		float L_13 = __this->get_U3CalphaU3E5__2_3();
		L_12->set_a_3(L_13);
		// fadeImage.color = fadeColor;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_14 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_fadeImage_5();
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_16 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = L_16->get_fadeColor_6();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
	}

IL_0086:
	{
		// while (alpha < 1)
		float L_18 = __this->get_U3CalphaU3E5__2_3();
		if ((((float)L_18) < ((float)(1.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBCC6F106304F4254E8878D36DFAFEA4354505C3A (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mABDC6E80F20A25BFF78A00CB7FFFF2C9AA55163B (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mABDC6E80F20A25BFF78A00CB7FFFF2C9AA55163B_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInU3Ed__5_System_Collections_IEnumerator_get_Current_mA051DE1E624B9349FF8CE890FD212B2CDBF1ECF9 (U3CFadeInU3Ed__5_t1F8F20721B2310BD7208566353A84AB312013700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6__ctor_mD55094FCFD4AFA1EB695C33D09D5422023E11886 (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6_System_IDisposable_Dispose_mFF2347AE58887A445BAE3896B3815FB842686961 (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__6_MoveNext_mB0703F0AF1DCAA3F7BFF94C549A5A268176FE700 (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float alpha = fadeImage.color.a;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_4 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_fadeImage_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.get_a_3();
		__this->set_U3CalphaU3E5__2_3(L_7);
		goto IL_0086;
	}

IL_0036:
	{
		// yield return waitForSeconds;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_8 = V_1;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = L_8->get_waitForSeconds_7();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// alpha -= 0.01f;
		float L_10 = __this->get_U3CalphaU3E5__2_3();
		__this->set_U3CalphaU3E5__2_3(((float)il2cpp_codegen_subtract((float)L_10, (float)(0.00999999978f))));
		// fadeColor.a = alpha;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_11 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_12 = L_11->get_address_of_fadeColor_6();
		float L_13 = __this->get_U3CalphaU3E5__2_3();
		L_12->set_a_3(L_13);
		// fadeImage.color = fadeColor;
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_14 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = L_14->get_fadeImage_5();
		FadeInOut_t5EF2810D19047305151794A3CC27E173A7F51C81 * L_16 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = L_16->get_fadeColor_6();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
	}

IL_0086:
	{
		// while (alpha > 0)
		float L_18 = __this->get_U3CalphaU3E5__2_3();
		if ((((float)L_18) > ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE1996BAFB8707DDF4597F979728751DFD75BDEA (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m0EA808FA0BF1FCDAE68D8C504A6C483F50A7C20B (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m0EA808FA0BF1FCDAE68D8C504A6C483F50A7C20B_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutU3Ed__6_System_Collections_IEnumerator_get_Current_mF367D743A4A9B052EDD1D11BDBDF8140796271BD (U3CFadeOutU3Ed__6_tF85667B4782059521CBD27FD77DA67F749F509D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayersToMatchControllerU3Ed__17__ctor_m945E3B9384DAF087DD204C04A3EA903372B2C62D (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayersToMatchControllerU3Ed__17_System_IDisposable_Dispose_m7B23B20B8FB935F79C2CAED570CCB444C7A61D07 (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAddPlayersToMatchControllerU3Ed__17_MoveNext_m0AECAD37E1B12DECE6D82B8B93F2B4F3D2B87BA7 (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * V_1 = NULL;
	MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// matchPlayerData.Add(player1, new MatchPlayerData { playerIndex = CanvasController.playerInfos[player1.connectionToClient].playerIndex });
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_4 = V_1;
		SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 * L_5 = L_4->get_matchPlayerData_13();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_6 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_7 = L_6->get_player1_24();
		il2cpp_codegen_initobj((&V_2), sizeof(MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392 ));
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_8 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_9 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_10 = L_9->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11;
		L_11 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_10, /*hidden argument*/NULL);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_12;
		L_12 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_8, L_11, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		int32_t L_13 = L_12.get_playerIndex_0();
		(&V_2)->set_playerIndex_0(L_13);
		MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392  L_14 = V_2;
		SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0(L_5, L_7, L_14, /*hidden argument*/SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0_RuntimeMethod_var);
		// matchPlayerData.Add(player2, new MatchPlayerData { playerIndex = CanvasController.playerInfos[player2.connectionToClient].playerIndex });
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_15 = V_1;
		SyncDictionary_2_t8A6D4F99FF2865D416595C6EEECC24FB3912BA20 * L_16 = L_15->get_matchPlayerData_13();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_17 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_18 = L_17->get_player2_25();
		il2cpp_codegen_initobj((&V_2), sizeof(MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392 ));
		Dictionary_2_tAAEC28EBB63F2A0F01461299811AD67701E18869 * L_19 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_playerInfos_8();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_20 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_21 = L_20->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_22;
		L_22 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_21, /*hidden argument*/NULL);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_23;
		L_23 = Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2(L_19, L_22, /*hidden argument*/Dictionary_2_get_Item_m6013FF28496F5078A4BB977D155E954847DF40A2_RuntimeMethod_var);
		int32_t L_24 = L_23.get_playerIndex_0();
		(&V_2)->set_playerIndex_0(L_24);
		MatchPlayerData_t1318630045729D1E5327B91BADA13406910E1392  L_25 = V_2;
		SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0(L_16, L_18, L_25, /*hidden argument*/SyncIDictionary_2_Add_mD86C4B69ECDE2C5C3577A6B030862205153A2EE0_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddPlayersToMatchControllerU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A73626C874D52E14AE9B682252BD14210D666B7 (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPlayersToMatchControllerU3Ed__17_System_Collections_IEnumerator_Reset_mAB207301748E419A4DE5ABA57059C788101E7EE4 (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAddPlayersToMatchControllerU3Ed__17_System_Collections_IEnumerator_Reset_mAB207301748E419A4DE5ABA57059C788101E7EE4_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddPlayersToMatchControllerU3Ed__17_System_Collections_IEnumerator_get_Current_m722ADD94A73C5F4641A8C3CCB25CD04A75A1FD70 (U3CAddPlayersToMatchControllerU3Ed__17_t281FEFAD97FD45BCB88DCA3E8BFDC78B6B149692 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerEndMatchU3Ed__32__ctor_m799014D6B52B92C7DF45C938161B0BB9A70CBD99 (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerEndMatchU3Ed__32_System_IDisposable_Dispose_mF90A30DAB0E4808BB48F0E079977D1F7884AE1B2 (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CServerEndMatchU3Ed__32_MoveNext_m9A87AF6D03C48CB58F6805F485CD950A1F85CDA7 (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m417BE693B5917637E3BB1626C702C5321D0F4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchController_OnPlayerDisconnected_m378A5E4D1F308872C3BEF524843FA93555C9DB49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0137;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvasController.OnPlayerDisconnected -= OnPlayerDisconnected;
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_3 = V_1;
		CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * L_4 = L_3->get_canvasController_23();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_5 = V_1;
		Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF * L_6 = (Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF *)il2cpp_codegen_object_new(Action_1_tA20EA1BF0885E539B252AC956E4F37632C1A43AF_il2cpp_TypeInfo_var);
		Action_1__ctor_m417BE693B5917637E3BB1626C702C5321D0F4B3B(L_6, L_5, (intptr_t)((intptr_t)MatchController_OnPlayerDisconnected_m378A5E4D1F308872C3BEF524843FA93555C9DB49_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m417BE693B5917637E3BB1626C702C5321D0F4B3B_RuntimeMethod_var);
		CanvasController_remove_OnPlayerDisconnected_mCA978811629BA15B44A0C2094FD14162744CCB27(L_4, L_6, /*hidden argument*/NULL);
		// RpcExitGame();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_7 = V_1;
		MatchController_RpcExitGame_mCE74DF41EAD5480E49A62B7CD492E680064885A2(L_7, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!disconnected)
		bool L_8 = __this->get_disconnected_3();
		if (L_8)
		{
			goto IL_00b3;
		}
	}
	{
		// NetworkServer.RemovePlayerForConnection(player1.connectionToClient, true);
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_9 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_10 = L_9->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11;
		L_11 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9(L_11, (bool)1, /*hidden argument*/NULL);
		// CanvasController.waitingConnections.Add(player1.connectionToClient);
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * L_12 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_waitingConnections_9();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_13 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_14 = L_13->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_15;
		L_15 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_14, /*hidden argument*/NULL);
		List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2(L_12, L_15, /*hidden argument*/List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var);
		// NetworkServer.RemovePlayerForConnection(player2.connectionToClient, true);
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_16 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_17 = L_16->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_18;
		L_18 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_17, /*hidden argument*/NULL);
		NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9(L_18, (bool)1, /*hidden argument*/NULL);
		// CanvasController.waitingConnections.Add(player2.connectionToClient);
		List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * L_19 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_waitingConnections_9();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_20 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_21 = L_20->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_22;
		L_22 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_21, /*hidden argument*/NULL);
		List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2(L_19, L_22, /*hidden argument*/List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var);
		// }
		goto IL_0127;
	}

IL_00b3:
	{
		// else if (conn == player1.connectionToClient)
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_23 = __this->get_conn_4();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_24 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_25 = L_24->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_26;
		L_26 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_25, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)L_23) == ((RuntimeObject*)(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)L_26))))
		{
			goto IL_00ee;
		}
	}
	{
		// NetworkServer.RemovePlayerForConnection(player2.connectionToClient, true);
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_27 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_28 = L_27->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_29;
		L_29 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9(L_29, (bool)1, /*hidden argument*/NULL);
		// CanvasController.waitingConnections.Add(player2.connectionToClient);
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * L_30 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_waitingConnections_9();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_31 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_32 = L_31->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_33;
		L_33 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_32, /*hidden argument*/NULL);
		List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2(L_30, L_33, /*hidden argument*/List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var);
		// }
		goto IL_0127;
	}

IL_00ee:
	{
		// else if (conn == player2.connectionToClient)
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_34 = __this->get_conn_4();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_35 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_36 = L_35->get_player2_25();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_37;
		L_37 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_36, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)L_34) == ((RuntimeObject*)(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)L_37))))
		{
			goto IL_0127;
		}
	}
	{
		// NetworkServer.RemovePlayerForConnection(player1.connectionToClient, true);
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_38 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_39 = L_38->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_40;
		L_40 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9(L_40, (bool)1, /*hidden argument*/NULL);
		// CanvasController.waitingConnections.Add(player1.connectionToClient);
		IL2CPP_RUNTIME_CLASS_INIT(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var);
		List_1_tA56A36C4B05665C93503C3C4BDEDCBB733E54536 * L_41 = ((CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_StaticFields*)il2cpp_codegen_static_fields_for(CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D_il2cpp_TypeInfo_var))->get_waitingConnections_9();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_42 = V_1;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_43 = L_42->get_player1_24();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_44;
		L_44 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_43, /*hidden argument*/NULL);
		List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2(L_41, L_44, /*hidden argument*/List_1_Add_m00E7345CD97CFEFC8B119FE87689603122BD53C2_RuntimeMethod_var);
	}

IL_0127:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0137:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvasController.SendMatchList();
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_45 = V_1;
		CanvasController_t0BD90DA0C3E181946469A57707D3A05635C5222D * L_46 = L_45->get_canvasController_23();
		CanvasController_SendMatchList_m3BFF5C6436DD1291EF1FB8D0F603152AB6BD23C1(L_46, (NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)NULL, /*hidden argument*/NULL);
		// NetworkServer.Destroy(gameObject);
		MatchController_t65AA59CA36BA1647F8F5EE68836C264505BCAE69 * L_47 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_Destroy_m113ADC5542A4627A397C75DC3ECC9BC87F404FFB(L_48, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerEndMatchU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA574895BE4181DCA0F7807B398FF82FE60BEAB23 (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerEndMatchU3Ed__32_System_Collections_IEnumerator_Reset_mC9C6B3A40C7CADB3054268372AF8A7FBC067B533 (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CServerEndMatchU3Ed__32_System_Collections_IEnumerator_Reset_mC9C6B3A40C7CADB3054268372AF8A7FBC067B533_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerEndMatchU3Ed__32_System_Collections_IEnumerator_get_Current_mB039B4E154D97AF4B7550D1E4C0A6CA0BE090A0B (U3CServerEndMatchU3Ed__32_tE3D1FD8F9A72B37F9A121C1A91924FD75A0751A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientUnloadSubScenesU3Ed__13__ctor_mB5BB4AE1BA67FE0839EFBEA62452ED74DCF2DE5A (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientUnloadSubScenesU3Ed__13_System_IDisposable_Dispose_m35AE4364B6E14947791AF520F30072C5FCEA05A3 (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClientUnloadSubScenesU3Ed__13_MoveNext_m5DF93A71E467305374D682733C5FADEABA93418D (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < SceneManager.sceneCount; index++)
		__this->set_U3CindexU3E5__2_2(0);
		goto IL_006d;
	}

IL_0020:
	{
		// if (SceneManager.GetSceneAt(index) != SceneManager.GetActiveScene())
		int32_t L_3 = __this->get_U3CindexU3E5__2_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(L_3, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5;
		L_5 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		bool L_6;
		L_6 = Scene_op_Inequality_m5EE1812777959596639D8D480998B8DE0DE83F6D(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// yield return SceneManager.UnloadSceneAsync(SceneManager.GetSceneAt(index));
		int32_t L_7 = __this->get_U3CindexU3E5__2_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_8;
		L_8 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(L_7, /*hidden argument*/NULL);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_9;
		L_9 = SceneManager_UnloadSceneAsync_m94D080FDA6440916AA8F8F4FA13B1002C96BB589(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005d:
	{
		// for (int index = 0; index < SceneManager.sceneCount; index++)
		int32_t L_10 = __this->get_U3CindexU3E5__2_2();
		V_1 = L_10;
		int32_t L_11 = V_1;
		__this->set_U3CindexU3E5__2_2(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006d:
	{
		// for (int index = 0; index < SceneManager.sceneCount; index++)
		int32_t L_12 = __this->get_U3CindexU3E5__2_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E(/*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClientUnloadSubScenesU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m09F2638ECE3DD51574AF5A294E6F83CDF4BA84E8 (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientUnloadSubScenesU3Ed__13_System_Collections_IEnumerator_Reset_m2ADD1D2DAD49537BE340D144A7CB09E20453D9F6 (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClientUnloadSubScenesU3Ed__13_System_Collections_IEnumerator_Reset_m2ADD1D2DAD49537BE340D144A7CB09E20453D9F6_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ClientUnloadSubScenes>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClientUnloadSubScenesU3Ed__13_System_Collections_IEnumerator_get_Current_mAAA8BBD49F2FE61EB4F8A646D199EBBE4CA61F38 (U3CClientUnloadSubScenesU3Ed__13_t4839F27F0B1F346D5B60412D046EDD409FED4E94 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnServerAddPlayerDelayedU3Ed__7__ctor_m43F4B12E01718AA1892F6E591772FF3AFB49D6D5 (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnServerAddPlayerDelayedU3Ed__7_System_IDisposable_Dispose_m1BC35D76F3CF9CC6D8977B4D137F48BBEE06A542 (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnServerAddPlayerDelayedU3Ed__7_MoveNext_m8FA7D72DD571F81BA822C812F1380A6E3F67239A (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD_m7B6A4CBDF36DAC6F05A925A85F9503868235B98C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * V_1 = NULL;
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0088;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0042;
	}

IL_002b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		// while (!subscenesLoaded)
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_3 = V_1;
		bool L_4 = L_3->get_subscenesLoaded_31();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// conn.Send(new SceneMessage { sceneName = gameScene, sceneOperation = SceneOperation.LoadAdditive });
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_5 = __this->get_conn_3();
		il2cpp_codegen_initobj((&V_2), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_6 = V_1;
		String_t* L_7 = L_6->get_gameScene_30();
		(&V_2)->set_sceneName_0(L_7);
		(&V_2)->set_sceneOperation_1(1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_8 = V_2;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_5, L_8, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_9 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
		// base.OnServerAddPlayer(conn);
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_10 = V_1;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_11 = __this->get_conn_3();
		MultiSceneNetManager_U3CU3En__0_m065DB5F0C2078792D1764F318C17AB7957A64B80(L_10, L_11, /*hidden argument*/NULL);
		// PlayerScore playerScore = conn.identity.GetComponent<PlayerScore>();
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_12 = __this->get_conn_3();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_13;
		L_13 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_12, /*hidden argument*/NULL);
		PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * L_14;
		L_14 = Component_GetComponent_TisPlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD_m7B6A4CBDF36DAC6F05A925A85F9503868235B98C(L_13, /*hidden argument*/Component_GetComponent_TisPlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD_m7B6A4CBDF36DAC6F05A925A85F9503868235B98C_RuntimeMethod_var);
		// playerScore.playerNumber = clientIndex;
		PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * L_15 = L_14;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_16 = V_1;
		int32_t L_17 = L_16->get_clientIndex_33();
		PlayerScore_set_NetworkplayerNumber_mB1D8FC7DDFA50ACF3118B71B82FD17797269E9F8(L_15, L_17, /*hidden argument*/NULL);
		// playerScore.scoreIndex = clientIndex / subScenes.Count;
		PlayerScore_t726BA5B1460B26586C6C4486B33CC09C373974DD * L_18 = L_15;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_19 = V_1;
		int32_t L_20 = L_19->get_clientIndex_33();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_21 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_22 = L_21->get_subScenes_32();
		int32_t L_23;
		L_23 = List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline(L_22, /*hidden argument*/List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		PlayerScore_set_NetworkscoreIndex_m0EB06183F96E9F4D3A4ABAD15EA0171B3F1DFD6A(L_18, ((int32_t)((int32_t)L_20/(int32_t)L_23)), /*hidden argument*/NULL);
		// playerScore.matchIndex = clientIndex % subScenes.Count;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_24 = V_1;
		int32_t L_25 = L_24->get_clientIndex_33();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_26 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_27 = L_26->get_subScenes_32();
		int32_t L_28;
		L_28 = List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline(L_27, /*hidden argument*/List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		PlayerScore_set_NetworkmatchIndex_mE38D225BFC2E1E25D66C076E9CBC025D121DD3ED(L_18, ((int32_t)((int32_t)L_25%(int32_t)L_28)), /*hidden argument*/NULL);
		// if (subScenes.Count > 0)
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_29 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_30 = L_29->get_subScenes_32();
		int32_t L_31;
		L_31 = List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline(L_30, /*hidden argument*/List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		// SceneManager.MoveGameObjectToScene(conn.identity.gameObject, subScenes[clientIndex % subScenes.Count]);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_32 = __this->get_conn_3();
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_33;
		L_33 = NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline(L_32, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_35 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_36 = L_35->get_subScenes_32();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_37 = V_1;
		int32_t L_38 = L_37->get_clientIndex_33();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_39 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_40 = L_39->get_subScenes_32();
		int32_t L_41;
		L_41 = List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline(L_40, /*hidden argument*/List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_42;
		L_42 = List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_inline(L_36, ((int32_t)((int32_t)L_38%(int32_t)L_41)), /*hidden argument*/List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_34, L_42, /*hidden argument*/NULL);
	}

IL_0126:
	{
		// clientIndex++;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_43 = V_1;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_44 = V_1;
		int32_t L_45 = L_44->get_clientIndex_33();
		L_43->set_clientIndex_33(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)));
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnServerAddPlayerDelayedU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m976F35099E86FE2C402E29AD311E0E7C2FB48D04 (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnServerAddPlayerDelayedU3Ed__7_System_Collections_IEnumerator_Reset_mEFF9E7201756BC13720B0137F3DCE2752C7E96F9 (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnServerAddPlayerDelayedU3Ed__7_System_Collections_IEnumerator_Reset_mEFF9E7201756BC13720B0137F3DCE2752C7E96F9_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<OnServerAddPlayerDelayed>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnServerAddPlayerDelayedU3Ed__7_System_Collections_IEnumerator_get_Current_m54A2B16ABDD50E79A9AD9A410078097F2293C4F2 (U3COnServerAddPlayerDelayedU3Ed__7_t94379BD37CB9043168FB2E049E1AFEEA244EAA60 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__9__ctor_mCC6F4BBD6B43BB9BF423EFA1DDA0661C5458E9C4 (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__9_System_IDisposable_Dispose_m4EE2E2FCEB1AB91F2560730A39EF6BBEA84C20A7 (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CServerLoadSubScenesU3Ed__9_MoveNext_m94A1B1B46E400EA77F29432632460BBF06F0FC02 (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * V_1 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 1; index <= instances; index++)
		__this->set_U3CindexU3E5__2_3(1);
		goto IL_0091;
	}

IL_0027:
	{
		// yield return SceneManager.LoadSceneAsync(gameScene, new LoadSceneParameters { loadSceneMode = LoadSceneMode.Additive, localPhysicsMode = LocalPhysicsMode.Physics3D });
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_4 = V_1;
		String_t* L_5 = L_4->get_gameScene_30();
		il2cpp_codegen_initobj((&V_3), sizeof(LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 ));
		LoadSceneParameters_set_loadSceneMode_m8AAA5796E9D642FC5C2C95831F22E272A28DD152((LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 *)(&V_3), 1, /*hidden argument*/NULL);
		LoadSceneParameters_set_localPhysicsMode_m2631EA535FA759D9FB0D7FEC0D399614800C589D((LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2 *)(&V_3), 2, /*hidden argument*/NULL);
		LoadSceneParameters_t98D2B4FCF0184320590305D3F367834287C2CAA2  L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7;
		L_7 = SceneManager_LoadSceneAsync_m77AB3010DA4EE548FE973D65A2D983F0CC86254E(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Scene newScene = SceneManager.GetSceneAt(index);
		int32_t L_8 = __this->get_U3CindexU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_9;
		L_9 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// subScenes.Add(newScene);
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_10 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_11 = L_10->get_subScenes_32();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_12 = V_2;
		List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398(L_11, L_12, /*hidden argument*/List_1_Add_m98E7736A87EEE37D6247F090557968992AEA3398_RuntimeMethod_var);
		// Spawner.InitialSpawn(newScene);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_13 = V_2;
		Spawner_InitialSpawn_m428209101B410D3ED805AE81812BD9BCD2847CB8(L_13, /*hidden argument*/NULL);
		// for (int index = 1; index <= instances; index++)
		int32_t L_14 = __this->get_U3CindexU3E5__2_3();
		V_4 = L_14;
		int32_t L_15 = V_4;
		__this->set_U3CindexU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_0091:
	{
		// for (int index = 1; index <= instances; index++)
		int32_t L_16 = __this->get_U3CindexU3E5__2_3();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_17 = V_1;
		int32_t L_18 = L_17->get_instances_29();
		if ((((int32_t)L_16) <= ((int32_t)L_18)))
		{
			goto IL_0027;
		}
	}
	{
		// subscenesLoaded = true;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_19 = V_1;
		L_19->set_subscenesLoaded_31((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerLoadSubScenesU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53265DE08A20330AFD9014B59886F21B1855ACAE (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerLoadSubScenesU3Ed__9_System_Collections_IEnumerator_Reset_m2BC1B69C8E13D8EE942A9B25767AECB1082D5A28 (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CServerLoadSubScenesU3Ed__9_System_Collections_IEnumerator_Reset_m2BC1B69C8E13D8EE942A9B25767AECB1082D5A28_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerLoadSubScenes>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerLoadSubScenesU3Ed__9_System_Collections_IEnumerator_get_Current_m1C2F0310D57F002C87A4D045C59AC54D062F61DF (U3CServerLoadSubScenesU3Ed__9_t2F3EB3CDDC0882B01DDA18533AC23ABB16BDF5BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerUnloadSubScenesU3Ed__11__ctor_mD59D7DF1D499A7CD0A9D32F808EFA2C766644519 (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerUnloadSubScenesU3Ed__11_System_IDisposable_Dispose_mE97510FB921C53B5FC51D115C31171E676872551 (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CServerUnloadSubScenesU3Ed__11_MoveNext_m8479C1576344F5337BB2A03C891B795A125AAA6E (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_00a7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < subScenes.Count; index++)
		__this->set_U3CindexU3E5__2_3(0);
		goto IL_006e;
	}

IL_0032:
	{
		// yield return SceneManager.UnloadSceneAsync(subScenes[index]);
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_3 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_4 = L_3->get_subScenes_32();
		int32_t L_5 = __this->get_U3CindexU3E5__2_3();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7;
		L_7 = SceneManager_UnloadSceneAsync_m94D080FDA6440916AA8F8F4FA13B1002C96BB589(L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0057:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < subScenes.Count; index++)
		int32_t L_8 = __this->get_U3CindexU3E5__2_3();
		V_2 = L_8;
		int32_t L_9 = V_2;
		__this->set_U3CindexU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_006e:
	{
		// for (int index = 0; index < subScenes.Count; index++)
		int32_t L_10 = __this->get_U3CindexU3E5__2_3();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_11 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_12 = L_11->get_subScenes_32();
		int32_t L_13;
		L_13 = List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_inline(L_12, /*hidden argument*/List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_0032;
		}
	}
	{
		// subScenes.Clear();
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_14 = V_1;
		List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * L_15 = L_14->get_subScenes_32();
		List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9(L_15, /*hidden argument*/List_1_Clear_m5ADAB4D38ED68C6A8596C348E6DE6D346C68F2E9_RuntimeMethod_var);
		// subscenesLoaded = false;
		MultiSceneNetManager_t40A4EBF5C39A0089D34E0F18AD32E741EFE8A28F * L_16 = V_1;
		L_16->set_subscenesLoaded_31((bool)0);
		// yield return Resources.UnloadUnusedAssets();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_17;
		L_17 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a7:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerUnloadSubScenesU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41D9073BBD03893E439921D68B6DCF7E4ABA437C (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CServerUnloadSubScenesU3Ed__11_System_Collections_IEnumerator_Reset_mF53BA387E854794A285F6A70BAD7AD869E9F2309 (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CServerUnloadSubScenesU3Ed__11_System_Collections_IEnumerator_Reset_mF53BA387E854794A285F6A70BAD7AD869E9F2309_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.MultipleAdditiveScenes.MultiSceneNetManager/<ServerUnloadSubScenes>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CServerUnloadSubScenesU3Ed__11_System_Collections_IEnumerator_get_Current_m09EBD2BA3301F83ADE3EE353695E1E6F44DDA564 (U3CServerUnloadSubScenesU3Ed__11_t2357BABDD1355A702ED3E50851084DCBF5814C10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Mirror.Examples.Pong.NetworkManagerPong/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3C1A9542D9AF5DC4382D50DDE4774A718691CE16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * L_0 = (U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 *)il2cpp_codegen_object_new(U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m894009D897E06C26CC20B2D9F06D36EAB22D361D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.Pong.NetworkManagerPong/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m894009D897E06C26CC20B2D9F06D36EAB22D361D (U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mirror.Examples.Pong.NetworkManagerPong/<>c::<OnServerAddPlayer>b__3_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnServerAddPlayerU3Eb__3_0_m3202D700BF36BA65DBC9D93191430B4872950567 (U3CU3Ec_tD0E357D56018852B7D93CF304B3814E9908F5C75 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ball = Instantiate(spawnPrefabs.Find(prefab => prefab.name == "Ball"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___prefab0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralAF4FE737DB07A38DC7B9A34B4BA555906EC0EFA9, /*hidden argument*/NULL);
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
// System.Void Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPlayerToNewSceneU3Ed__8__ctor_mE53CBAF3EC4202C413539CD439F3E104C7C83B77 (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPlayerToNewSceneU3Ed__8_System_IDisposable_Dispose_mD35B3849ECC561991202619366DDAEBA82D83E57 (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendPlayerToNewSceneU3Ed__8_MoveNext_mC5F5E0748F4BF686C7D914F721DAA4FD3F8F582C (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisPlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF_mC3EC44FB962D23B595D6F9D68A82EDE510E36153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mA0F7A29637DAA05CE1346C384DD9167577DF7C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * V_1 = NULL;
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * V_2 = NULL;
	PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF * V_3 = NULL;
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009f;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (player.TryGetComponent<NetworkIdentity>(out NetworkIdentity identity))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_2();
		bool L_5;
		L_5 = GameObject_TryGetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mA0F7A29637DAA05CE1346C384DD9167577DF7C64(L_4, (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 **)(&V_2), /*hidden argument*/GameObject_TryGetComponent_TisNetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_mA0F7A29637DAA05CE1346C384DD9167577DF7C64_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0161;
		}
	}
	{
		// NetworkConnectionToClient conn = identity.connectionToClient;
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_6 = V_2;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_7;
		L_7 = NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline(L_6, /*hidden argument*/NULL);
		__this->set_U3CconnU3E5__2_4(L_7);
		// if (conn == null) yield break;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_8 = __this->get_U3CconnU3E5__2_4();
		if (L_8)
		{
			goto IL_0049;
		}
	}
	{
		// if (conn == null) yield break;
		return (bool)0;
	}

IL_0049:
	{
		// conn.Send(new SceneMessage { sceneName = gameObject.scene.path, sceneOperation = SceneOperation.UnloadAdditive, customHandling = true });
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_9 = __this->get_U3CconnU3E5__2_4();
		il2cpp_codegen_initobj((&V_4), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_12;
		L_12 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		String_t* L_13;
		L_13 = Scene_get_path_m1B2CE5FA0F1875C94621EE44BECD5E5C39EBF8BE((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_5), /*hidden argument*/NULL);
		(&V_4)->set_sceneName_0(L_13);
		(&V_4)->set_sceneOperation_1(2);
		(&V_4)->set_customHandling_2((bool)1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_14 = V_4;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_9, L_14, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// yield return waitForFade;
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_15 = V_1;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = L_15->get_waitForFade_17();
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// NetworkServer.RemovePlayerForConnection(conn, false);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_17 = __this->get_U3CconnU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		NetworkServer_RemovePlayerForConnection_mE52A009050437EC470A9BF46165473ACF841A5D9(L_17, (bool)0, /*hidden argument*/NULL);
		// player.transform.position = startPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_player_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get_startPosition_14();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_21, /*hidden argument*/NULL);
		// player.transform.LookAt(Vector3.up);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_player_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_23, L_24, /*hidden argument*/NULL);
		// SceneManager.MoveGameObjectToScene(player, SceneManager.GetSceneByPath(destinationScene));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_player_2();
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_26 = V_1;
		String_t* L_27 = L_26->get_destinationScene_13();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_28;
		L_28 = SceneManager_GetSceneByPath_mC4BDDF04CBFE46FD75CA9A5D5F6D88BDD7EE89F8(L_27, /*hidden argument*/NULL);
		SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_25, L_28, /*hidden argument*/NULL);
		// conn.Send(new SceneMessage { sceneName = destinationScene, sceneOperation = SceneOperation.LoadAdditive, customHandling = true });
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_29 = __this->get_U3CconnU3E5__2_4();
		il2cpp_codegen_initobj((&V_4), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		Portal_t7E74C0CAC61F3A79E99092D81AEBD7B14219C0A8 * L_30 = V_1;
		String_t* L_31 = L_30->get_destinationScene_13();
		(&V_4)->set_sceneName_0(L_31);
		(&V_4)->set_sceneOperation_1(1);
		(&V_4)->set_customHandling_2((bool)1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_32 = V_4;
		NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_inline(L_29, L_32, 0, /*hidden argument*/NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_RuntimeMethod_var);
		// NetworkServer.AddPlayerForConnection(conn, player);
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_33 = __this->get_U3CconnU3E5__2_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_player_2();
		bool L_35;
		L_35 = NetworkServer_AddPlayerForConnection_mC2F0A5B518D848C12E42D427DAA8FD0BFC4E9C56(L_33, L_34, /*hidden argument*/NULL);
		// if (NetworkClient.localPlayer != null && NetworkClient.localPlayer.TryGetComponent<PlayerController>(out PlayerController playerController))
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_36;
		L_36 = NetworkClient_get_localPlayer_mFA6B51032C92C1B18EAA3B7FCD0369A089A0020C_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_38;
		L_38 = NetworkClient_get_localPlayer_mFA6B51032C92C1B18EAA3B7FCD0369A089A0020C_inline(/*hidden argument*/NULL);
		bool L_39;
		L_39 = Component_TryGetComponent_TisPlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF_mC3EC44FB962D23B595D6F9D68A82EDE510E36153(L_38, (PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF **)(&V_3), /*hidden argument*/Component_TryGetComponent_TisPlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF_mC3EC44FB962D23B595D6F9D68A82EDE510E36153_RuntimeMethod_var);
		if (!L_39)
		{
			goto IL_015a;
		}
	}
	{
		// playerController.enabled = true;
		PlayerController_t5A75558383DB132A45D7469DAD964984755EA7DF * L_40 = V_3;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_40, (bool)1, /*hidden argument*/NULL);
	}

IL_015a:
	{
		// }
		__this->set_U3CconnU3E5__2_4((NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A *)NULL);
	}

IL_0161:
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendPlayerToNewSceneU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2803701B2E1A13C05CBAFA56DCB540943E04E75C (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPlayerToNewSceneU3Ed__8_System_Collections_IEnumerator_Reset_m4FBB3CE6281197F76471B71B67A8255D04365B46 (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendPlayerToNewSceneU3Ed__8_System_Collections_IEnumerator_Reset_m4FBB3CE6281197F76471B71B67A8255D04365B46_RuntimeMethod_var)));
	}
}
// System.Object Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSendPlayerToNewSceneU3Ed__8_System_Collections_IEnumerator_get_Current_m48F4C10A4D75401903DD1D45E3ECA0E0F3F98DE8 (U3CSendPlayerToNewSceneU3Ed__8_t06FF783C84F7723115109C804B43315D7EA428CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool active { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0 = ((NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var))->get_U3CactiveU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * NetworkManager_get_singleton_m3687E70BBF51C41E6F20B606EF0E0E40D13E7641_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager singleton { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var);
		NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * L_0 = ((NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15_il2cpp_TypeInfo_var))->get_U3CsingletonU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * NetworkWriterPool_Get_m4049C93631427709E5D43CED89089C9CAD045486_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Get_m200F48A04FDC9338198ACCB232D74592BD6B1EC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkWriterPooled writer = Pool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * L_0 = ((NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var))->get_Pool_0();
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_1;
		L_1 = Pool_1_Get_m200F48A04FDC9338198ACCB232D74592BD6B1EC6_inline(L_0, /*hidden argument*/Pool_1_Get_m200F48A04FDC9338198ACCB232D74592BD6B1EC6_RuntimeMethod_var);
		// writer.Reset();
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_2 = L_1;
		NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77_inline(L_2, /*hidden argument*/NULL);
		// return writer;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterPool_Return_m68FA23F3FB4D19F1B747FA83D418CA8F8AD07D5B_inline (NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_mCEC655E65DA5CB52561A33C080F52A3C88EA9F17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pool.Return(writer);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		Pool_1_t69A48779F19D9CB91649CDBFC36D0BDA33F4B902 * L_0 = ((NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var))->get_Pool_0();
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_1 = ___writer0;
		Pool_1_Return_mCEC655E65DA5CB52561A33C080F52A3C88EA9F17_inline(L_0, L_1, /*hidden argument*/Pool_1_Return_mCEC655E65DA5CB52561A33C080F52A3C88EA9F17_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt_m131D043593351682FEA1F18B455B80F78A24FD12_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteInt(this NetworkWriter writer, int value) => writer.WriteBlittable(value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		int32_t L_1 = ___value1;
		NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_inline(L_0, L_1, /*hidden argument*/NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method)
{
	{
		// protected ulong syncVarDirtyBits { get; private set; }
		uint64_t L_0 = __this->get_U3CsyncVarDirtyBitsU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteULong_mF3B9637FA1C3EA31551616D085A5A3AF041E6963_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void WriteULong(this NetworkWriter writer, ulong value) => writer.WriteBlittable(value);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint64_t L_1 = ___value1;
		NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_inline(L_0, L_1, /*hidden argument*/NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkReaderExtensions_ReadInt_m7A9A4138EDF745302020D1404A8A73C5BA0F0597_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int ReadInt(this NetworkReader reader) => reader.ReadBlittable<int>();
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		int32_t L_1;
		L_1 = NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_inline(L_0, /*hidden argument*/NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkReaderExtensions_ReadULong_m01F59C890722632901DC6C16D461CF39E5EEFDAC_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ulong ReadULong(this NetworkReader reader) => reader.ReadBlittable<ulong>();
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		uint64_t L_1;
		L_1 = NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_inline(L_0, /*hidden argument*/NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * NetworkIdentity_get_connectionToClient_mF85737F2CC90FC7E77FE8385F35F2FF2E692D82A_inline (NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * __this, const RuntimeMethod* method)
{
	{
		// get => _connectionToClient;
		NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * L_0 = __this->get__connectionToClient_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m7DDDC4AFB7EC130F64E6BA4E916235B46C338337_inline (NetworkManager_t4FCA51C2717E9324BB66A81749DFB3D7EBFBFA15 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkManagerMode mode { get; private set; }
		int32_t L_0 = __this->get_U3CmodeU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkConnection_get_identity_mF8F7D1AA28117C2F53450E6697D2966DB1B16F45_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, const RuntimeMethod* method)
{
	{
		// public NetworkIdentity identity { get; internal set; }
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = __this->get_U3CidentityU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * NetworkClient_get_localPlayer_mFA6B51032C92C1B18EAA3B7FCD0369A089A0020C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkIdentity localPlayer { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * L_0 = ((NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_StaticFields*)il2cpp_codegen_static_fields_for(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var))->get_U3ClocalPlayerU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkBehaviour_GeneratedSyncVarSetter_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4D60CA45C8CD6063B0FA649C208457796A78A7BB_gshared_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___field1, uint64_t ___dirtyBit2, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!SyncVarEqual(value, ref field))
		int32_t L_0 = ___value0;
		int32_t* L_1 = ___field1;
		bool L_2;
		L_2 = ((  bool (*) (int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((int32_t)L_0, (int32_t*)(int32_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		// T oldValue = field;
		int32_t* L_3 = ___field1;
		int32_t L_4 = (*(int32_t*)L_3);
		V_0 = (int32_t)L_4;
		// SetSyncVar(value, ref field, dirtyBit);
		int32_t L_5 = ___value0;
		int32_t* L_6 = ___field1;
		uint64_t L_7 = ___dirtyBit2;
		((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, int32_t, int32_t*, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *)__this, (int32_t)L_5, (int32_t*)(int32_t*)L_6, (uint64_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// if (OnChanged != null)
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_8 = ___OnChanged3;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// if (NetworkServer.localClientActive && !GetSyncVarHookGuard(dirtyBit))
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = NetworkServer_get_localClientActive_m9C4F4B8848458BB4A2EE6552EDE1E39792C2B3BA(/*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_10 = ___dirtyBit2;
		bool L_11;
		L_11 = NetworkBehaviour_GetSyncVarHookGuard_m69E27CD31431FD5BBDDA23D06E99E18CF7E2590A((NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *)__this, (uint64_t)L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0046;
		}
	}
	{
		// SetSyncVarHookGuard(dirtyBit, true);
		uint64_t L_12 = ___dirtyBit2;
		NetworkBehaviour_SetSyncVarHookGuard_mF38BC0B793D2A923C63A3A17CA9CA704B5588756((NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *)__this, (uint64_t)L_12, (bool)1, /*hidden argument*/NULL);
		// OnChanged(oldValue, value);
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_13 = ___OnChanged3;
		int32_t L_14 = V_0;
		int32_t L_15 = ___value0;
		((  void (*) (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)L_13, (int32_t)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// SetSyncVarHookGuard(dirtyBit, false);
		uint64_t L_16 = ___dirtyBit2;
		NetworkBehaviour_SetSyncVarHookGuard_mF38BC0B793D2A923C63A3A17CA9CA704B5588756((NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *)__this, (uint64_t)L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkBehaviour_GeneratedSyncVarDeserialize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m63762D36F78B1391F8A5C6596C2F9827D424922D_gshared_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t* ___field0, Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___OnChanged1, int32_t ___value2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// T previous = field;
		int32_t* L_0 = ___field0;
		int32_t L_1 = (*(int32_t*)L_0);
		V_0 = (int32_t)L_1;
		// field = value;
		int32_t* L_2 = ___field0;
		int32_t L_3 = ___value2;
		*(int32_t*)L_2 = L_3;
		// if (OnChanged != null && !SyncVarEqual(previous, ref field))
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_4 = ___OnChanged1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t* L_6 = ___field0;
		bool L_7;
		L_7 = ((  bool (*) (int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((int32_t)L_5, (int32_t*)(int32_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		// OnChanged(previous, field);
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_8 = ___OnChanged1;
		int32_t L_9 = V_0;
		int32_t* L_10 = ___field0;
		int32_t L_11 = (*(int32_t*)L_10);
		((  void (*) (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)L_8, (int32_t)L_9, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0027:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkConnection_Send_TisSceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_mF8FF308EA6A3995B65D64AC525BC291F93413FDF_gshared_inline (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * __this, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  ___message0, int32_t ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (NetworkWriterPooled writer = NetworkWriterPool.Get())
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_0;
		L_0 = NetworkWriterPool_Get_m4049C93631427709E5D43CED89089C9CAD045486_inline(/*hidden argument*/NULL);
		V_0 = (NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 *)L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		// MessagePacking.Pack(message, writer);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_1 = ___message0;
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_2 = V_0;
		((  void (*) (SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE , NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE )L_1, (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// NetworkDiagnostics.OnSend(message, channelId, writer.Position, 1);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_3 = ___message0;
		int32_t L_4 = ___channelId1;
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_5 = V_0;
		int32_t L_6 = (int32_t)((NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *)L_5)->get_Position_2();
		((  void (*) (SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE , int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE )L_3, (int32_t)L_4, (int32_t)L_6, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// Send(writer.ToArraySegment(), channelId);
		NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_7 = V_0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_8;
		L_8 = NetworkWriter_ToArraySegment_m20B3969C06F4320029AD66A820B0523A8D6641EF_inline((NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *)L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___channelId1;
		VirtActionInvoker2< ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t >::Invoke(5 /* System.Void Mirror.NetworkConnection::Send(System.ArraySegment`1<System.Byte>,System.Int32) */, (NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 *)__this, (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_8, (int32_t)L_9);
		// }
		IL2CPP_LEAVE(0x34, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			NetworkWriterPooled_t3E30C161DCDCDC9DDEBC0960BB8DCA0F9F9D6FE1 * L_11 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB838AF2B314DCFD144C8A3D9EED6D3DD77AE5415_gshared_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  List_1_get_Item_m0A78745CB284E1247172CA282A0E8B41519266B5_gshared_inline (List_1_tF5A06610AC52E0ED9B7CE8B210E3276277D82AB2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115* L_2 = (SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SceneU5BU5D_t8254F77FD1B1FB3E78FF3FA6E14828C0EE0B3115*)L_2, (int32_t)L_3);
		return (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_Reset_m9F34945A36E170550D63E41D2CF9C26ACB03FF77_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	{
		// Position = 0;
		__this->set_Position_2(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  NetworkWriter_ToArraySegment_m20B3969C06F4320029AD66A820B0523A8D6641EF_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ArraySegment<byte>(buffer, 0, Position);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_Position_2();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_2), L_0, 0, L_1, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Get_mC5CE019BB0D46B39DB30076D0D8350539EE964EF_gshared_inline (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, const RuntimeMethod* method)
{
	{
		// public T Get() => objects.Count > 0 ? objects.Pop() : objectGenerator();
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_0 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)__this->get_objects_0();
		int32_t L_1;
		L_1 = ((  int32_t (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_2 = (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)__this->get_objectGenerator_1();
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject *)L_3;
	}

IL_001a:
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_4 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)__this->get_objects_0();
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (RuntimeObject *)L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pool_1_Return_m18D10CA725CD2F2D9045CF1191833E64244B71B2_gshared_inline (Pool_1_t0032EAB8380650F504B15E7B3C3D2A58E2792D00 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// public void Return(T item) => objects.Push(item);
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_0 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)__this->get_objects_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_WriteBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m977B078CA4CF81CDF50AEEC2AEB75D3E7960AD38_gshared_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// int size = sizeof(T);
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		// EnsureCapacity(Position + size);
		int32_t L_1 = (int32_t)__this->get_Position_2();
		int32_t L_2 = V_0;
		NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline((NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get_buffer_1();
		int32_t L_4 = (int32_t)__this->get_Position_2();
		V_1 = (uint8_t*)((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)));
		// fixed (byte* ptr = &buffer[Position])
		uint8_t* L_5 = V_1;
		// *(T*)ptr = value;
		int32_t L_6 = ___value0;
		*(int32_t*)((uintptr_t)L_5) = L_6;
		V_1 = (uint8_t*)((uintptr_t)0);
		// Position += size;
		int32_t L_7 = (int32_t)__this->get_Position_2();
		int32_t L_8 = V_0;
		__this->set_Position_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_WriteBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mE8BA243772617EBB06F9053BE4C3178BC026D477_gshared_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// int size = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		// EnsureCapacity(Position + size);
		int32_t L_1 = (int32_t)__this->get_Position_2();
		int32_t L_2 = V_0;
		NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline((NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get_buffer_1();
		int32_t L_4 = (int32_t)__this->get_Position_2();
		V_1 = (uint8_t*)((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)));
		// fixed (byte* ptr = &buffer[Position])
		uint8_t* L_5 = V_1;
		// *(T*)ptr = value;
		uint64_t L_6 = ___value0;
		*(uint64_t*)((uintptr_t)L_5) = L_6;
		V_1 = (uint8_t*)((uintptr_t)0);
		// Position += size;
		int32_t L_7 = (int32_t)__this->get_Position_2();
		int32_t L_8 = V_0;
		__this->set_Position_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_gshared_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// int size = sizeof(T);
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		// if (Position + size > buffer.Count)
		int32_t L_1 = (int32_t)__this->get_Position_1();
		int32_t L_2 = V_0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_3 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		int32_t L_4;
		L_4 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_3, /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_003c;
		}
	}
	{
		// throw new EndOfStreamException($"ReadBlittable<{typeof(T)}> out of range: {ToString()}");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)__this);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03E170E8209664E0E5EC4BFA0C00EC477E7A12B8)), (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_9 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkReader_ReadBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAE09F2DB1600B97F62F67DDBAF3AE8BBA41CDA96_RuntimeMethod_var)));
	}

IL_003c:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_10 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_10, /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_12 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		int32_t L_13;
		L_13 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_12, /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_14 = (int32_t)__this->get_Position_1();
		V_1 = (uint8_t*)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)))));
		// fixed (byte* ptr = &buffer.Array[buffer.Offset + Position])
		uint8_t* L_15 = V_1;
		// value = *(T*)ptr;
		int32_t L_16 = (*(int32_t*)((uintptr_t)L_15));
		V_1 = (uint8_t*)((uintptr_t)0);
		// Position += size;
		int32_t L_17 = (int32_t)__this->get_Position_1();
		int32_t L_18 = V_0;
		__this->set_Position_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		// return value;
		return (int32_t)L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_gshared_inline (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// int size = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		// if (Position + size > buffer.Count)
		int32_t L_1 = (int32_t)__this->get_Position_1();
		int32_t L_2 = V_0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_3 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		int32_t L_4;
		L_4 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_3, /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_003c;
		}
	}
	{
		// throw new EndOfStreamException($"ReadBlittable<{typeof(T)}> out of range: {ToString()}");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)__this);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03E170E8209664E0E5EC4BFA0C00EC477E7A12B8)), (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_9 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkReader_ReadBlittable_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB09C66787CB1D7AE1AE7F5CA9281A0B0EF30F7CD_RuntimeMethod_var)));
	}

IL_003c:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_10 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_10, /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_12 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)__this->get_address_of_buffer_0();
		int32_t L_13;
		L_13 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_12, /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_14 = (int32_t)__this->get_Position_1();
		V_1 = (uint8_t*)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)))));
		// fixed (byte* ptr = &buffer.Array[buffer.Offset + Position])
		uint8_t* L_15 = V_1;
		// value = *(T*)ptr;
		uint64_t L_16 = (*(uint64_t*)((uintptr_t)L_15));
		V_1 = (uint8_t*)((uintptr_t)0);
		// Position += size;
		int32_t L_17 = (int32_t)__this->get_Position_1();
		int32_t L_18 = V_0;
		__this->set_Position_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		// return value;
		return (uint64_t)L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkWriter_EnsureCapacity_m8686EBB645C1892C928AB87D8FD73148B547BDC9_inline (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buffer.Length < value)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_1();
		int32_t L_1 = ___value0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// int capacity = Math.Max(value, buffer.Length * 2);
		int32_t L_2 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_4;
		// Array.Resize(ref buffer, capacity);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_5 = __this->get_address_of_buffer_1();
		int32_t L_6 = V_0;
		Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_5, L_6, /*hidden argument*/Array_Resize_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB1B749BA9EAC58D929166254460CCE2537C0C055_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
