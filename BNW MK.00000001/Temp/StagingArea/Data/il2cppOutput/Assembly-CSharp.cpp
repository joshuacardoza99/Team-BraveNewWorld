#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// CameraControl
struct CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// MainThreadUtil
struct MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46;
// MapGenerator
struct MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PanZoom
struct PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerMove
struct PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2;
// TileMove
struct TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t5A5870BA6632506F334B54D797940D01977B4662;
// WaitForUpdate
struct WaitForUpdate_t97F8DD3C4CD3561C63F1A61B9B2FC6A6815065FA;
// NativeWebSocket.WebSocket
struct WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A;
// NativeWebSocket.WebSocketException
struct WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4;
// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577;
// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335;
// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45;
// add_character
struct add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE;
// change_button
struct change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C;
// change_scene
struct change_scene_t3B232315E5290872C93C10178DAB37744D050D83;
// character_selection
struct character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D;
// civ_description
struct civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2;
// click_handlers
struct click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86;
// import_manager
struct import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304;
// map_manager
struct map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27;
// match_manager
struct match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57;
// menu_manager
struct menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08;
// menu_scene
struct menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93;
// panel_toggle
struct panel_toggle_tAD76B8C9E2E12D4547C69066DCF48FBE2B964C15;
// preload
struct preload_t0B52930C1F391272030E369F9367669C70EC5857;
// server_manager
struct server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE;
// NativeWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701;
// NativeWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF;
// NativeWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E;
// NativeWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47;
// click_handlers/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199;
// click_handlers/function_parameter
struct function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632;
// server_manager/<>c
struct U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE;
// server_manager/update_message
struct update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,NativeWebSocket.WebSocket>
struct KeyCollection_t64A4D5249A3CC754ED237EC5548F16134EA490DB;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Tile>
struct List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<Tile>
struct Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Stack`1<Tile>
struct Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,NativeWebSocket.WebSocket>
struct ValueCollection_t0F879E9859406AC545BDA681316F7EBB47E6F72C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,NativeWebSocket.WebSocket>[]
struct EntryU5BU5D_t6259D900AD66827F624CE9308BF11535E257FB07;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[0...,0...]
struct StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Tile[]
struct TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AAB94830E6E74F8E8BF8C47878A378C3054868;
IL2CPP_EXTERN_C String_t* _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E52EE6C36542E7E5AC363181E7D02F9A16D3DF8;
IL2CPP_EXTERN_C String_t* _stringLiteral0F81E351FFBE529464AD17F3EC889D95B52599B2;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral160356CF5C664893697131099148ADEEA00E28DA;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral20CA8BD57D3AE45FEB21A59FD8CB67BCB2BF3FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C8A7F1479C617CFB7F4ECC2F878930A21DB993D;
IL2CPP_EXTERN_C String_t* _stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C;
IL2CPP_EXTERN_C String_t* _stringLiteral638D189CEDF42AEBF22B64BE76876A3810A45347;
IL2CPP_EXTERN_C String_t* _stringLiteral64C361F4296F64892342A447BD41E24EF08A6EB8;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteral777AE62A4AAF93B33F90DF3E12489F43ABA14E39;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8ACFC5D1820E77053E39ACA6DB17A311C82DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F613818B9E75C9DAF880518950A7F42921E3FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral904A7CE8C394B97F74C2E640DC67ADF834259805;
IL2CPP_EXTERN_C String_t* _stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43;
IL2CPP_EXTERN_C String_t* _stringLiteral9CADC7EA5536C085F6BBC3D3F0D7C53CE29C8FFD;
IL2CPP_EXTERN_C String_t* _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A08DBA5A9FC75133D68F1749B907F3349C76EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralA55412FF9C119740DC17C582FACC4440FCF0968A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7AF098AEB356CEB5A3ADD3886207C8E24C72E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralA98BA42F5DFA50AB8385E1A20C53FC9A88A9E8F7;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9F76891AC53723CE75B62A2955861E9C70310A;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38;
IL2CPP_EXTERN_C String_t* _stringLiteralB4E4CA5C5C687ADADDAE2F0A9AC4EF78D5A74478;
IL2CPP_EXTERN_C String_t* _stringLiteralB639FE9E91ACBD99F30ECB71F1EB84B9CCEB6535;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralC3F71191917A10B146EA94090694625A9B97F5F3;
IL2CPP_EXTERN_C String_t* _stringLiteralCE6D16407AA08D762CD253B6CD8C830010194490;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542;
IL2CPP_EXTERN_C String_t* _stringLiteralD1239E37FC08DE4D629FDD65172F29EF2236E3C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B7E32D8B8AD0ED70C4FCF6FFEC997341F33B42;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA070F4AC99A78BF17CB1D8CC143F070CD0A3B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F;
IL2CPP_EXTERN_C String_t* _stringLiteralE883E5E31609FF3F9D826DA837DAAAC542C90E28;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C0BA4E309049D644C78A07DA5C1A2D427E2E76;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralF9F923FBED0D4354CF3058FF0E7B261135BE34DC;
IL2CPP_EXTERN_C String_t* _stringLiteralFB91DF7EEC2135EC963D55F2DA5FBB6CD3E3179D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB7596D39E202CB94D68C4894056ACA15264694;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE68F66BB3ADADE79EA04F793E81F297439C9E619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m70A4CDAC856B2E9ECA7847197A68D49DA350B6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEF5953D745A7A304B14644F1CDCEE808523B01A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_m04D9281CFBB228EDD05CA95A36CD44EBD9908889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_mAE06080ECB5169182FED5E1E36946CE2830AB057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m822828766798E78DA212A293BDB5FA867910E97A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisserver_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559_m88AD973A564B03CBDCEE9DA0F59A18776A432F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisupdate_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_m1598824EE41C901EDFA7AA87C110A88A9F429789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3F9154AE241FF89420C9F71D10F157332977D914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF79AEE6EA455223A5D2F26F223A964989E81B886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m44301B82B04D5E67F22890FCF9E968923FE63433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4B943A787653AB40C12B4615AC2B96CEF3B94CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m6DE69B997289FD908BDC3AB242659420FE6A007B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m871F769BF0D5E6F9DE1D575E42ABB28E375EAD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m995C95DABA4F2F6BF4ACF2F4158056EA6C467DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_0_m53F3AFFE35A8FFA4931AD32F562F7FC785282166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_1_m958851319451B20689247153FE693E84917D9CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_2_m1BEB06F43550C5D52E070EF0C6CC67D65CE66754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cload_buttonU3Eb__0_mD2C572942A7DBC7BAFD2ABD4EBA4F02017B695BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m50FA6256E1E7A4F485243CFD944FC5E8522E31E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Send_m900ABA740BCF487F3C957BF261EED093BE162601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* server_manager_U3CStartU3Eb__3_3_mA8396F132D7A5C1CE3855FD07BC2808C8EDFE215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CameraControl_PanCamera_mCDC498BBBFCE95C867292510EA66EB580413ADE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_Awake_m8AF95ACAAD2094819B05A1C0B2A88B4B03B8A891_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_Run_mBC930FE44E9FCEB3B3C601BCF464AA0F4FE2621D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_Setup_m26C55CDB6F21D413E6069E8A27C22DE05759106B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_Start_m9DFED1E1FAA34D894424666A17FAEFF41E0F9102_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator__ctor_mB9C58913280E7537C3EB6A1DACEDE418B41DFE01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_create_ground_area_m365485C7A4BA3F03F6F23D1B30736D6509AB4DF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_create_ground_m2FBE80337CC38AD868AA6ED78EE8149DD874F5D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_create_ground_strip_m2853E64DF8D46CAC3459B1D27AA6DC600CCCDE0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_generate_map_m4668EE329DD81CC1385B133729AB544BD43E6A89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_load_map_m5D85E282E916531FC73D4DFCA3798A05AF8384BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MapGenerator_unselect_tile_m08D2DC094B6ECF049C1E600B8743C20927820704_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCloseCallback_BeginInvoke_m835AD1A10EAEFB97AE465B8B74D0903285754551_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnErrorCallback_BeginInvoke_mAA54BD8759AACB17C155EFC6AD4B23FEAC1D8190_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnMessageCallback_BeginInvoke_m0B3E8720CA4FEAFE737A9C20170A5C3596173602_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnOpenCallback_BeginInvoke_m5DCB128BE23CA6378884BAB54CD3E684A8813C9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom_Awake_mCECFF4A00F6F3EB9738C867218F193695061D5D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom_HandleMouse_m3E124E5D1EB3589B36885630B9BFDC52DECFEF64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom_HandleTouch_m135A2CC1BF9BBE56C66F359460C751120913F585_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PanZoom__cctor_m832AFC4F168BED2658C198FC9C5543683B69937F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMove_Move_mF4FC8BB364D0D99947A3A1299618E22711F43A00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMove_Update_m9AC3A24B5AFBD10381EFFC5A68D0DB56C73E2D90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileMove_ComputeAdjacencyLists_mA1A1095FE10BA48D0DDF0E00A18F8734EDB1A7EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileMove_FindSelectableTiles_mD6467E060BB786849F6947364722735BC93CEB77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileMove_GetTargetTile_m8E7B3A722C56ACD967691822219ED8C453D45B01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileMove_Init_mF6EFB6C59A44869835B49E29C25FAF8178540CA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileMove__ctor_mC2FCF95F01FF0ED05028685693C2DD7C29A21803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_FindNeighbors_mC4318A7E8F1C02D2892ABEE87594F9877D32DF4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_OnMouseDown_mC133CAB2DD72189781F34532A35F0E17634D840E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_Reset_mE01DB3A5A4B301E1F821CA2954264BFA94D1295A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_Start_m2D8C47ECDED6D6588E8B049E1B5E975A952C07CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile_Update_mF00D2C91D4F9FEADBA84DF4F014381EB49B0D5FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tile__ctor_m35C285926E99EBF627F2B82BEA77909A233BE1ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m871F769BF0D5E6F9DE1D575E42ABB28E375EAD90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStartU3Eb__3_0_m53F3AFFE35A8FFA4931AD32F562F7FC785282166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStartU3Eb__3_1_m958851319451B20689247153FE693E84917D9CC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStartU3Eb__3_2_m1BEB06F43550C5D52E070EF0C6CC67D65CE66754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3Cload_buttonU3Eb__0_mD2C572942A7DBC7BAFD2ABD4EBA4F02017B695BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m04095B146DEED38FC0333E436A9502E07C0BF9F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m0E82FD2A275EC080B7305E23D62AE6C8AB5FFA15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaitForBackgroundThread_GetAwaiter_mC860B5F296BEE21CC3EBB0F7B86053051D49F725_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaitForUpdate_CoroutineWrapper_mB06747CEF8BCF94946EF6040A6ED6120F28684A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaitForUpdate_GetAwaiter_m5697933B1A8ADEAA1C013EF91453A83541D569D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketCloseEventHandler_BeginInvoke_m4B532483745865CEAB6028CACE07EE739AD991AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_CreateInstance_mD304988097B4EFC944D4D63153E10E229005D7E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_HandleInstanceDestroy_m8F6BD9D4F38287BFD0418A293D7841C6FE401CBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory_Initialize_mD32F8EE139FC0DACA0494365FCAAB1D1042A74BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFactory__cctor_m1F096C7F70DDFCBEEC7AEFF37CE3A986FD550335_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketHelpers_ParseCloseCodeEnum_m719389266B3DBD9607C62A6C0816A99BF33DD20F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_Finalize_m7FA4340D111CED8405FB3948E78DEC40554799D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_Send_m900ABA740BCF487F3C957BF261EED093BE162601_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_add_OnClose_m0FEFFD504C35320464513739813DDB8BB2418892_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_add_OnError_m0DC8D3CE51CC45574ED5284BDF0F3189E976825F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_add_OnMessage_m430209598ED003FC2695D7151F96EE603EF19BF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_add_OnOpen_m3AD885B71B3C90F1F5EC1A7217BA12114F894194_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_remove_OnClose_m85845A8506266B3206D00974DDA9794E58FFE391_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_remove_OnError_mAA1636E10B168BB12A56484C8F277C0B0707B88F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_remove_OnMessage_m89AD476C6ED281FA9CC759C5ED02511C099E2155_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_remove_OnOpen_m3CBFA65BFBB4338C90A16D0BEEFF977D4C44728E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t add_character_Start_m603C0E5C51247CB783EB643513C6ACED19CB605B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t add_character__ctor_m31F71D95CA67CAB4E7E7F4C921A86A77905434E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t add_character_add_m77BA86CEA099AAF8C991D25D25ADE0CB67AFEFA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t change_button_change_sprite_m00C9D38C7D47B0868A607E6A00071CE83D63542F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t change_scene_buttonChangeScene_m271BDC0BCD0D73DAB25BD15E3A0106308FC62BE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t character_selection_Start_m517876AB34C8A85F18A59027926F26CAE0811CBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t character_selection_get_civilization_mA2B7F38477E5A090F01A9D5B592DA534E0880422_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t civ_description_Update_m47FB12531776DCAD3A9DBBBFEDD3B07431F048DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t click_handlers_Start_m324D530A537C41F2433E7619BBE4C292F976F081_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t click_handlers_click_local_m62A33BE45DD16A046FDD01690B14FCDCABBB2D90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t click_handlers_detroy_menu_m847D412BC025B299B1845C8B4EEED8D1264B155B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t click_handlers_load_button_m5693F13EE2D81FFCC88D05A9C4A9D48B834CA79E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t import_manager_Start_mA0AEDEF96EA8AD365BB174526CA6DD1CE4D93006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_Start_m4634849DD97A651C7CFA35807BE56493C4A3C6CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_create_ground_m8CCDF9A6AC1FAC26A1CA26794F88E2CF5D94649D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_generate_map2_m92515DB05AB05552DE70C20AF13A10C25F6C0AB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_generate_map_m0BA8378ACD74C076FBADCCC3B5223620E8E7BE97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_load_map_m961B839BEA8A99BDB4351F894AB35FB5CE133637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t map_manager_unselect_tile_m2849BBA69E8F2E81FE7807BC727BF55B584EB400_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_Start_m6CBCFC6E4C9362919EE45CAD0C2B22A69BAD618B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager__ctor_mE2FBB11542DFC44FEBE5AD843CBBC5F8781EF8B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_get_player_civilization_m651864B25DA360F39D3B453157F2B44764FAB027_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_leave_match_m616AC0310970ABE944A5BA0D0A2955C105BC3F4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_receive_test_data_mF26CE7F7DF8B43DCE95D67A3DCBC7E364FBC8663_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_set_host_game_m1C0B7B6DB5566B8EB9A9B09743DF8C5021817419_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_set_local_game_m402CB2241788F96CC318DD8C82A0D4E2451441C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_set_network_game_mD4808198D6AA3833632D2E5C25912E9A474805E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_setup_match_mA3B2134DA673DE3F00FC822D84D202DD4C3F9F62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_start_match_m8DD98737CC7E2164B2160DFA6D63B8A4D37E795F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t match_manager_vote_ready_mC104A64CAB1EFC6E0F2E62E72B569F149B6E460E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_manager_removeWaitPanel_mA4617AF4A8A4558278AC536763F8BD7ABA2CB290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_scene_Start_mFF5E35E384E82A89C6AE7BECA46A10BA7C9DD334_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t panel_toggle_toggle_panel_m2B91001FFF31AE894878D6FE4A2B75827ADDA2B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t preload_Start_m90A2A82B176354479CF7AD13B1DF34BC81404D32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t preload_Update_m5A002E26E21E81AC949B107D1402885D4DB9F5BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t server_manager_OnApplicationQuit_mFDA03EE53EAB0078BC02382AD150B84048E029F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t server_manager_Start_mA776C5F0039ABA6BF0E008E5558340138F1421C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t server_manager__ctor_mFF184F8AC0B573AB7DFA68E2A4D8ED4434333809_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t server_manager_deliver_message_mC9ED449AA59784896D20134DE65A69CA9F3A0EA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t server_manager_send_m3BAE5F09FCA8BD7AE05936363EA53E83658F5B23_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// MainThreadUtil_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator MainThreadUtil_<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;

public:
	inline static int32_t get_offset_of_waitForUpdate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D, ___waitForUpdate_0)); }
	inline RuntimeObject* get_waitForUpdate_0() const { return ___waitForUpdate_0; }
	inline RuntimeObject** get_address_of_waitForUpdate_0() { return &___waitForUpdate_0; }
	inline void set_waitForUpdate_0(RuntimeObject* value)
	{
		___waitForUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForUpdate_0), (void*)value);
	}
};


// NativeWebSocket.WaitForBackgroundThread
struct  WaitForBackgroundThread_t5A5870BA6632506F334B54D797940D01977B4662  : public RuntimeObject
{
public:

public:
};


// NativeWebSocket.WaitForBackgroundThread_<>c
struct  U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields
{
public:
	// NativeWebSocket.WaitForBackgroundThread_<>c NativeWebSocket.WaitForBackgroundThread_<>c::<>9
	U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread_<>c::<>9__0_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// NativeWebSocket.WebSocket
struct  WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF  : public RuntimeObject
{
public:
	// System.Int32 NativeWebSocket.WebSocket::instanceId
	int32_t ___instanceId_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * ___OnOpen_1;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * ___OnMessage_2;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * ___OnError_3;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * ___OnClose_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF, ___instanceId_0)); }
	inline int32_t get_instanceId_0() const { return ___instanceId_0; }
	inline int32_t* get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(int32_t value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_OnOpen_1() { return static_cast<int32_t>(offsetof(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF, ___OnOpen_1)); }
	inline WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * get_OnOpen_1() const { return ___OnOpen_1; }
	inline WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 ** get_address_of_OnOpen_1() { return &___OnOpen_1; }
	inline void set_OnOpen_1(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * value)
	{
		___OnOpen_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_2() { return static_cast<int32_t>(offsetof(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF, ___OnMessage_2)); }
	inline WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * get_OnMessage_2() const { return ___OnMessage_2; }
	inline WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA ** get_address_of_OnMessage_2() { return &___OnMessage_2; }
	inline void set_OnMessage_2(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * value)
	{
		___OnMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_3() { return static_cast<int32_t>(offsetof(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF, ___OnError_3)); }
	inline WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * get_OnError_3() const { return ___OnError_3; }
	inline WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A ** get_address_of_OnError_3() { return &___OnError_3; }
	inline void set_OnError_3(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * value)
	{
		___OnError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnClose_4() { return static_cast<int32_t>(offsetof(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF, ___OnClose_4)); }
	inline WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * get_OnClose_4() const { return ___OnClose_4; }
	inline WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 ** get_address_of_OnClose_4() { return &___OnClose_4; }
	inline void set_OnClose_4(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * value)
	{
		___OnClose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_4), (void*)value);
	}
};


// NativeWebSocket.WebSocketFactory
struct  WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7  : public RuntimeObject
{
public:

public:
};

struct WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket> NativeWebSocket.WebSocketFactory::instances
	Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * ___instances_0;
	// System.Boolean NativeWebSocket.WebSocketFactory::isInitialized
	bool ___isInitialized_1;

public:
	inline static int32_t get_offset_of_instances_0() { return static_cast<int32_t>(offsetof(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields, ___instances_0)); }
	inline Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * get_instances_0() const { return ___instances_0; }
	inline Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D ** get_address_of_instances_0() { return &___instances_0; }
	inline void set_instances_0(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * value)
	{
		___instances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_0), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_1() { return static_cast<int32_t>(offsetof(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields, ___isInitialized_1)); }
	inline bool get_isInitialized_1() const { return ___isInitialized_1; }
	inline bool* get_address_of_isInitialized_1() { return &___isInitialized_1; }
	inline void set_isInitialized_1(bool value)
	{
		___isInitialized_1 = value;
	}
};


// NativeWebSocket.WebSocketHelpers
struct  WebSocketHelpers_t3FBC7966CB7B6AEF1618DFCFB1F40E0BF8636E3A  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct  Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6259D900AD66827F624CE9308BF11535E257FB07* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t64A4D5249A3CC754ED237EC5548F16134EA490DB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0F879E9859406AC545BDA681316F7EBB47E6F72C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___entries_1)); }
	inline EntryU5BU5D_t6259D900AD66827F624CE9308BF11535E257FB07* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6259D900AD66827F624CE9308BF11535E257FB07** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6259D900AD66827F624CE9308BF11535E257FB07* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___keys_7)); }
	inline KeyCollection_t64A4D5249A3CC754ED237EC5548F16134EA490DB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t64A4D5249A3CC754ED237EC5548F16134EA490DB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t64A4D5249A3CC754ED237EC5548F16134EA490DB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ___values_8)); }
	inline ValueCollection_t0F879E9859406AC545BDA681316F7EBB47E6F72C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0F879E9859406AC545BDA681316F7EBB47E6F72C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0F879E9859406AC545BDA681316F7EBB47E6F72C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____items_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Tile>
struct  List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____items_1)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__items_1() const { return ____items_1; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_StaticFields, ____emptyArray_5)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};


// System.Collections.Generic.Queue`1<Tile>
struct  Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C, ____array_0)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__array_0() const { return ____array_0; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};


// System.Collections.Generic.Stack`1<Tile>
struct  Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441, ____array_0)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__array_0() const { return ____array_0; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// WaitForUpdate_<CoroutineWrapper>d__4
struct  U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E  : public RuntimeObject
{
public:
	// System.Int32 WaitForUpdate_<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate_<CoroutineWrapper>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate_<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate_MainThreadAwaiter WaitForUpdate_<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_theWorker_2() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E, ___theWorker_2)); }
	inline RuntimeObject* get_theWorker_2() const { return ___theWorker_2; }
	inline RuntimeObject** get_address_of_theWorker_2() { return &___theWorker_2; }
	inline void set_theWorker_2(RuntimeObject* value)
	{
		___theWorker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theWorker_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E, ___awaiter_3)); }
	inline MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * get_awaiter_3() const { return ___awaiter_3; }
	inline MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// WaitForUpdate_MainThreadAwaiter
struct  MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE  : public RuntimeObject
{
public:
	// System.Action WaitForUpdate_MainThreadAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_0;
	// System.Boolean WaitForUpdate_MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE, ___continuation_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_0() const { return ___continuation_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE, ___U3CIsCompletedU3Ek__BackingField_1)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_1() const { return ___U3CIsCompletedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_1() { return &___U3CIsCompletedU3Ek__BackingField_1; }
	inline void set_U3CIsCompletedU3Ek__BackingField_1(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_1 = value;
	}
};


// click_handlers_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199  : public RuntimeObject
{
public:
	// click_handlers click_handlers_<>c__DisplayClass5_0::<>4__this
	click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * ___U3CU3E4__this_0;
	// System.String click_handlers_<>c__DisplayClass5_0::clickAction
	String_t* ___clickAction_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199, ___U3CU3E4__this_0)); }
	inline click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_clickAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199, ___clickAction_1)); }
	inline String_t* get_clickAction_1() const { return ___clickAction_1; }
	inline String_t** get_address_of_clickAction_1() { return &___clickAction_1; }
	inline void set_clickAction_1(String_t* value)
	{
		___clickAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickAction_1), (void*)value);
	}
};


// server_manager_<>c
struct  U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields
{
public:
	// server_manager_<>c server_manager_<>c::<>9
	U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * ___U3CU3E9_0;
	// NativeWebSocket.WebSocketOpenEventHandler server_manager_<>c::<>9__3_0
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * ___U3CU3E9__3_0_1;
	// NativeWebSocket.WebSocketErrorEventHandler server_manager_<>c::<>9__3_1
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * ___U3CU3E9__3_1_2;
	// NativeWebSocket.WebSocketCloseEventHandler server_manager_<>c::<>9__3_2
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * ___U3CU3E9__3_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields, ___U3CU3E9__3_0_1)); }
	inline WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields, ___U3CU3E9__3_1_2)); }
	inline WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields, ___U3CU3E9__3_2_3)); }
	inline WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * get_U3CU3E9__3_2_3() const { return ___U3CU3E9__3_2_3; }
	inline WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 ** get_address_of_U3CU3E9__3_2_3() { return &___U3CU3E9__3_2_3; }
	inline void set_U3CU3E9__3_2_3(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * value)
	{
		___U3CU3E9__3_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_2_3), (void*)value);
	}
};


// server_manager_update_message
struct  update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E  : public RuntimeObject
{
public:
	// System.String server_manager_update_message::gameObject
	String_t* ___gameObject_0;
	// System.String server_manager_update_message::function
	String_t* ___function_1;
	// System.String[] server_manager_update_message::parameters
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E, ___gameObject_0)); }
	inline String_t* get_gameObject_0() const { return ___gameObject_0; }
	inline String_t** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(String_t* value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_function_1() { return static_cast<int32_t>(offsetof(update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E, ___function_1)); }
	inline String_t* get_function_1() const { return ___function_1; }
	inline String_t** get_address_of_function_1() { return &___function_1; }
	inline void set_function_1(String_t* value)
	{
		___function_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_1), (void*)value);
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E, ___parameters_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_parameters_2() const { return ___parameters_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Tile>
struct  Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___list_0)); }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * get_list_0() const { return ___list_0; }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___current_3)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_current_3() const { return ___current_3; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// WaitForUpdate
struct  WaitForUpdate_t97F8DD3C4CD3561C63F1A61B9B2FC6A6815065FA  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
};


// NativeWebSocket.WebSocketCloseCode
struct  WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4 
{
public:
	// System.Int32 NativeWebSocket.WebSocketCloseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeWebSocket.WebSocketState
struct  WebSocketState_t425C1C8301850E2CC8A1C1A7C223149EBDE74EB2 
{
public:
	// System.Int32 NativeWebSocket.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t425C1C8301850E2CC8A1C1A7C223149EBDE74EB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.Threading.SynchronizationContextProperties
struct  SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
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
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
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


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
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


// UnityEngine.UI.Image_Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
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


// UnityEngine.UI.Navigation_Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
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


// UnityEngine.UI.Selectable_Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
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


// NativeWebSocket.WebSocketException
struct  WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.SynchronizationContext
struct  SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_1)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};

// server_manager_<OnApplicationQuit>d__5
struct  U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 
{
public:
	// System.Int32 server_manager_<OnApplicationQuit>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder server_manager_<OnApplicationQuit>d__5::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// server_manager server_manager_<OnApplicationQuit>d__5::<>4__this
	server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter server_manager_<OnApplicationQuit>d__5::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5, ___U3CU3E4__this_2)); }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// server_manager_<Start>d__3
struct  U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 
{
public:
	// System.Int32 server_manager_<Start>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder server_manager_<Start>d__3::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// server_manager server_manager_<Start>d__3::<>4__this
	server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter server_manager_<Start>d__3::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0, ___U3CU3E4__this_2)); }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// NativeWebSocket.WebSocketCloseEventHandler
struct  WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketErrorEventHandler
struct  WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory_OnCloseCallback
struct  OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory_OnErrorCallback
struct  OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory_OnMessageCallback
struct  OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory_OnOpenCallback
struct  OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketInvalidArgumentException
struct  WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577  : public WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4
{
public:

public:
};


// NativeWebSocket.WebSocketInvalidStateException
struct  WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D  : public WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4
{
public:

public:
};


// NativeWebSocket.WebSocketMessageEventHandler
struct  WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketOpenEventHandler
struct  WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketUnexpectedException
struct  WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45  : public WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// click_handlers_function_parameter
struct  function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
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


// UnityEngine.CanvasGroup
struct  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CameraControl
struct  CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 CameraControl::LastPanPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LastPanPosition_4;
	// System.Int32 CameraControl::Speed
	int32_t ___Speed_5;

public:
	inline static int32_t get_offset_of_LastPanPosition_4() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___LastPanPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LastPanPosition_4() const { return ___LastPanPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LastPanPosition_4() { return &___LastPanPosition_4; }
	inline void set_LastPanPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LastPanPosition_4 = value;
	}

	inline static int32_t get_offset_of_Speed_5() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___Speed_5)); }
	inline int32_t get_Speed_5() const { return ___Speed_5; }
	inline int32_t* get_address_of_Speed_5() { return &___Speed_5; }
	inline void set_Speed_5(int32_t value)
	{
		___Speed_5 = value;
	}
};


// MainThreadUtil
struct  MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields
{
public:
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___U3CsynchronizationContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsynchronizationContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields, ___U3CsynchronizationContextU3Ek__BackingField_5)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_U3CsynchronizationContextU3Ek__BackingField_5() const { return ___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_U3CsynchronizationContextU3Ek__BackingField_5() { return &___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline void set_U3CsynchronizationContextU3Ek__BackingField_5(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___U3CsynchronizationContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsynchronizationContextU3Ek__BackingField_5), (void*)value);
	}
};


// MapGenerator
struct  MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager MapGenerator::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// UnityEngine.GameObject MapGenerator::ground
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ground_5;
	// System.Int32 MapGenerator::width
	int32_t ___width_6;
	// System.String MapGenerator::baseName
	String_t* ___baseName_7;
	// System.Single MapGenerator::xScale
	float ___xScale_8;
	// System.Single MapGenerator::yScale
	float ___yScale_9;
	// System.Single MapGenerator::zScale
	float ___zScale_10;
	// System.String MapGenerator::currentSelected
	String_t* ___currentSelected_11;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_ground_5() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___ground_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ground_5() const { return ___ground_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ground_5() { return &___ground_5; }
	inline void set_ground_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ground_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ground_5), (void*)value);
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___width_6)); }
	inline int32_t get_width_6() const { return ___width_6; }
	inline int32_t* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(int32_t value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_baseName_7() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___baseName_7)); }
	inline String_t* get_baseName_7() const { return ___baseName_7; }
	inline String_t** get_address_of_baseName_7() { return &___baseName_7; }
	inline void set_baseName_7(String_t* value)
	{
		___baseName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseName_7), (void*)value);
	}

	inline static int32_t get_offset_of_xScale_8() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___xScale_8)); }
	inline float get_xScale_8() const { return ___xScale_8; }
	inline float* get_address_of_xScale_8() { return &___xScale_8; }
	inline void set_xScale_8(float value)
	{
		___xScale_8 = value;
	}

	inline static int32_t get_offset_of_yScale_9() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___yScale_9)); }
	inline float get_yScale_9() const { return ___yScale_9; }
	inline float* get_address_of_yScale_9() { return &___yScale_9; }
	inline void set_yScale_9(float value)
	{
		___yScale_9 = value;
	}

	inline static int32_t get_offset_of_zScale_10() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___zScale_10)); }
	inline float get_zScale_10() const { return ___zScale_10; }
	inline float* get_address_of_zScale_10() { return &___zScale_10; }
	inline void set_zScale_10(float value)
	{
		___zScale_10 = value;
	}

	inline static int32_t get_offset_of_currentSelected_11() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___currentSelected_11)); }
	inline String_t* get_currentSelected_11() const { return ___currentSelected_11; }
	inline String_t** get_address_of_currentSelected_11() { return &___currentSelected_11; }
	inline void set_currentSelected_11(String_t* value)
	{
		___currentSelected_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSelected_11), (void*)value);
	}
};


// PanZoom
struct  PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera PanZoom::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_10;
	// UnityEngine.Vector3 PanZoom::lastPanPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPanPosition_11;
	// System.Int32 PanZoom::panFingerId
	int32_t ___panFingerId_12;
	// System.Boolean PanZoom::wasZoomingLastFrame
	bool ___wasZoomingLastFrame_13;
	// UnityEngine.Vector2[] PanZoom::lastZoomPositions
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___lastZoomPositions_14;

public:
	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC, ___cam_10)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_10() const { return ___cam_10; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastPanPosition_11() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC, ___lastPanPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPanPosition_11() const { return ___lastPanPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPanPosition_11() { return &___lastPanPosition_11; }
	inline void set_lastPanPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPanPosition_11 = value;
	}

	inline static int32_t get_offset_of_panFingerId_12() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC, ___panFingerId_12)); }
	inline int32_t get_panFingerId_12() const { return ___panFingerId_12; }
	inline int32_t* get_address_of_panFingerId_12() { return &___panFingerId_12; }
	inline void set_panFingerId_12(int32_t value)
	{
		___panFingerId_12 = value;
	}

	inline static int32_t get_offset_of_wasZoomingLastFrame_13() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC, ___wasZoomingLastFrame_13)); }
	inline bool get_wasZoomingLastFrame_13() const { return ___wasZoomingLastFrame_13; }
	inline bool* get_address_of_wasZoomingLastFrame_13() { return &___wasZoomingLastFrame_13; }
	inline void set_wasZoomingLastFrame_13(bool value)
	{
		___wasZoomingLastFrame_13 = value;
	}

	inline static int32_t get_offset_of_lastZoomPositions_14() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC, ___lastZoomPositions_14)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_lastZoomPositions_14() const { return ___lastZoomPositions_14; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_lastZoomPositions_14() { return &___lastZoomPositions_14; }
	inline void set_lastZoomPositions_14(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___lastZoomPositions_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastZoomPositions_14), (void*)value);
	}
};

struct PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields
{
public:
	// System.Single PanZoom::PanSpeed
	float ___PanSpeed_4;
	// System.Single PanZoom::ZoomSpeedTouch
	float ___ZoomSpeedTouch_5;
	// System.Single PanZoom::ZoomSpeedMouse
	float ___ZoomSpeedMouse_6;
	// System.Single[] PanZoom::BoundsX
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___BoundsX_7;
	// System.Single[] PanZoom::BoundsZ
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___BoundsZ_8;
	// System.Single[] PanZoom::ZoomBounds
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___ZoomBounds_9;

public:
	inline static int32_t get_offset_of_PanSpeed_4() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___PanSpeed_4)); }
	inline float get_PanSpeed_4() const { return ___PanSpeed_4; }
	inline float* get_address_of_PanSpeed_4() { return &___PanSpeed_4; }
	inline void set_PanSpeed_4(float value)
	{
		___PanSpeed_4 = value;
	}

	inline static int32_t get_offset_of_ZoomSpeedTouch_5() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___ZoomSpeedTouch_5)); }
	inline float get_ZoomSpeedTouch_5() const { return ___ZoomSpeedTouch_5; }
	inline float* get_address_of_ZoomSpeedTouch_5() { return &___ZoomSpeedTouch_5; }
	inline void set_ZoomSpeedTouch_5(float value)
	{
		___ZoomSpeedTouch_5 = value;
	}

	inline static int32_t get_offset_of_ZoomSpeedMouse_6() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___ZoomSpeedMouse_6)); }
	inline float get_ZoomSpeedMouse_6() const { return ___ZoomSpeedMouse_6; }
	inline float* get_address_of_ZoomSpeedMouse_6() { return &___ZoomSpeedMouse_6; }
	inline void set_ZoomSpeedMouse_6(float value)
	{
		___ZoomSpeedMouse_6 = value;
	}

	inline static int32_t get_offset_of_BoundsX_7() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___BoundsX_7)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_BoundsX_7() const { return ___BoundsX_7; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_BoundsX_7() { return &___BoundsX_7; }
	inline void set_BoundsX_7(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___BoundsX_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoundsX_7), (void*)value);
	}

	inline static int32_t get_offset_of_BoundsZ_8() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___BoundsZ_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_BoundsZ_8() const { return ___BoundsZ_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_BoundsZ_8() { return &___BoundsZ_8; }
	inline void set_BoundsZ_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___BoundsZ_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoundsZ_8), (void*)value);
	}

	inline static int32_t get_offset_of_ZoomBounds_9() { return static_cast<int32_t>(offsetof(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields, ___ZoomBounds_9)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_ZoomBounds_9() const { return ___ZoomBounds_9; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_ZoomBounds_9() { return &___ZoomBounds_9; }
	inline void set_ZoomBounds_9(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___ZoomBounds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZoomBounds_9), (void*)value);
	}
};


// Tile
struct  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager Tile::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// System.Boolean Tile::walkable
	bool ___walkable_5;
	// System.Boolean Tile::current
	bool ___current_6;
	// System.Boolean Tile::occupied
	bool ___occupied_7;
	// System.Boolean Tile::target
	bool ___target_8;
	// System.Boolean Tile::selectable
	bool ___selectable_9;
	// System.Collections.Generic.List`1<Tile> Tile::adjacencyList
	List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * ___adjacencyList_10;
	// System.Boolean Tile::visited
	bool ___visited_11;
	// Tile Tile::parent
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___parent_12;
	// System.Int32 Tile::distance
	int32_t ___distance_13;
	// System.Single Tile::f
	float ___f_14;
	// System.Single Tile::g
	float ___g_15;
	// System.Single Tile::h
	float ___h_16;
	// UnityEngine.Color Tile::realColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___realColor_17;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_walkable_5() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___walkable_5)); }
	inline bool get_walkable_5() const { return ___walkable_5; }
	inline bool* get_address_of_walkable_5() { return &___walkable_5; }
	inline void set_walkable_5(bool value)
	{
		___walkable_5 = value;
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___current_6)); }
	inline bool get_current_6() const { return ___current_6; }
	inline bool* get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(bool value)
	{
		___current_6 = value;
	}

	inline static int32_t get_offset_of_occupied_7() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___occupied_7)); }
	inline bool get_occupied_7() const { return ___occupied_7; }
	inline bool* get_address_of_occupied_7() { return &___occupied_7; }
	inline void set_occupied_7(bool value)
	{
		___occupied_7 = value;
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___target_8)); }
	inline bool get_target_8() const { return ___target_8; }
	inline bool* get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(bool value)
	{
		___target_8 = value;
	}

	inline static int32_t get_offset_of_selectable_9() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___selectable_9)); }
	inline bool get_selectable_9() const { return ___selectable_9; }
	inline bool* get_address_of_selectable_9() { return &___selectable_9; }
	inline void set_selectable_9(bool value)
	{
		___selectable_9 = value;
	}

	inline static int32_t get_offset_of_adjacencyList_10() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___adjacencyList_10)); }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * get_adjacencyList_10() const { return ___adjacencyList_10; }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 ** get_address_of_adjacencyList_10() { return &___adjacencyList_10; }
	inline void set_adjacencyList_10(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * value)
	{
		___adjacencyList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adjacencyList_10), (void*)value);
	}

	inline static int32_t get_offset_of_visited_11() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___visited_11)); }
	inline bool get_visited_11() const { return ___visited_11; }
	inline bool* get_address_of_visited_11() { return &___visited_11; }
	inline void set_visited_11(bool value)
	{
		___visited_11 = value;
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___parent_12)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_parent_12() const { return ___parent_12; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_12), (void*)value);
	}

	inline static int32_t get_offset_of_distance_13() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___distance_13)); }
	inline int32_t get_distance_13() const { return ___distance_13; }
	inline int32_t* get_address_of_distance_13() { return &___distance_13; }
	inline void set_distance_13(int32_t value)
	{
		___distance_13 = value;
	}

	inline static int32_t get_offset_of_f_14() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___f_14)); }
	inline float get_f_14() const { return ___f_14; }
	inline float* get_address_of_f_14() { return &___f_14; }
	inline void set_f_14(float value)
	{
		___f_14 = value;
	}

	inline static int32_t get_offset_of_g_15() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___g_15)); }
	inline float get_g_15() const { return ___g_15; }
	inline float* get_address_of_g_15() { return &___g_15; }
	inline void set_g_15(float value)
	{
		___g_15 = value;
	}

	inline static int32_t get_offset_of_h_16() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___h_16)); }
	inline float get_h_16() const { return ___h_16; }
	inline float* get_address_of_h_16() { return &___h_16; }
	inline void set_h_16(float value)
	{
		___h_16 = value;
	}

	inline static int32_t get_offset_of_realColor_17() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___realColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_realColor_17() const { return ___realColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_realColor_17() { return &___realColor_17; }
	inline void set_realColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___realColor_17 = value;
	}
};


// TileMove
struct  TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Tile> TileMove::selectableTiles
	List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * ___selectableTiles_4;
	// UnityEngine.GameObject[] TileMove::tiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tiles_5;
	// System.Collections.Generic.Stack`1<Tile> TileMove::path
	Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 * ___path_6;
	// Tile TileMove::currentTile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___currentTile_7;
	// System.Boolean TileMove::moving
	bool ___moving_8;
	// System.Int32 TileMove::move
	int32_t ___move_9;
	// System.Single TileMove::jumpHeight
	float ___jumpHeight_10;
	// System.Single TileMove::moveSpeed
	float ___moveSpeed_11;
	// UnityEngine.Vector3 TileMove::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_12;
	// UnityEngine.Vector3 TileMove::heading
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___heading_13;
	// System.Single TileMove::halfHeight
	float ___halfHeight_14;
	// Tile TileMove::actualTargetTile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___actualTargetTile_15;

public:
	inline static int32_t get_offset_of_selectableTiles_4() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___selectableTiles_4)); }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * get_selectableTiles_4() const { return ___selectableTiles_4; }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 ** get_address_of_selectableTiles_4() { return &___selectableTiles_4; }
	inline void set_selectableTiles_4(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * value)
	{
		___selectableTiles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectableTiles_4), (void*)value);
	}

	inline static int32_t get_offset_of_tiles_5() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___tiles_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_tiles_5() const { return ___tiles_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_tiles_5() { return &___tiles_5; }
	inline void set_tiles_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___tiles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_5), (void*)value);
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___path_6)); }
	inline Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 * get_path_6() const { return ___path_6; }
	inline Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 ** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 * value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentTile_7() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___currentTile_7)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_currentTile_7() const { return ___currentTile_7; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_currentTile_7() { return &___currentTile_7; }
	inline void set_currentTile_7(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___currentTile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTile_7), (void*)value);
	}

	inline static int32_t get_offset_of_moving_8() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___moving_8)); }
	inline bool get_moving_8() const { return ___moving_8; }
	inline bool* get_address_of_moving_8() { return &___moving_8; }
	inline void set_moving_8(bool value)
	{
		___moving_8 = value;
	}

	inline static int32_t get_offset_of_move_9() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___move_9)); }
	inline int32_t get_move_9() const { return ___move_9; }
	inline int32_t* get_address_of_move_9() { return &___move_9; }
	inline void set_move_9(int32_t value)
	{
		___move_9 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_10() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___jumpHeight_10)); }
	inline float get_jumpHeight_10() const { return ___jumpHeight_10; }
	inline float* get_address_of_jumpHeight_10() { return &___jumpHeight_10; }
	inline void set_jumpHeight_10(float value)
	{
		___jumpHeight_10 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_11() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___moveSpeed_11)); }
	inline float get_moveSpeed_11() const { return ___moveSpeed_11; }
	inline float* get_address_of_moveSpeed_11() { return &___moveSpeed_11; }
	inline void set_moveSpeed_11(float value)
	{
		___moveSpeed_11 = value;
	}

	inline static int32_t get_offset_of_velocity_12() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___velocity_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_12() const { return ___velocity_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_12() { return &___velocity_12; }
	inline void set_velocity_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_12 = value;
	}

	inline static int32_t get_offset_of_heading_13() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___heading_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_heading_13() const { return ___heading_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_heading_13() { return &___heading_13; }
	inline void set_heading_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___heading_13 = value;
	}

	inline static int32_t get_offset_of_halfHeight_14() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___halfHeight_14)); }
	inline float get_halfHeight_14() const { return ___halfHeight_14; }
	inline float* get_address_of_halfHeight_14() { return &___halfHeight_14; }
	inline void set_halfHeight_14(float value)
	{
		___halfHeight_14 = value;
	}

	inline static int32_t get_offset_of_actualTargetTile_15() { return static_cast<int32_t>(offsetof(TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6, ___actualTargetTile_15)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_actualTargetTile_15() const { return ___actualTargetTile_15; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_actualTargetTile_15() { return &___actualTargetTile_15; }
	inline void set_actualTargetTile_15(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___actualTargetTile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualTargetTile_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// add_character
struct  add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager add_character::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// UnityEngine.GameObject add_character::ninja
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ninja_5;
	// System.String[] add_character::v
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___v_6;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_ninja_5() { return static_cast<int32_t>(offsetof(add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE, ___ninja_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ninja_5() const { return ___ninja_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ninja_5() { return &___ninja_5; }
	inline void set_ninja_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ninja_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ninja_5), (void*)value);
	}

	inline static int32_t get_offset_of_v_6() { return static_cast<int32_t>(offsetof(add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE, ___v_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_v_6() const { return ___v_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_v_6() { return &___v_6; }
	inline void set_v_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___v_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v_6), (void*)value);
	}
};


// change_button
struct  change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite change_button::spriteOff
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___spriteOff_4;
	// UnityEngine.Sprite change_button::spriteOn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___spriteOn_5;
	// UnityEngine.UI.Button change_button::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_6;

public:
	inline static int32_t get_offset_of_spriteOff_4() { return static_cast<int32_t>(offsetof(change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C, ___spriteOff_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_spriteOff_4() const { return ___spriteOff_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_spriteOff_4() { return &___spriteOff_4; }
	inline void set_spriteOff_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___spriteOff_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteOff_4), (void*)value);
	}

	inline static int32_t get_offset_of_spriteOn_5() { return static_cast<int32_t>(offsetof(change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C, ___spriteOn_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_spriteOn_5() const { return ___spriteOn_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_spriteOn_5() { return &___spriteOn_5; }
	inline void set_spriteOn_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___spriteOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteOn_5), (void*)value);
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C, ___button_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_6() const { return ___button_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_6), (void*)value);
	}
};


// change_scene
struct  change_scene_t3B232315E5290872C93C10178DAB37744D050D83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// character_selection
struct  character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager character_selection::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// UnityEngine.GameObject[] character_selection::characters
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___characters_5;
	// System.Int32 character_selection::selectedCharacter
	int32_t ___selectedCharacter_6;
	// civ_description character_selection::description
	civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * ___description_7;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_characters_5() { return static_cast<int32_t>(offsetof(character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D, ___characters_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_characters_5() const { return ___characters_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_characters_5() { return &___characters_5; }
	inline void set_characters_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___characters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characters_5), (void*)value);
	}

	inline static int32_t get_offset_of_selectedCharacter_6() { return static_cast<int32_t>(offsetof(character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D, ___selectedCharacter_6)); }
	inline int32_t get_selectedCharacter_6() const { return ___selectedCharacter_6; }
	inline int32_t* get_address_of_selectedCharacter_6() { return &___selectedCharacter_6; }
	inline void set_selectedCharacter_6(int32_t value)
	{
		___selectedCharacter_6 = value;
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D, ___description_7)); }
	inline civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * get_description_7() const { return ___description_7; }
	inline civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 ** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_7), (void*)value);
	}
};


// civ_description
struct  civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text civ_description::descriptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___descriptionText_4;
	// System.Int32 civ_description::selectedCiv
	int32_t ___selectedCiv_5;

public:
	inline static int32_t get_offset_of_descriptionText_4() { return static_cast<int32_t>(offsetof(civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2, ___descriptionText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_descriptionText_4() const { return ___descriptionText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_descriptionText_4() { return &___descriptionText_4; }
	inline void set_descriptionText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___descriptionText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_4), (void*)value);
	}

	inline static int32_t get_offset_of_selectedCiv_5() { return static_cast<int32_t>(offsetof(civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2, ___selectedCiv_5)); }
	inline int32_t get_selectedCiv_5() const { return ___selectedCiv_5; }
	inline int32_t* get_address_of_selectedCiv_5() { return &___selectedCiv_5; }
	inline void set_selectedCiv_5(int32_t value)
	{
		___selectedCiv_5 = value;
	}
};


// click_handlers
struct  click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager click_handlers::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// UnityEngine.GameObject click_handlers::localGameButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localGameButton_5;
	// UnityEngine.GameObject click_handlers::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_6;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_localGameButton_5() { return static_cast<int32_t>(offsetof(click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86, ___localGameButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localGameButton_5() const { return ___localGameButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localGameButton_5() { return &___localGameButton_5; }
	inline void set_localGameButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localGameButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localGameButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86, ___canvas_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_6() const { return ___canvas_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_6), (void*)value);
	}
};


// import_manager
struct  import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// server_manager import_manager::serverManager
	server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * ___serverManager_4;

public:
	inline static int32_t get_offset_of_serverManager_4() { return static_cast<int32_t>(offsetof(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304, ___serverManager_4)); }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * get_serverManager_4() const { return ___serverManager_4; }
	inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 ** get_address_of_serverManager_4() { return &___serverManager_4; }
	inline void set_serverManager_4(server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * value)
	{
		___serverManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverManager_4), (void*)value);
	}
};


// map_manager
struct  map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager map_manager::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// System.Int32 map_manager::mapWidth
	int32_t ___mapWidth_5;
	// UnityEngine.GameObject map_manager::water
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___water_6;
	// UnityEngine.GameObject map_manager::vikingLand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___vikingLand_7;
	// UnityEngine.GameObject map_manager::greeceLand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___greeceLand_8;
	// UnityEngine.GameObject map_manager::asianLand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asianLand_9;
	// System.String map_manager::currentSelected
	String_t* ___currentSelected_10;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mapWidth_5() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___mapWidth_5)); }
	inline int32_t get_mapWidth_5() const { return ___mapWidth_5; }
	inline int32_t* get_address_of_mapWidth_5() { return &___mapWidth_5; }
	inline void set_mapWidth_5(int32_t value)
	{
		___mapWidth_5 = value;
	}

	inline static int32_t get_offset_of_water_6() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___water_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_water_6() const { return ___water_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_water_6() { return &___water_6; }
	inline void set_water_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___water_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___water_6), (void*)value);
	}

	inline static int32_t get_offset_of_vikingLand_7() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___vikingLand_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_vikingLand_7() const { return ___vikingLand_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_vikingLand_7() { return &___vikingLand_7; }
	inline void set_vikingLand_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___vikingLand_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vikingLand_7), (void*)value);
	}

	inline static int32_t get_offset_of_greeceLand_8() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___greeceLand_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_greeceLand_8() const { return ___greeceLand_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_greeceLand_8() { return &___greeceLand_8; }
	inline void set_greeceLand_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___greeceLand_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greeceLand_8), (void*)value);
	}

	inline static int32_t get_offset_of_asianLand_9() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___asianLand_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asianLand_9() const { return ___asianLand_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asianLand_9() { return &___asianLand_9; }
	inline void set_asianLand_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asianLand_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asianLand_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentSelected_10() { return static_cast<int32_t>(offsetof(map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27, ___currentSelected_10)); }
	inline String_t* get_currentSelected_10() const { return ___currentSelected_10; }
	inline String_t** get_address_of_currentSelected_10() { return &___currentSelected_10; }
	inline void set_currentSelected_10(String_t* value)
	{
		___currentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSelected_10), (void*)value);
	}
};


// match_manager
struct  match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// import_manager match_manager::import_manager
	import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * ___import_manager_4;
	// System.Int32 match_manager::matchId
	int32_t ___matchId_5;
	// System.Boolean match_manager::isHost
	bool ___isHost_6;
	// System.String match_manager::type
	String_t* ___type_7;
	// System.Int32 match_manager::map
	int32_t ___map_8;
	// System.String match_manager::playerCivilization
	String_t* ___playerCivilization_9;
	// System.String match_manager::championName
	String_t* ___championName_10;
	// System.Int32 match_manager::numberOfPlayers
	int32_t ___numberOfPlayers_11;
	// System.Collections.Generic.List`1<System.Boolean> match_manager::isReady
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___isReady_12;

public:
	inline static int32_t get_offset_of_import_manager_4() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___import_manager_4)); }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * get_import_manager_4() const { return ___import_manager_4; }
	inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 ** get_address_of_import_manager_4() { return &___import_manager_4; }
	inline void set_import_manager_4(import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * value)
	{
		___import_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___import_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_matchId_5() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___matchId_5)); }
	inline int32_t get_matchId_5() const { return ___matchId_5; }
	inline int32_t* get_address_of_matchId_5() { return &___matchId_5; }
	inline void set_matchId_5(int32_t value)
	{
		___matchId_5 = value;
	}

	inline static int32_t get_offset_of_isHost_6() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___isHost_6)); }
	inline bool get_isHost_6() const { return ___isHost_6; }
	inline bool* get_address_of_isHost_6() { return &___isHost_6; }
	inline void set_isHost_6(bool value)
	{
		___isHost_6 = value;
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_7), (void*)value);
	}

	inline static int32_t get_offset_of_map_8() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___map_8)); }
	inline int32_t get_map_8() const { return ___map_8; }
	inline int32_t* get_address_of_map_8() { return &___map_8; }
	inline void set_map_8(int32_t value)
	{
		___map_8 = value;
	}

	inline static int32_t get_offset_of_playerCivilization_9() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___playerCivilization_9)); }
	inline String_t* get_playerCivilization_9() const { return ___playerCivilization_9; }
	inline String_t** get_address_of_playerCivilization_9() { return &___playerCivilization_9; }
	inline void set_playerCivilization_9(String_t* value)
	{
		___playerCivilization_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCivilization_9), (void*)value);
	}

	inline static int32_t get_offset_of_championName_10() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___championName_10)); }
	inline String_t* get_championName_10() const { return ___championName_10; }
	inline String_t** get_address_of_championName_10() { return &___championName_10; }
	inline void set_championName_10(String_t* value)
	{
		___championName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___championName_10), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfPlayers_11() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___numberOfPlayers_11)); }
	inline int32_t get_numberOfPlayers_11() const { return ___numberOfPlayers_11; }
	inline int32_t* get_address_of_numberOfPlayers_11() { return &___numberOfPlayers_11; }
	inline void set_numberOfPlayers_11(int32_t value)
	{
		___numberOfPlayers_11 = value;
	}

	inline static int32_t get_offset_of_isReady_12() { return static_cast<int32_t>(offsetof(match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57, ___isReady_12)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_isReady_12() const { return ___isReady_12; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_isReady_12() { return &___isReady_12; }
	inline void set_isReady_12(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___isReady_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isReady_12), (void*)value);
	}
};


// menu_manager
struct  menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] menu_manager::groups
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___groups_4;
	// UnityEngine.GameObject menu_manager::currentGroup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentGroup_5;

public:
	inline static int32_t get_offset_of_groups_4() { return static_cast<int32_t>(offsetof(menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08, ___groups_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_groups_4() const { return ___groups_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_groups_4() { return &___groups_4; }
	inline void set_groups_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___groups_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groups_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentGroup_5() { return static_cast<int32_t>(offsetof(menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08, ___currentGroup_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentGroup_5() const { return ___currentGroup_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentGroup_5() { return &___currentGroup_5; }
	inline void set_currentGroup_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGroup_5), (void*)value);
	}
};


// menu_scene
struct  menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.CanvasGroup menu_scene::fadeGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___fadeGroup_4;
	// System.Single menu_scene::fadeInSpeed
	float ___fadeInSpeed_5;

public:
	inline static int32_t get_offset_of_fadeGroup_4() { return static_cast<int32_t>(offsetof(menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93, ___fadeGroup_4)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_fadeGroup_4() const { return ___fadeGroup_4; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_fadeGroup_4() { return &___fadeGroup_4; }
	inline void set_fadeGroup_4(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___fadeGroup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeGroup_4), (void*)value);
	}

	inline static int32_t get_offset_of_fadeInSpeed_5() { return static_cast<int32_t>(offsetof(menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93, ___fadeInSpeed_5)); }
	inline float get_fadeInSpeed_5() const { return ___fadeInSpeed_5; }
	inline float* get_address_of_fadeInSpeed_5() { return &___fadeInSpeed_5; }
	inline void set_fadeInSpeed_5(float value)
	{
		___fadeInSpeed_5 = value;
	}
};


// panel_toggle
struct  panel_toggle_tAD76B8C9E2E12D4547C69066DCF48FBE2B964C15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject panel_toggle::panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_4;

public:
	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(panel_toggle_tAD76B8C9E2E12D4547C69066DCF48FBE2B964C15, ___panel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_4() const { return ___panel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_4), (void*)value);
	}
};


// preload
struct  preload_t0B52930C1F391272030E369F9367669C70EC5857  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.CanvasGroup preload::fadeGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___fadeGroup_4;
	// System.Single preload::loadTime
	float ___loadTime_5;
	// System.Single preload::minimumTextTime
	float ___minimumTextTime_6;

public:
	inline static int32_t get_offset_of_fadeGroup_4() { return static_cast<int32_t>(offsetof(preload_t0B52930C1F391272030E369F9367669C70EC5857, ___fadeGroup_4)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_fadeGroup_4() const { return ___fadeGroup_4; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_fadeGroup_4() { return &___fadeGroup_4; }
	inline void set_fadeGroup_4(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___fadeGroup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeGroup_4), (void*)value);
	}

	inline static int32_t get_offset_of_loadTime_5() { return static_cast<int32_t>(offsetof(preload_t0B52930C1F391272030E369F9367669C70EC5857, ___loadTime_5)); }
	inline float get_loadTime_5() const { return ___loadTime_5; }
	inline float* get_address_of_loadTime_5() { return &___loadTime_5; }
	inline void set_loadTime_5(float value)
	{
		___loadTime_5 = value;
	}

	inline static int32_t get_offset_of_minimumTextTime_6() { return static_cast<int32_t>(offsetof(preload_t0B52930C1F391272030E369F9367669C70EC5857, ___minimumTextTime_6)); }
	inline float get_minimumTextTime_6() const { return ___minimumTextTime_6; }
	inline float* get_address_of_minimumTextTime_6() { return &___minimumTextTime_6; }
	inline void set_minimumTextTime_6(float value)
	{
		___minimumTextTime_6 = value;
	}
};


// server_manager
struct  server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String server_manager::url
	String_t* ___url_4;
	// NativeWebSocket.WebSocket server_manager::webSocket
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * ___webSocket_5;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}

	inline static int32_t get_offset_of_webSocket_5() { return static_cast<int32_t>(offsetof(server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559, ___webSocket_5)); }
	inline WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * get_webSocket_5() const { return ___webSocket_5; }
	inline WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF ** get_address_of_webSocket_5() { return &___webSocket_5; }
	inline void set_webSocket_5(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * value)
	{
		___webSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webSocket_5), (void*)value);
	}
};


// PlayerMove
struct  PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B  : public TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6
{
public:
	// UnityEngine.Vector3 PlayerMove::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_16;

public:
	inline static int32_t get_offset_of_targetPosition_16() { return static_cast<int32_t>(offsetof(PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B, ___targetPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_16() const { return ___targetPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_16() { return &___targetPosition_16; }
	inline void set_targetPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_16 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
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
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
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


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
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


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
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
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[0...,0...]
struct StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90  : public RuntimeArray
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
	inline String_t* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, bool ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<server_manager/<Start>d__3>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<server_manager/<OnApplicationQuit>d__5>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,server_manager/<OnApplicationQuit>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,server_manager/<Start>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * ___stateMachine1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void CameraControl::PanCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_PanCamera_mCDC498BBBFCE95C867292510EA66EB580413ADE4 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPanPosition0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * GameObject_AddComponent_TisMainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_m04D9281CFBB228EDD05CA95A36CD44EBD9908889 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8_inline (MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * ___value0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method);
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m25C18B2CA7FED1037D7E391BB93CB863C2D05DDF (U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0_inline (const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.String MapGenerator::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MapGenerator_get_current_mE0C21DD6C8E7B36E15FE38AF5B479B236D448C74_inline (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method);
// System.Void import_manager::run_function(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<import_manager>()
inline import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void import_manager::run_function_all(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method);
// System.Void MapGenerator::create_ground_area(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_area_m365485C7A4BA3F03F6F23D1B30736D6509AB4DF7 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void MapGenerator::create_ground_strip(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_strip_m2853E64DF8D46CAC3459B1D27AA6DC600CCCDE0B (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method);
// System.Void MapGenerator::create_ground(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_m2FBE80337CC38AD868AA6ED78EE8149DD874F5D0 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void PanZoom::HandleTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_HandleTouch_m135A2CC1BF9BBE56C66F359460C751120913F585 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method);
// System.Void PanZoom::HandleMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_HandleMouse_m3E124E5D1EB3589B36885630B9BFDC52DECFEF64 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void PanZoom::PanCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPanPosition0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void PanZoom::ZoomCamera(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, float ___offset0, float ___speed1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void TileMove::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_Init_mF6EFB6C59A44869835B49E29C25FAF8178540CA1 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, const RuntimeMethod* method);
// System.Void TileMove::FindSelectableTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_FindSelectableTiles_mD6467E060BB786849F6947364722735BC93CEB77 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Tile>()
inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerMove::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mF4FC8BB364D0D99947A3A1299618E22711F43A00 (PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___location0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void TileMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove__ctor_mC2FCF95F01FF0ED05028685693C2DD7C29A21803 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tile>::Clear()
inline void List_1_Clear_m3F9154AE241FF89420C9F71D10F157332977D914 (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Tile::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Reset_mE01DB3A5A4B301E1F821CA2954264BFA94D1295A (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void Tile::CheckTile(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Physics_OverlapBox_mF8C11D75C562F5E7FB21C8768799157DBDCED187 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___halfExtents1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tile>::Add(!0)
inline void List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Tile>::.ctor()
inline void List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557 (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// Tile TileMove::GetTargetTile(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * TileMove_GetTargetTile_m8E7B3A722C56ACD967691822219ED8C453D45B01 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Tile>()
inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * GameObject_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m822828766798E78DA212A293BDB5FA867910E97A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Tile::FindNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_FindNeighbors_mC4318A7E8F1C02D2892ABEE87594F9877D32DF4B (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method);
// System.Void TileMove::ComputeAdjacencyLists(System.Single,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_ComputeAdjacencyLists_mA1A1095FE10BA48D0DDF0E00A18F8734EDB1A7EF (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, float ___jumpHeight0, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___target1, const RuntimeMethod* method);
// System.Void TileMove::GetCurrentTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_GetCurrentTile_m21C8092649C90EB5465F5B9E140E2E2486A2E343 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Tile>::.ctor()
inline void Queue_1__ctor_m44301B82B04D5E67F22890FCF9E968923FE63433 (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Tile>::Enqueue(!0)
inline void Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155 (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C *, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<Tile>::Dequeue()
inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * Queue_1_Dequeue_mF79AEE6EA455223A5D2F26F223A964989E81B886 (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * __this, const RuntimeMethod* method)
{
	return ((  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * (*) (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Tile>::GetEnumerator()
inline Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3 (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Tile>::get_Current()
inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_inline (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	return ((  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Tile>::MoveNext()
inline bool Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4 (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Tile>::Dispose()
inline void Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Tile>::get_Count()
inline int32_t Queue_1_get_Count_m4B943A787653AB40C12B4615AC2B96CEF3B94CE8_inline (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<Tile>::.ctor()
inline void Stack_1__ctor_m6DE69B997289FD908BDC3AB242659420FE6A007B (Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_mB90D56923CED905B3FBE6E132179810064DBEB45 (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_mB06747CEF8BCF94946EF6040A6ED6120F28684A5 (RuntimeObject* ___theWorker0, MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * ___awaiter1, const RuntimeMethod* method);
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mBC930FE44E9FCEB3B3C601BCF464AA0F4FE2621D (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method);
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m575DB1A02B0B664D913C34BB3AF6CDA1D13177BD (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_mD32F8EE139FC0DACA0494365FCAAB1D1042A74BE (const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m730D09849F3348C53DFBD13D11087DC309F6594B (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Add(!0,!1)
inline void Dictionary_2_Add_mE68F66BB3ADADE79EA04F793E81F297439C9E619 (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * __this, int32_t ___key0, WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D *, int32_t, WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m8F6BD9D4F38287BFD0418A293D7841C6FE401CBD (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_mAF9D57D7DAB0AE3A7C357C22D8D6F988726E4470 (int32_t ___instanceId0, const RuntimeMethod* method);
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m27B495AE83A0C1A53563001D6235701B326A5F3C (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m2870F3ADCB9941719ECCE485364DD18B7C94C68A (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_mA99D8066984D863D31CB0EC5BDD2695E7D7C86AF (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m6C194F60DACB41D10457B87FB7DDF8393B4504BD (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m1FDDA662BC3C5ACF65E31E8BA6456440AE0CC857 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m8435861190BA0913502E4F2CB6668D28B8D74759 (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mA813FFDAD52C0F04F3D72B63AC4945FA3A8D7058 (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m719389266B3DBD9607C62A6C0816A99BF33DD20F (int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m4781AA899CA720140DB1CD3E20B53D39AC90311A (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m5A7B0CBFBDAAF0140DC4CCEA0AFEACFF20240A8F (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_mAAF4DCAB80B5DA3FC6D987EBACC4EDC98FF964A3 (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m5897045C40CBE21B3FF3360ABA4873D604A09DD6 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mC94922F8B0616ED4006C1F4D3EC379031BCBE9D9 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m1F6F172A8E0B2C6DB6F27D155701CADCD9AB9E60 (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m04D2F3C77CC16A4E6BA8D239FF8283D20C2E7D0F (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m7AE4D6D65BC7DDB3294C44F82AE3C926F65033AA (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_mE1AB6C58ECCBAB9D9ED669926A9D9E2AE850E50B (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * ___callback0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Remove(!0)
inline bool Dictionary_2_Remove_m70A4CDAC856B2E9ECA7847197A68D49DA350B6CE (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mA274C20A0EC485F3F429A52E979CB4D36A87C712 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00 (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * __this, int32_t ___key0, WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D *, int32_t, WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m77D34834E711680B79EA10E9C1C3739D41BA05B5 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mDF086358568B866BFA7B69D306AD88CF7FD93199 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mB139B8723B7427C1EEC04AFCA4E81B6F39728094 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_mA0382E9E16C6F4BF024C23973494290C2635941D (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::.ctor()
inline void Dictionary_2__ctor_mEF5953D745A7A304B14644F1CDCEE808523B01A5 (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m4BCA0BBE54DB3FC3EFF6C0E4EB3682A0DD71C1C8 (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3 (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m4D502EA5397574620C4AC8E406FAA86AC09C9E81 (WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500 (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void add_character::add(System.String[],UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void add_character_add_m77BA86CEA099AAF8C991D25D25ADE0CB67AFEFA6 (add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___character1, const RuntimeMethod* method);
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void click_handlers::load_button(UnityEngine.GameObject,UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_load_button_m5693F13EE2D81FFCC88D05A9C4A9D48B834CA79E (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___button0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cavas1, String_t* ___clickAction2, const RuntimeMethod* method);
// System.Void click_handlers/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mDDC93C1D77EC1C2FC51A52E6E43BF9A866B4F3E3 (U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void click_handlers::detroy_menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_detroy_menu_m847D412BC025B299B1845C8B4EEED8D1264B155B (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<server_manager>()
inline server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * GameObject_GetComponent_Tisserver_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559_m88AD973A564B03CBDCEE9DA0F59A18776A432F56 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void server_manager::send(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_send_m3BAE5F09FCA8BD7AE05936363EA53E83658F5B23 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method);
// System.Int32 map_manager::near_ground_type(System.String[0...,0...],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* ___map0, String_t* ___type1, int32_t ___xCoordinate2, int32_t ___yCoordinate3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Int32 map_manager::not_near_ground_type(System.String[0...,0...],System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t map_manager_not_near_ground_type_mCB1ABF6FAB1FC9A68124EC97EBCC6DD72228AD51 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* ___map0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___set1, String_t* ___type2, int32_t ___xCoordinate3, int32_t ___yCoordinate4, const RuntimeMethod* method);
// System.String[0...,0...] map_manager::generate_map2(System.Int32,System.Int32,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* map_manager_generate_map2_m92515DB05AB05552DE70C20AF13A10C25F6C0AB1 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, int32_t ___width0, int32_t ___height1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___groundItems2, int32_t ___landPercentage3, int32_t ___seed4, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetUpperBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetUpperBound_m2A1E31C8CD49C3C21E240B6119E96772977F0834 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void map_manager::create_ground(System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_create_ground_m8CCDF9A6AC1FAC26A1CA26794F88E2CF5D94649D (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, float ___xPosition0, float ___zPosition1, String_t* ___prefabName2, const RuntimeMethod* method);
// System.String map_manager::get_current(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* map_manager_get_current_mA83B17A688B31912AE5D29D6ADEA3FC80BFD0064_inline (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_gshared)(__this, method);
}
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_m97AFBD113AE4629041678100C5A595F3529C7F7D (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
inline void List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, bool, const RuntimeMethod*))List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<PanZoom>()
inline PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * GameObject_GetComponent_TisPanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_mAE06080ECB5169182FED5E1E36946CE2830AB057 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void menu_manager::ChangeGroup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0 (menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___groupToActivate0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84 (const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<server_manager/<Start>d__3>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<server_manager/<OnApplicationQuit>d__5>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793_gshared)(__this, ___stateMachine0, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<server_manager/update_message>(System.String)
inline update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * JsonUtility_FromJson_Tisupdate_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_m1598824EE41C901EDFA7AA87C110A88A9F429789 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void server_manager/update_message::.ctor(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_message__ctor_mEFC19B434569A1352B60254742D38E1F77E6D62B (update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void server_manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_Start_mA776C5F0039ABA6BF0E008E5558340138F1421C3 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, const RuntimeMethod* method);
// System.Void server_manager::deliver_message(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_deliver_message_mC9ED449AA59784896D20134DE65A69CA9F3A0EA4 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9_inline (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m808C7AF3D1836C186578D38B452E3124D19965B6 (U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m219870D8C94173287514C0400033CBB3A95CEA8A (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mF9CC2D5BF9A411E072C012163D9BEA5599198798_inline (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void server_manager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCC93820B82666903629EC9BBD02B5A10995E4103 (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,server_manager/<OnApplicationQuit>d__5>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void server_manager/<OnApplicationQuit>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984 (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void server_manager/<OnApplicationQuit>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__5_SetStateMachine_m456E824D896A93D008AF4B8E552A4654C1AE5A1B (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m1809A890B2FE8ED19221EB9CBF348FEE8F19E115 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m3AD885B71B3C90F1F5EC1A7217BA12114F894194 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m89873FB704DC7FCF39F6F00B9FC75DFFE1258D4C (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m0DC8D3CE51CC45574ED5284BDF0F3189E976825F (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m5B4942CC7469E8DFE3EB0CAB0BFA1A36691C221C (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m0FEFFD504C35320464513739813DDB8BB2418892 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_mAF0BA6720A199F944A1F7AAE6CAE98A0C4EA5538 (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m430209598ED003FC2695D7151F96EE603EF19BF4 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,server_manager/<Start>d__3>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void server_manager/<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0 (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * __this, const RuntimeMethod* method);
// System.Void server_manager/<Start>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_SetStateMachine_m49A08F40F903110B0A8A5FDC5C832014138ED1C9 (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketConnect(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketClose(int32_t, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSendText(int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketGetState(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAllocate(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketFree(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnOpen(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnMessage(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnError(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnClose(Il2CppMethodPointer);
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
// System.Void CameraControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Update_m4BD3B811296B1A0E5C8FF3148DC11622A6430F6F (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LastPanPosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_LastPanPosition_4(L_1);
		// }
		return;
	}

IL_0014:
	{
		// else if (Input.GetMouseButton(0))
		bool L_2 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// PanCamera(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		CameraControl_PanCamera_mCDC498BBBFCE95C867292510EA66EB580413ADE4(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CameraControl::PanCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_PanCamera_mCDC498BBBFCE95C867292510EA66EB580413ADE4 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPanPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraControl_PanCamera_mCDC498BBBFCE95C867292510EA66EB580413ADE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 Offset = Camera.main.ScreenToViewportPoint(LastPanPosition - newPanPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_LastPanPosition_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___newPanPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 Move = new Vector3(Offset.x * Speed, 0, Offset.y * Speed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		int32_t L_7 = __this->get_Speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_y_3();
		int32_t L_10 = __this->get_Speed_5();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_6, (float)(((float)((float)L_7))))), (0.0f), ((float)il2cpp_codegen_multiply((float)L_9, (float)(((float)((float)L_10))))), /*hidden argument*/NULL);
		// transform.Translate(Move, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_11, L_12, 0, /*hidden argument*/NULL);
		// LastPanPosition = newPanPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___newPanPosition0;
		__this->set_LastPanPosition_4(L_13);
		// }
		return;
	}
}
// System.Void CameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl__ctor_m67DAD57065E2F985D5F050A4DDD3DB9B95548100 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// public int Speed = 10;
		__this->set_Speed_5(((int32_t)10));
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_0 = ((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8 (MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_0 = ___value0;
		((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908 (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_m26C55CDB6F21D413E6069E8A27C22DE05759106B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_Setup_m26C55CDB6F21D413E6069E8A27C22DE05759106B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new GameObject("MainThreadUtil")
		//     .AddComponent<MainThreadUtil>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral479625953694FC0583C3D8F93F44332026972846, /*hidden argument*/NULL);
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_1 = GameObject_AddComponent_TisMainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_m04D9281CFBB228EDD05CA95A36CD44EBD9908889(L_0, /*hidden argument*/GameObject_AddComponent_TisMainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_m04D9281CFBB228EDD05CA95A36CD44EBD9908889_RuntimeMethod_var);
		MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8_inline(L_1, /*hidden argument*/NULL);
		// synchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mBC930FE44E9FCEB3B3C601BCF464AA0F4FE2621D (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_Run_mBC930FE44E9FCEB3B3C601BCF464AA0F4FE2621D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * L_0 = (U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m25C18B2CA7FED1037D7E391BB93CB863C2D05DDF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * L_1 = V_0;
		RuntimeObject* L_2 = ___waitForUpdate0;
		L_1->set_waitForUpdate_0(L_2);
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0_inline(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * L_4 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m50FA6256E1E7A4F485243CFD944FC5E8522E31E0_RuntimeMethod_var), /*hidden argument*/NULL);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_m8AF95ACAAD2094819B05A1C0B2A88B4B03B8A891 (MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_Awake_m8AF95ACAAD2094819B05A1C0B2A88B4B03B8A891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_0, ((int32_t)61), /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_mB0FA4A0DC9BD696FF1FE09D392D3C8C50234734A (MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * __this, const RuntimeMethod* method)
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
// System.String MapGenerator::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapGenerator_get_current_mE0C21DD6C8E7B36E15FE38AF5B479B236D448C74 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	{
		// return currentSelected;
		String_t* L_0 = __this->get_currentSelected_11();
		return L_0;
	}
}
// System.Void MapGenerator::set_current(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_set_current_m49C451DE0241CB2EB46B0381238C6710719F5679 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___input0, const RuntimeMethod* method)
{
	{
		// this.currentSelected = input[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___input0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_currentSelected_11(L_2);
		// }
		return;
	}
}
// System.Void MapGenerator::unselect_tile(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_unselect_tile_m08D2DC094B6ECF049C1E600B8743C20927820704 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_unselect_tile_m08D2DC094B6ECF049C1E600B8743C20927820704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function(get_current(), "unselect", new string[0] { });
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		String_t* L_1 = MapGenerator_get_current_mE0C21DD6C8E7B36E15FE38AF5B479B236D448C74_inline(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, L_1, _stringLiteralA7AF098AEB356CEB5A3ADD3886207C8E24C72E4E, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_Start_m9DFED1E1FAA34D894424666A17FAEFF41E0F9102 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_Start_m9DFED1E1FAA34D894424666A17FAEFF41E0F9102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// }
		return;
	}
}
// System.Void MapGenerator::generate_map(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_generate_map_m4668EE329DD81CC1385B133729AB544BD43E6A89 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_generate_map_m4668EE329DD81CC1385B133729AB544BD43E6A89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function_all("Map", "create_ground_area", new string[4] {"0", "0", width.ToString(), width.ToString()});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		int32_t* L_5 = __this->get_address_of_width_6();
		String_t* L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_4;
		int32_t* L_8 = __this->get_address_of_width_6();
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC(L_0, _stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, _stringLiteralA55412FF9C119740DC17C582FACC4440FCF0968A, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::load_map(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_load_map_m5D85E282E916531FC73D4DFCA3798A05AF8384BB (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_load_map_m5D85E282E916531FC73D4DFCA3798A05AF8384BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// create_ground_area(new string[4] {"0", "0", width.ToString(), width.ToString()});
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		int32_t* L_4 = __this->get_address_of_width_6();
		String_t* L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_3;
		int32_t* L_7 = __this->get_address_of_width_6();
		String_t* L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		MapGenerator_create_ground_area_m365485C7A4BA3F03F6F23D1B30736D6509AB4DF7(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::create_ground_area(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_area_m365485C7A4BA3F03F6F23D1B30736D6509AB4DF7 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_create_ground_area_m365485C7A4BA3F03F6F23D1B30736D6509AB4DF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float xAxis = float.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		float L_3 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float zAxis = float.Parse(parameters[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___parameters0;
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// int length = int.Parse(parameters[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___parameters0;
		int32_t L_9 = 2;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// int width = int.Parse(parameters[3]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___parameters0;
		int32_t L_13 = 3;
		String_t* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// for (int i = 0; i < width; i++)
		V_4 = 0;
		goto IL_0061;
	}

IL_0029:
	{
		// zAxis++;
		float L_16 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_16, (float)(1.0f)));
		// create_ground_strip(new string[3] { xAxis.ToString(), zAxis.ToString(), length.ToString() });
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		String_t* L_19 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
		String_t* L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_20;
		String_t* L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_23);
		MapGenerator_create_ground_strip_m2853E64DF8D46CAC3459B1D27AA6DC600CCCDE0B(__this, L_22, /*hidden argument*/NULL);
		// for (int i = 0; i < width; i++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < width; i++)
		int32_t L_25 = V_4;
		int32_t L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapGenerator::create_ground_strip(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_strip_m2853E64DF8D46CAC3459B1D27AA6DC600CCCDE0B (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_create_ground_strip_m2853E64DF8D46CAC3459B1D27AA6DC600CCCDE0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float xAxis = float.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		float L_3 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float zAxis = float.Parse(parameters[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___parameters0;
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// int length = int.Parse(parameters[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___parameters0;
		int32_t L_9 = 2;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_004b;
	}

IL_001f:
	{
		// xAxis++;
		float L_12 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_12, (float)(1.0f)));
		// create_ground(new string[2] { xAxis.ToString(), zAxis.ToString() });
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		String_t* L_17 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		MapGenerator_create_ground_m2FBE80337CC38AD868AA6ED78EE8149DD874F5D0(__this, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004b:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapGenerator::create_ground(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_create_ground_m2FBE80337CC38AD868AA6ED78EE8149DD874F5D0 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_create_ground_m2FBE80337CC38AD868AA6ED78EE8149DD874F5D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xAxis = float.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		float L_3 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float zAxis = float.Parse(parameters[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___parameters0;
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// ground.name = baseName + "_" + xAxis.ToString() + "_0_" + zAxis.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_ground_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = __this->get_baseName_7();
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		ArrayElementTypeCheck (L_12, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		ArrayElementTypeCheck (L_15, _stringLiteral904A7CE8C394B97F74C2E640DC67ADF834259805);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral904A7CE8C394B97F74C2E640DC67ADF834259805);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		String_t* L_17 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_17);
		String_t* L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_18, /*hidden argument*/NULL);
		// Instantiate(ground, new Vector3(xAxis * xScale, 0, zAxis * zScale), Quaternion.identity); // create the tile
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_ground_5();
		float L_20 = V_0;
		float L_21 = __this->get_xScale_8();
		float L_22 = V_1;
		float L_23 = __this->get_zScale_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (0.0f), ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_19, L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator__ctor_mB9C58913280E7537C3EB6A1DACEDE418B41DFE01 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator__ctor_mB9C58913280E7537C3EB6A1DACEDE418B41DFE01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int width = 10;
		__this->set_width_6(((int32_t)10));
		// public string baseName = "ground";
		__this->set_baseName_7(_stringLiteral8F613818B9E75C9DAF880518950A7F42921E3FA9);
		// public float xScale = 30;
		__this->set_xScale_8((30.0f));
		// public float yScale = 1;
		__this->set_yScale_9((1.0f));
		// public float zScale = 30;
		__this->set_zScale_10((30.0f));
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
// System.Void PanZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_Awake_mCECFF4A00F6F3EB9738C867218F193695061D5D8 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom_Awake_mCECFF4A00F6F3EB9738C867218F193695061D5D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_cam_10(L_0);
		// }
		return;
	}
}
// System.Void PanZoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_Update_mC28C10FEF6CBBD5949A572841F2BA90DAD09D363 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method)
{
	{
		// if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer)
		bool L_0 = Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)17))))
		{
			goto IL_0017;
		}
	}
	{
		// HandleTouch();
		PanZoom_HandleTouch_m135A2CC1BF9BBE56C66F359460C751120913F585(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0017:
	{
		// HandleMouse();
		PanZoom_HandleMouse_m3E124E5D1EB3589B36885630B9BFDC52DECFEF64(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanZoom::HandleTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_HandleTouch_m135A2CC1BF9BBE56C66F359460C751120913F585 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom_HandleTouch_m135A2CC1BF9BBE56C66F359460C751120913F585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_2 = NULL;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// switch (Input.touchCount)
		int32_t L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0110;
	}

IL_0013:
	{
		// wasZoomingLastFrame = false;
		__this->set_wasZoomingLastFrame_13((bool)0);
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_4 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// lastPanPosition = touch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		__this->set_lastPanPosition_11(L_6);
		// panFingerId = touch.fingerId;
		int32_t L_7 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		__this->set_panFingerId_12(L_7);
		// }
		return;
	}

IL_004a:
	{
		// else if (touch.fingerId == panFingerId && touch.phase == TouchPhase.Moved)
		int32_t L_8 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_panFingerId_12();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_10 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0117;
		}
	}
	{
		// PanCamera(touch.position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0(__this, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007c:
	{
		// Vector2[] newPositions = new Vector2[] { Input.GetTouch(0).position, Input.GetTouch(1).position };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = L_13;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_15 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_3 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_16);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = L_14;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_18 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(1, /*hidden argument*/NULL);
		V_3 = L_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_19);
		V_2 = L_17;
		// if (!wasZoomingLastFrame)
		bool L_20 = __this->get_wasZoomingLastFrame_13();
		if (L_20)
		{
			goto IL_00c4;
		}
	}
	{
		// lastZoomPositions = newPositions;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_21 = V_2;
		__this->set_lastZoomPositions_14(L_21);
		// wasZoomingLastFrame = true;
		__this->set_wasZoomingLastFrame_13((bool)1);
		// }
		return;
	}

IL_00c4:
	{
		// float newDistance = Vector2.Distance(newPositions[0], newPositions[1]);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_22 = V_2;
		int32_t L_23 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = V_2;
		int32_t L_26 = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		float L_28 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_24, L_27, /*hidden argument*/NULL);
		// float oldDistance = Vector2.Distance(lastZoomPositions[0], lastZoomPositions[1]);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = __this->get_lastZoomPositions_14();
		int32_t L_30 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_32 = __this->get_lastZoomPositions_14();
		int32_t L_33 = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		float L_35 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_31, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		// float offset = newDistance - oldDistance;
		float L_36 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_28, (float)L_36));
		// ZoomCamera(offset, ZoomSpeedTouch);
		float L_37 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var);
		float L_38 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_ZoomSpeedTouch_5();
		PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B(__this, L_37, L_38, /*hidden argument*/NULL);
		// lastZoomPositions = newPositions;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_39 = V_2;
		__this->set_lastZoomPositions_14(L_39);
		// break;
		return;
	}

IL_0110:
	{
		// wasZoomingLastFrame = false;
		__this->set_wasZoomingLastFrame_13((bool)0);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void PanZoom::HandleMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_HandleMouse_m3E124E5D1EB3589B36885630B9BFDC52DECFEF64 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom_HandleMouse_m3E124E5D1EB3589B36885630B9BFDC52DECFEF64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// lastPanPosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_lastPanPosition_11(L_1);
		// }
		goto IL_0028;
	}

IL_0015:
	{
		// else if (Input.GetMouseButton(0))
		bool L_2 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// PanCamera(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_0 = L_4;
		// ZoomCamera(scroll, ZoomSpeedMouse);
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var);
		float L_6 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_ZoomSpeedMouse_6();
		PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B(__this, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanZoom::PanCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0 (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPanPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom_PanCamera_mB26B861B61FD910583F0B0D2AD392B26ECAB2DA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 offset = cam.ScreenToViewportPoint(lastPanPosition - newPanPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cam_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_lastPanPosition_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___newPanPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 move = new Vector3(offset.x * PanSpeed, 0, offset.y * PanSpeed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var);
		float L_7 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_PanSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_y_3();
		float L_10 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_PanSpeed_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (0.0f), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		// transform.Translate(move, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_11, L_12, 0, /*hidden argument*/NULL);
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// pos.x = Mathf.Clamp(transform.position.x, BoundsX[0], BoundsX[1]);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_BoundsX_7();
		int32_t L_19 = 0;
		float L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_BoundsX_7();
		int32_t L_22 = 1;
		float L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_17, L_20, L_23, /*hidden argument*/NULL);
		(&V_2)->set_x_2(L_24);
		// pos.z = Mathf.Clamp(transform.position.z, BoundsZ[0], BoundsZ[1]);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_BoundsZ_8();
		int32_t L_29 = 0;
		float L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_BoundsZ_8();
		int32_t L_32 = 1;
		float L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_27, L_30, L_33, /*hidden argument*/NULL);
		(&V_2)->set_z_4(L_34);
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_2;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// lastPanPosition = newPanPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = ___newPanPosition0;
		__this->set_lastPanPosition_11(L_37);
		// }
		return;
	}
}
// System.Void PanZoom::ZoomCamera(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, float ___offset0, float ___speed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom_ZoomCamera_m75EE10E2814775C9777DE694ACC78CDB9ECBB43B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (offset == 0)
		float L_0 = ___offset0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
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
		// cam.fieldOfView = Mathf.Clamp(cam.fieldOfView - (offset * speed), ZoomBounds[0], ZoomBounds[1]);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_cam_10();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_10();
		float L_3 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_2, /*hidden argument*/NULL);
		float L_4 = ___offset0;
		float L_5 = ___speed1;
		IL2CPP_RUNTIME_CLASS_INIT(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_ZoomBounds_9();
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->get_ZoomBounds_9();
		int32_t L_10 = 1;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), L_8, L_11, /*hidden argument*/NULL);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_1, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom__ctor_mE143711B108F1EA20D7628824F7DC622E71AF7BC (PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanZoom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoom__cctor_m832AFC4F168BED2658C198FC9C5543683B69937F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanZoom__cctor_m832AFC4F168BED2658C198FC9C5543683B69937F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float PanSpeed = 60f;
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_PanSpeed_4((60.0f));
		// private static readonly float ZoomSpeedTouch = 5f;
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_ZoomSpeedTouch_5((5.0f));
		// private static readonly float ZoomSpeedMouse = 5f;
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_ZoomSpeedMouse_6((5.0f));
		// private static readonly float[] BoundsX    = new float[] { -1000f,  1000f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (float)(-1000.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (float)(1000.0f));
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_BoundsX_7(L_2);
		// private static readonly float[] BoundsZ    = new float[] { -1000f,  1000f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (float)(-1000.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (float)(1000.0f));
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_BoundsZ_8(L_5);
		// private static readonly float[] ZoomBounds = new float[] { -10000f, 10000f};
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = L_6;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (float)(-10000.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = L_7;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (float)(10000.0f));
		((PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_StaticFields*)il2cpp_codegen_static_fields_for(PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_il2cpp_TypeInfo_var))->set_ZoomBounds_9(L_8);
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
// System.Void PlayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Start_m472BE983E7DC91CA752BB2994C83384C9F0DB277 (PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B * __this, const RuntimeMethod* method)
{
	{
		// Init();
		TileMove_Init_mF6EFB6C59A44869835B49E29C25FAF8178540CA1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Update_m9AC3A24B5AFBD10381EFFC5A68D0DB56C73E2D90 (PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove_Update_m9AC3A24B5AFBD10381EFFC5A68D0DB56C73E2D90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_1 = NULL;
	{
		// Debug.DrawRay(transform.position, transform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m8477619B612629DAC24B466874AA23B6DC005D8D(L_1, L_3, /*hidden argument*/NULL);
		// if (!moving)
		bool L_4 = ((TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 *)__this)->get_moving_8();
		if (L_4)
		{
			goto IL_009a;
		}
	}
	{
		// FindSelectableTiles();
		TileMove_FindSelectableTiles_mD6467E060BB786849F6947364722735BC93CEB77(__this, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonUp(0))
		bool L_5 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_8 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_6, L_7, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_9 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_8, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		// if (hit.collider.tag == "Tile")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_10, /*hidden argument*/NULL);
		bool L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		// Tile t = hit.collider.GetComponent<Tile>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_14 = Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438(L_13, /*hidden argument*/Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438_RuntimeMethod_var);
		V_1 = L_14;
		// if (t.selectable)
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_15 = V_1;
		bool L_16 = L_15->get_selectable_9();
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// moving = true;
		((TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 *)__this)->set_moving_8((bool)1);
		// targetPosition = t.transform.position;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_17 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		__this->set_targetPosition_16(L_19);
		// Move(targetPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_targetPosition_16();
		PlayerMove_Move_mF4FC8BB364D0D99947A3A1299618E22711F43A00(__this, L_20, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mF4FC8BB364D0D99947A3A1299618E22711F43A00 (PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___location0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove_Move_mF4FC8BB364D0D99947A3A1299618E22711F43A00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.LookAt(targetPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_targetPosition_16();
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_0, L_1, /*hidden argument*/NULL);
		// this.transform.position = new Vector3(targetPosition.x, this.transform.position.y, targetPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_targetPosition_16();
		float L_4 = L_3->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_targetPosition_16();
		float L_9 = L_8->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_4, L_7, L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_10, /*hidden argument*/NULL);
		// this.transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_12, /*hidden argument*/NULL);
		// moving = false;
		((TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 *)__this)->set_moving_8((bool)0);
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_mDCA304173F32D13822B1DF8FA9F46A4446A215D9 (PlayerMove_tB8AEC08EFBC7B401CC07FDA2C5406BB83E87C35B * __this, const RuntimeMethod* method)
{
	{
		TileMove__ctor_mC2FCF95F01FF0ED05028685693C2DD7C29A21803(__this, /*hidden argument*/NULL);
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
// System.Void Tile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Start_m2D8C47ECDED6D6588E8B049E1B5E975A952C07CB (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Start_m2D8C47ECDED6D6588E8B049E1B5E975A952C07CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// realColor = this.GetComponent<Renderer>().material.color;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_3, /*hidden argument*/NULL);
		__this->set_realColor_17(L_4);
		// }
		return;
	}
}
// System.Void Tile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Update_mF00D2C91D4F9FEADBA84DF4F014381EB49B0D5FD (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Update_mF00D2C91D4F9FEADBA84DF4F014381EB49B0D5FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current && occupied)
		bool L_0 = __this->get_current_6();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = __this->get_occupied_7();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// this.GetComponent<Renderer>().material.color = Color.magenta;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// else if (current)
		bool L_5 = __this->get_current_6();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// this.GetComponent<Renderer>().material.color = Color.cyan;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0044:
	{
		// else if (occupied)
		bool L_9 = __this->get_occupied_7();
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// this.GetComponent<Renderer>().material.color = realColor;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_realColor_17();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0063:
	{
		// else if (target)
		bool L_13 = __this->get_target_8();
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// this.GetComponent<Renderer>().material.color = Color.white;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_14, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0081:
	{
		// else if (selectable)
		bool L_17 = __this->get_selectable_9();
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		// this.GetComponent<Renderer>().material.color = realColor;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_18, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = __this->get_realColor_17();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a0:
	{
		// this.GetComponent<Renderer>().material.color = realColor;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_21 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_21, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = __this->get_realColor_17();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tile::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Reset_mE01DB3A5A4B301E1F821CA2954264BFA94D1295A (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Reset_mE01DB3A5A4B301E1F821CA2954264BFA94D1295A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// adjacencyList.Clear();
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = __this->get_adjacencyList_10();
		List_1_Clear_m3F9154AE241FF89420C9F71D10F157332977D914(L_0, /*hidden argument*/List_1_Clear_m3F9154AE241FF89420C9F71D10F157332977D914_RuntimeMethod_var);
		// current = false;
		__this->set_current_6((bool)0);
		// target = false;
		__this->set_target_8((bool)0);
		// selectable = false;
		__this->set_selectable_9((bool)0);
		// visited = false;
		__this->set_visited_11((bool)0);
		// parent = null;
		__this->set_parent_12((Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *)NULL);
		// distance = 0;
		__this->set_distance_13(0);
		// f = g = h = 0;
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->set_h_16(L_1);
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->set_g_15(L_3);
		float L_4 = V_0;
		__this->set_f_14(L_4);
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_mC133CAB2DD72189781F34532A35F0E17634D840E (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnMouseDown_mC133CAB2DD72189781F34532A35F0E17634D840E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function("map", "unselect_tile", new string[0] { });
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A, _stringLiteral9CADC7EA5536C085F6BBC3D3F0D7C53CE29C8FFD, L_1, /*hidden argument*/NULL);
		// import_manager.run_function("map", "set_current", new string[1] { this.name });
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_2 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_2, _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A, _stringLiteral20CA8BD57D3AE45FEB21A59FD8CB67BCB2BF3FC1, L_4, /*hidden argument*/NULL);
		// current = true;
		__this->set_current_6((bool)1);
		// }
		return;
	}
}
// System.Void Tile::unselect(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_unselect_m16CF1D001E06B5C30C3BB5CCCBDE5F4CE33C1321 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameter0, const RuntimeMethod* method)
{
	{
		// current = false;
		__this->set_current_6((bool)0);
		// }
		return;
	}
}
// System.Void Tile::FindNeighbors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_FindNeighbors_mC4318A7E8F1C02D2892ABEE87594F9877D32DF4B (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_FindNeighbors_mC4318A7E8F1C02D2892ABEE87594F9877D32DF4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reset();
		Tile_Reset_mE01DB3A5A4B301E1F821CA2954264BFA94D1295A(__this, /*hidden argument*/NULL);
		// CheckTile(Vector3.forward);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7(__this, L_0, /*hidden argument*/NULL);
		// CheckTile(-Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_1, /*hidden argument*/NULL);
		Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7(__this, L_2, /*hidden argument*/NULL);
		// CheckTile(Vector3.right);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7(__this, L_3, /*hidden argument*/NULL);
		// CheckTile(-Vector3.right);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_4, /*hidden argument*/NULL);
		Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tile::CheckTile(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_CheckTile_mD6A14D99B244C5E26C5AA2D2EEE53FD5C0942AD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_1 = NULL;
	int32_t V_2 = 0;
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_3 = NULL;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 halfExtents = new Vector3(0.25f, 0.25f, 0.25f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.25f), (0.25f), (0.25f), /*hidden argument*/NULL);
		// Collider[] colliders = Physics.OverlapBox(transform.position + direction, halfExtents);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5 = Physics_OverlapBox_mF8C11D75C562F5E7FB21C8768799157DBDCED187(L_3, L_4, /*hidden argument*/NULL);
		// foreach (Collider item in colliders)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0088;
	}

IL_0032:
	{
		// foreach (Collider item in colliders)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// Tile tile = item.GetComponent<Tile>();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_10 = Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438(L_9, /*hidden argument*/Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438_RuntimeMethod_var);
		V_3 = L_10;
		// if (tile != null && tile.walkable)
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_13 = V_3;
		bool L_14 = L_13->get_walkable_5();
		if (!L_14)
		{
			goto IL_0084;
		}
	}
	{
		// if (!Physics.Raycast(tile.transform.position, Vector3.up, out hit, 30) || (tile == target))
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_15 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		bool L_19 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_17, L_18, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), (30.0f), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		bool L_22 = __this->get_target_8();
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0084;
		}
	}

IL_0078:
	{
		// adjacencyList.Add(tile);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_23 = __this->get_adjacencyList_10();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_24 = V_3;
		List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B(L_23, L_24, /*hidden argument*/List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var);
	}

IL_0084:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0088:
	{
		// foreach (Collider item in colliders)
		int32_t L_26 = V_2;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_27 = V_1;
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m35C285926E99EBF627F2B82BEA77909A233BE1ED (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile__ctor_m35C285926E99EBF627F2B82BEA77909A233BE1ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool walkable = true;
		__this->set_walkable_5((bool)1);
		// public List<Tile> adjacencyList = new List<Tile>();
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *)il2cpp_codegen_object_new(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var);
		List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557(L_0, /*hidden argument*/List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var);
		__this->set_adjacencyList_10(L_0);
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
// System.Void TileMove::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_Init_mF6EFB6C59A44869835B49E29C25FAF8178540CA1 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMove_Init_mF6EFB6C59A44869835B49E29C25FAF8178540CA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// tiles = GameObject.FindGameObjectsWithTag("Tile");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, /*hidden argument*/NULL);
		__this->set_tiles_5(L_0);
		// halfHeight = GetComponent<Collider>().bounds.extents.y;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		__this->set_halfHeight_14(L_4);
		// }
		return;
	}
}
// System.Void TileMove::GetCurrentTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_GetCurrentTile_m21C8092649C90EB5465F5B9E140E2E2486A2E343 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method)
{
	{
		// currentTile = GetTargetTile(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_1 = TileMove_GetTargetTile_m8E7B3A722C56ACD967691822219ED8C453D45B01(__this, L_0, /*hidden argument*/NULL);
		__this->set_currentTile_7(L_1);
		// currentTile.occupied = true;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_2 = __this->get_currentTile_7();
		L_2->set_occupied_7((bool)1);
		// }
		return;
	}
}
// Tile TileMove::GetTargetTile(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * TileMove_GetTargetTile_m8E7B3A722C56ACD967691822219ED8C453D45B01 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMove_GetTargetTile_m8E7B3A722C56ACD967691822219ED8C453D45B01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_1 = NULL;
	{
		// Tile tile = null;
		V_1 = (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *)NULL;
		// if (Physics.Raycast(target.transform.position, -Vector3.up, out hit, 3))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_2, L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (3.0f), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// tile = hit.collider.GetComponent<Tile>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_7 = Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438(L_6, /*hidden argument*/Component_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m4E81C6EC8F7CCD71134447C0183FD1681675F438_RuntimeMethod_var);
		V_1 = L_7;
	}

IL_0032:
	{
		// return tile;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_8 = V_1;
		return L_8;
	}
}
// System.Void TileMove::ComputeAdjacencyLists(System.Single,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_ComputeAdjacencyLists_mA1A1095FE10BA48D0DDF0E00A18F8734EDB1A7EF (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, float ___jumpHeight0, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMove_ComputeAdjacencyLists_mA1A1095FE10BA48D0DDF0E00A18F8734EDB1A7EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject tile in tiles)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_tiles_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach (GameObject tile in tiles)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// Tile t = tile.GetComponent<Tile>();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_5 = GameObject_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m822828766798E78DA212A293BDB5FA867910E97A(L_4, /*hidden argument*/GameObject_GetComponent_TisTile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2_m822828766798E78DA212A293BDB5FA867910E97A_RuntimeMethod_var);
		// t.FindNeighbors();
		Tile_FindNeighbors_mC4318A7E8F1C02D2892ABEE87594F9877D32DF4B(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		// foreach (GameObject tile in tiles)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TileMove::FindSelectableTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove_FindSelectableTiles_mD6467E060BB786849F6947364722735BC93CEB77 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMove_FindSelectableTiles_mD6467E060BB786849F6947364722735BC93CEB77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * V_0 = NULL;
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_1 = NULL;
	Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// ComputeAdjacencyLists(jumpHeight, null);
		float L_0 = __this->get_jumpHeight_10();
		TileMove_ComputeAdjacencyLists_mA1A1095FE10BA48D0DDF0E00A18F8734EDB1A7EF(__this, L_0, (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *)NULL, /*hidden argument*/NULL);
		// GetCurrentTile();
		TileMove_GetCurrentTile_m21C8092649C90EB5465F5B9E140E2E2486A2E343(__this, /*hidden argument*/NULL);
		// Queue<Tile> process = new Queue<Tile>();
		Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * L_1 = (Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C *)il2cpp_codegen_object_new(Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C_il2cpp_TypeInfo_var);
		Queue_1__ctor_m44301B82B04D5E67F22890FCF9E968923FE63433(L_1, /*hidden argument*/Queue_1__ctor_m44301B82B04D5E67F22890FCF9E968923FE63433_RuntimeMethod_var);
		V_0 = L_1;
		// process.Enqueue(currentTile);
		Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * L_2 = V_0;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_3 = __this->get_currentTile_7();
		Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155_RuntimeMethod_var);
		// currentTile.visited = true;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_4 = __this->get_currentTile_7();
		L_4->set_visited_11((bool)1);
		goto IL_00b7;
	}

IL_0036:
	{
		// Tile t = process.Dequeue();
		Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * L_5 = V_0;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_6 = Queue_1_Dequeue_mF79AEE6EA455223A5D2F26F223A964989E81B886(L_5, /*hidden argument*/Queue_1_Dequeue_mF79AEE6EA455223A5D2F26F223A964989E81B886_RuntimeMethod_var);
		V_1 = L_6;
		// selectableTiles.Add(t);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_7 = __this->get_selectableTiles_4();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_8 = V_1;
		List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B(L_7, L_8, /*hidden argument*/List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var);
		// t.selectable = true;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_9 = V_1;
		L_9->set_selectable_9((bool)1);
		// if (t.distance < move)
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_10 = V_1;
		int32_t L_11 = L_10->get_distance_13();
		int32_t L_12 = __this->get_move_9();
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00b7;
		}
	}
	{
		// foreach (Tile tile in t.adjacencyList)
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_13 = V_1;
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_14 = L_13->get_adjacencyList_10();
		Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  L_15 = List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3(L_14, /*hidden argument*/List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009e;
		}

IL_006c:
		{
			// foreach (Tile tile in t.adjacencyList)
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_16 = Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_inline((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var);
			V_3 = L_16;
			// if (tile != currentTile)
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_17 = V_3;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_18 = __this->get_currentTile_7();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_009e;
			}
		}

IL_0082:
		{
			// tile.parent = t;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_20 = V_3;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_21 = V_1;
			L_20->set_parent_12(L_21);
			// tile.distance = 1 + t.distance;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_22 = V_3;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_23 = V_1;
			int32_t L_24 = L_23->get_distance_13();
			L_22->set_distance_13(((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_24)));
			// process.Enqueue(tile);
			Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * L_25 = V_0;
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_26 = V_3;
			Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155(L_25, L_26, /*hidden argument*/Queue_1_Enqueue_mC7A0D494A9A5422AE7577945E915E5A3BA747155_RuntimeMethod_var);
		}

IL_009e:
		{
			// foreach (Tile tile in t.adjacencyList)
			bool L_27 = Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_006c;
			}
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
	}

IL_00b7:
	{
		// while (process.Count > 0)
		Queue_1_t38B50A75E08D6FDD5C8D287356A5F3B76EC2454C * L_28 = V_0;
		int32_t L_29 = Queue_1_get_Count_m4B943A787653AB40C12B4615AC2B96CEF3B94CE8_inline(L_28, /*hidden argument*/Queue_1_get_Count_m4B943A787653AB40C12B4615AC2B96CEF3B94CE8_RuntimeMethod_var);
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TileMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileMove__ctor_mC2FCF95F01FF0ED05028685693C2DD7C29A21803 (TileMove_t0446959C55C5AAC4C03A63BA67FB47E220CC01A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMove__ctor_mC2FCF95F01FF0ED05028685693C2DD7C29A21803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Tile> selectableTiles = new List<Tile>();
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *)il2cpp_codegen_object_new(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var);
		List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557(L_0, /*hidden argument*/List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var);
		__this->set_selectableTiles_4(L_0);
		// Stack<Tile> path = new Stack<Tile>();
		Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 * L_1 = (Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441 *)il2cpp_codegen_object_new(Stack_1_t21310B77A9E72D4AD2D1D13DCFE1602A770A8441_il2cpp_TypeInfo_var);
		Stack_1__ctor_m6DE69B997289FD908BDC3AB242659420FE6A007B(L_1, /*hidden argument*/Stack_1__ctor_m6DE69B997289FD908BDC3AB242659420FE6A007B_RuntimeMethod_var);
		__this->set_path_6(L_1);
		// public int move = 3;
		__this->set_move_9(3);
		// public float jumpHeight = 2;
		__this->set_jumpHeight_10((2.0f));
		// public float moveSpeed = 2;
		__this->set_moveSpeed_11((2.0f));
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable_ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  WaitForBackgroundThread_GetAwaiter_mC860B5F296BEE21CC3EBB0F7B86053051D49F725 (WaitForBackgroundThread_t5A5870BA6632506F334B54D797940D01977B4662 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaitForBackgroundThread_GetAwaiter_mC860B5F296BEE21CC3EBB0F7B86053051D49F725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * L_2 = ((U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m995C95DABA4F2F6BF4ACF2F4158056EA6C467DC5_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(G_B2_0, /*hidden argument*/NULL);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_6 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_0), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m664A7B6602EB69FBDE6E0359C9DA0DD199449F30 (WaitForBackgroundThread_t5A5870BA6632506F334B54D797940D01977B4662 * __this, const RuntimeMethod* method)
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_mCFA09002E34A8EBB8C0C898A8BF95525EC6AA406 (WaitForUpdate_t97F8DD3C4CD3561C63F1A61B9B2FC6A6815065FA * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// WaitForUpdate_MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * WaitForUpdate_GetAwaiter_m5697933B1A8ADEAA1C013EF91453A83541D569D3 (WaitForUpdate_t97F8DD3C4CD3561C63F1A61B9B2FC6A6815065FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaitForUpdate_GetAwaiter_m5697933B1A8ADEAA1C013EF91453A83541D569D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * V_0 = NULL;
	{
		// var awaiter = new MainThreadAwaiter();
		MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * L_0 = (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE *)il2cpp_codegen_object_new(MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE_il2cpp_TypeInfo_var);
		MainThreadAwaiter__ctor_mB90D56923CED905B3FBE6E132179810064DBEB45(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// MainThreadUtil.Run(CoroutineWrapper(this, awaiter));
		MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * L_1 = V_0;
		RuntimeObject* L_2 = WaitForUpdate_CoroutineWrapper_mB06747CEF8BCF94946EF6040A6ED6120F28684A5(__this, L_1, /*hidden argument*/NULL);
		MainThreadUtil_Run_mBC930FE44E9FCEB3B3C601BCF464AA0F4FE2621D(L_2, /*hidden argument*/NULL);
		// return awaiter;
		MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate_MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_mB06747CEF8BCF94946EF6040A6ED6120F28684A5 (RuntimeObject* ___theWorker0, MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * ___awaiter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaitForUpdate_CoroutineWrapper_mB06747CEF8BCF94946EF6040A6ED6120F28684A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * L_0 = (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E *)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E_il2cpp_TypeInfo_var);
		U3CCoroutineWrapperU3Ed__4__ctor_m575DB1A02B0B664D913C34BB3AF6CDA1D13177BD(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * L_1 = L_0;
		RuntimeObject* L_2 = ___theWorker0;
		L_1->set_theWorker_2(L_2);
		U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * L_3 = L_1;
		MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * L_4 = ___awaiter1;
		L_3->set_awaiter_3(L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m614B770F26854ED31CCE0A759B475D5535D43AC5 (WaitForUpdate_t97F8DD3C4CD3561C63F1A61B9B2FC6A6815065FA * __this, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
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
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_mAF9D57D7DAB0AE3A7C357C22D8D6F988726E4470 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketConnect)(___instanceId0);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m27B495AE83A0C1A53563001D6235701B326A5F3C (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___reason2' to native representation
	char* ____reason2_marshaled = NULL;
	____reason2_marshaled = il2cpp_codegen_marshal_string(___reason2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketClose)(___instanceId0, ___code1, ____reason2_marshaled);

	// Marshaling cleanup of parameter '___reason2' native representation
	il2cpp_codegen_marshal_free(____reason2_marshaled);
	____reason2_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m2870F3ADCB9941719ECCE485364DD18B7C94C68A (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___dataPtr1' to native representation
	uint8_t* ____dataPtr1_marshaled = NULL;
	if (___dataPtr1 != NULL)
	{
		____dataPtr1_marshaled = reinterpret_cast<uint8_t*>((___dataPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSend)(___instanceId0, ____dataPtr1_marshaled, ___dataLength2);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_mA99D8066984D863D31CB0EC5BDD2695E7D7C86AF (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSendText)(___instanceId0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m6C194F60DACB41D10457B87FB7DDF8393B4504BD (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketGetState)(___instanceId0);

	return returnValue;
}
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m3AD885B71B3C90F1F5EC1A7217BA12114F894194 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_add_OnOpen_m3AD885B71B3C90F1F5EC1A7217BA12114F894194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_0 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_1 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_2 = V_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_6 = V_2;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_7 = V_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *>((WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_9 = V_0;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_m3CBFA65BFBB4338C90A16D0BEEFF977D4C44728E (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_remove_OnOpen_m3CBFA65BFBB4338C90A16D0BEEFF977D4C44728E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_0 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_1 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_2 = V_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_6 = V_2;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_7 = V_1;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *>((WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_9 = V_0;
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m430209598ED003FC2695D7151F96EE603EF19BF4 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_add_OnMessage_m430209598ED003FC2695D7151F96EE603EF19BF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_0 = NULL;
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_1 = NULL;
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_2 = V_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_6 = V_2;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_7 = V_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *>((WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_9 = V_0;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m89AD476C6ED281FA9CC759C5ED02511C099E2155 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_remove_OnMessage_m89AD476C6ED281FA9CC759C5ED02511C099E2155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_0 = NULL;
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_1 = NULL;
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_2 = V_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_6 = V_2;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_7 = V_1;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *>((WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_9 = V_0;
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m0DC8D3CE51CC45574ED5284BDF0F3189E976825F (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_add_OnError_m0DC8D3CE51CC45574ED5284BDF0F3189E976825F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_0 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_1 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_2 = NULL;
	{
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_2 = V_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_6 = V_2;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_7 = V_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *>((WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_9 = V_0;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_mAA1636E10B168BB12A56484C8F277C0B0707B88F (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_remove_OnError_mAA1636E10B168BB12A56484C8F277C0B0707B88F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_0 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_1 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * V_2 = NULL;
	{
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_2 = V_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_6 = V_2;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_7 = V_1;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *>((WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_9 = V_0;
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m0FEFFD504C35320464513739813DDB8BB2418892 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_add_OnClose_m0FEFFD504C35320464513739813DDB8BB2418892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_0 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_1 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_2 = V_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_6 = V_2;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_7 = V_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *>((WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_9 = V_0;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m85845A8506266B3206D00974DDA9794E58FFE391 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_remove_OnClose_m85845A8506266B3206D00974DDA9794E58FFE391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_0 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_1 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_2 = V_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_6 = V_2;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_7 = V_1;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *>((WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_9 = V_0;
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WebSocket (string url, Dictionary<string, string> headers = null) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (!WebSocketFactory.isInitialized) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_isInitialized_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// WebSocketFactory.Initialize ();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_mD32F8EE139FC0DACA0494365FCAAB1D1042A74BE(/*hidden argument*/NULL);
	}

IL_0012:
	{
		// int instanceId = WebSocketFactory.WebSocketAllocate (url);
		String_t* L_1 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		int32_t L_2 = WebSocketFactory_WebSocketAllocate_m730D09849F3348C53DFBD13D11087DC309F6594B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// WebSocketFactory.instances.Add (instanceId, this);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_3 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_4 = V_0;
		Dictionary_2_Add_mE68F66BB3ADADE79EA04F793E81F297439C9E619(L_3, L_4, __this, /*hidden argument*/Dictionary_2_Add_mE68F66BB3ADADE79EA04F793E81F297439C9E619_RuntimeMethod_var);
		// this.instanceId = instanceId;
		int32_t L_5 = V_0;
		__this->set_instanceId_0(L_5);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Finalize_m7FA4340D111CED8405FB3948E78DEC40554799D7 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Finalize_m7FA4340D111CED8405FB3948E78DEC40554799D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// WebSocketFactory.HandleInstanceDestroy (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		WebSocketFactory_HandleInstanceDestroy_m8F6BD9D4F38287BFD0418A293D7841C6FE401CBD(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 NativeWebSocket.WebSocket::GetInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetInstanceId_mE8B5CD4FB02F0AD22A3658E5836E50C2B67FD46C (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	{
		// return this.instanceId;
		int32_t L_0 = __this->get_instanceId_0();
		return L_0;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketConnect (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1 = WebSocket_WebSocketConnect_mAF9D57D7DAB0AE3A7C357C22D8D6F988726E4470(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (ret < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_3 = V_0;
		WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * L_4 = WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6_RuntimeMethod_var);
	}

IL_0018:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_m5AF6D3C8A1C8C0B6E7903AA5CD4695EC6517794E (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	{
		// if (State == WebSocketState.Open)
		int32_t L_0 = WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// Close (WebSocketCloseCode.Abnormal);
		WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79(__this, ((int32_t)1006), (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketClose (this.instanceId, (int) code, reason);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1 = ___code0;
		String_t* L_2 = ___reason1;
		int32_t L_3 = WebSocket_WebSocketClose_m27B495AE83A0C1A53563001D6235701B326A5F3C(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * L_6 = WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79_RuntimeMethod_var);
	}

IL_001a:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Send_m900ABA740BCF487F3C957BF261EED093BE162601 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Send_m900ABA740BCF487F3C957BF261EED093BE162601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSend (this.instanceId, data, data.Length);
		int32_t L_0 = __this->get_instanceId_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		int32_t L_3 = WebSocket_WebSocketSend_m2870F3ADCB9941719ECCE485364DD18B7C94C68A(L_0, L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * L_6 = WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, WebSocket_Send_m900ABA740BCF487F3C957BF261EED093BE162601_RuntimeMethod_var);
	}

IL_001c:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSendText (this.instanceId, message);
		int32_t L_0 = __this->get_instanceId_0();
		String_t* L_1 = ___message0;
		int32_t L_2 = WebSocket_WebSocketSendText_mA99D8066984D863D31CB0EC5BDD2695E7D7C86AF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (ret < 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_4 = V_0;
		WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * L_5 = WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E(L_4, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD_RuntimeMethod_var);
	}

IL_0019:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_6;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int state = WebSocketGetState (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1 = WebSocket_WebSocketGetState_m6C194F60DACB41D10457B87FB7DDF8393B4504BD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (state < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (state, null);
		int32_t L_3 = V_0;
		WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * L_4 = WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, WebSocket_get_State_m4AA24A8AC12B2EF33691C6AFA3C7D5270E1B0DC5_RuntimeMethod_var);
	}

IL_0018:
	{
		// switch (state) {
		int32_t L_5 = V_0;
		switch (L_5)
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
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		// return WebSocketState.Connecting;
		return (int32_t)(0);
	}

IL_0032:
	{
		// return WebSocketState.Open;
		return (int32_t)(1);
	}

IL_0034:
	{
		// return WebSocketState.Closing;
		return (int32_t)(2);
	}

IL_0036:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}

IL_0038:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m77D34834E711680B79EA10E9C1C3739D41BA05B5 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, const RuntimeMethod* method)
{
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * G_B2_0 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * G_B1_0 = NULL;
	{
		// this.OnOpen?.Invoke ();
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_0 = __this->get_OnOpen_1();
		WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebSocketOpenEventHandler_Invoke_m1FDDA662BC3C5ACF65E31E8BA6456440AE0CC857(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mDF086358568B866BFA7B69D306AD88CF7FD93199 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * G_B2_0 = NULL;
	WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * G_B1_0 = NULL;
	{
		// this.OnMessage?.Invoke (data);
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_0 = __this->get_OnMessage_2();
		WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		WebSocketMessageEventHandler_Invoke_m8435861190BA0913502E4F2CB6668D28B8D74759(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mB139B8723B7427C1EEC04AFCA4E81B6F39728094 (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * G_B2_0 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * G_B1_0 = NULL;
	{
		// this.OnError?.Invoke (errorMsg);
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_0 = __this->get_OnError_3();
		WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___errorMsg0;
		WebSocketErrorEventHandler_Invoke_mA813FFDAD52C0F04F3D72B63AC4945FA3A8D7058(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_mA0382E9E16C6F4BF024C23973494290C2635941D (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * G_B2_0 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * G_B1_0 = NULL;
	{
		// this.OnClose?.Invoke (WebSocketHelpers.ParseCloseCodeEnum (closeCode));
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_0 = __this->get_OnClose_4();
		WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = WebSocketHelpers_ParseCloseCodeEnum_m719389266B3DBD9607C62A6C0816A99BF33DD20F(L_2, /*hidden argument*/NULL);
		WebSocketCloseEventHandler_Invoke_m4781AA899CA720140DB1CD3E20B53D39AC90311A(G_B2_0, L_3, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___closeCode0);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m5B4942CC7469E8DFE3EB0CAB0BFA1A36691C221C (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m4781AA899CA720140DB1CD3E20B53D39AC90311A (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___closeCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___closeCode0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___closeCode0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___closeCode0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___closeCode0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_m4B532483745865CEAB6028CACE07EE739AD991AA (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, int32_t ___closeCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketCloseEventHandler_BeginInvoke_m4B532483745865CEAB6028CACE07EE739AD991AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4_il2cpp_TypeInfo_var, &___closeCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m44EFEFBBFB5CF56580FE5F2B16F6D35294F911A7 (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___errorMsg0' to native representation
	char* ____errorMsg0_marshaled = NULL;
	____errorMsg0_marshaled = il2cpp_codegen_marshal_string(___errorMsg0);

	// Native function invocation
	il2cppPInvokeFunc(____errorMsg0_marshaled);

	// Marshaling cleanup of parameter '___errorMsg0' native representation
	il2cpp_codegen_marshal_free(____errorMsg0_marshaled);
	____errorMsg0_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m89873FB704DC7FCF39F6F00B9FC75DFFE1258D4C (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mA813FFDAD52C0F04F3D72B63AC4945FA3A8D7058 (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___errorMsg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorMsg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorMsg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorMsg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorMsg0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___errorMsg0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m325F5F1971413B8B206BE55CCD91DBF7C4B2CE14 (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, String_t* ___errorMsg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_mD6023EAA4DCA6FE548D38CAE030C30C3475AF4A6 (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// public WebSocketException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500 (WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A(int32_t ___instanceId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A(___instanceId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1(int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1(___instanceId0, ___msgPtr1, ___msgSize2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E(int32_t ___instanceId0, intptr_t ___errorPtr1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E(___instanceId0, ___errorPtr1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62(int32_t ___instanceId0, int32_t ___closeCode1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62(___instanceId0, ___closeCode1, NULL);

}
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m730D09849F3348C53DFBD13D11087DC309F6594B (String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAllocate)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return returnValue;
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mA274C20A0EC485F3F429A52E979CB4D36A87C712 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketFree)(___instanceId0);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory_OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_mAAF4DCAB80B5DA3FC6D987EBACC4EDC98FF964A3 (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnOpen)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory_OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mC94922F8B0616ED4006C1F4D3EC379031BCBE9D9 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnMessage)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory_OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m04D2F3C77CC16A4E6BA8D239FF8283D20C2E7D0F (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnError)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory_OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_mE1AB6C58ECCBAB9D9ED669926A9D9E2AE850E50B (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnClose)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_mD32F8EE139FC0DACA0494365FCAAB1D1042A74BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_Initialize_mD32F8EE139FC0DACA0494365FCAAB1D1042A74BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketSetOnOpen (DelegateOnOpenEvent);
		OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * L_0 = (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 *)il2cpp_codegen_object_new(OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47_il2cpp_TypeInfo_var);
		OnOpenCallback__ctor_m5A7B0CBFBDAAF0140DC4CCEA0AFEACFF20240A8F(L_0, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		WebSocketFactory_WebSocketSetOnOpen_mAAF4DCAB80B5DA3FC6D987EBACC4EDC98FF964A3(L_0, /*hidden argument*/NULL);
		// WebSocketSetOnMessage (DelegateOnMessageEvent);
		OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * L_1 = (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E *)il2cpp_codegen_object_new(OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E_il2cpp_TypeInfo_var);
		OnMessageCallback__ctor_m5897045C40CBE21B3FF3360ABA4873D604A09DD6(L_1, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnMessage_mC94922F8B0616ED4006C1F4D3EC379031BCBE9D9(L_1, /*hidden argument*/NULL);
		// WebSocketSetOnError (DelegateOnErrorEvent);
		OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * L_2 = (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF *)il2cpp_codegen_object_new(OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF_il2cpp_TypeInfo_var);
		OnErrorCallback__ctor_m1F6F172A8E0B2C6DB6F27D155701CADCD9AB9E60(L_2, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnError_m04D2F3C77CC16A4E6BA8D239FF8283D20C2E7D0F(L_2, /*hidden argument*/NULL);
		// WebSocketSetOnClose (DelegateOnCloseEvent);
		OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * L_3 = (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 *)il2cpp_codegen_object_new(OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701_il2cpp_TypeInfo_var);
		OnCloseCallback__ctor_m7AE4D6D65BC7DDB3294C44F82AE3C926F65033AA(L_3, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnClose_mE1AB6C58ECCBAB9D9ED669926A9D9E2AE850E50B(L_3, /*hidden argument*/NULL);
		// isInitialized = true;
		((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)1);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m8F6BD9D4F38287BFD0418A293D7841C6FE401CBD (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_HandleInstanceDestroy_m8F6BD9D4F38287BFD0418A293D7841C6FE401CBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove (instanceId);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		Dictionary_2_Remove_m70A4CDAC856B2E9ECA7847197A68D49DA350B6CE(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m70A4CDAC856B2E9ECA7847197A68D49DA350B6CE_RuntimeMethod_var);
		// WebSocketFree (instanceId);
		int32_t L_2 = ___instanceId0;
		WebSocketFactory_WebSocketFree_mA274C20A0EC485F3F429A52E979CB4D36A87C712(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_DelegateOnOpenEvent_m81EAC4AFD4A74AF96743E26FF66602B77130504A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2 = Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00(L_0, L_1, (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// instanceRef.DelegateOnOpenEvent ();
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_3 = V_0;
		WebSocket_DelegateOnOpenEvent_m77D34834E711680B79EA10E9C1C3739D41BA05B5(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_DelegateOnMessageEvent_mE581241D6F0AD9A885B109DF8F0A99B98D04CAF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2 = Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00(L_0, L_1, (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// byte[] msg = new byte[msgSize];
		int32_t L_3 = ___msgSize2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// Marshal.Copy (msgPtr, msg, 0, msgSize);
		intptr_t L_5 = ___msgPtr1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7 = ___msgSize2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_5, L_6, 0, L_7, /*hidden argument*/NULL);
		// instanceRef.DelegateOnMessageEvent (msg);
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		WebSocket_DelegateOnMessageEvent_mDF086358568B866BFA7B69D306AD88CF7FD93199(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_DelegateOnErrorEvent_mFBA7EC15E03891FF9C7AF41DD832803003B5231E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2 = Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00(L_0, L_1, (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// string errorMsg = Marshal.PtrToStringAuto (errorPtr);
		intptr_t L_3 = ___errorPtr1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_4 = Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// instanceRef.DelegateOnErrorEvent (errorMsg);
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_5 = V_0;
		String_t* L_6 = V_1;
		WebSocket_DelegateOnErrorEvent_mB139B8723B7427C1EEC04AFCA4E81B6F39728094(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_DelegateOnCloseEvent_mF39BE7250D3E8D3E9751C99C1AC1C17D93B76A62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var);
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = ((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2 = Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00(L_0, L_1, (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m76BA804EA32AC942CFEF8778A59E14D7FB052A00_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// instanceRef.DelegateOnCloseEvent (closeCode);
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_3 = V_0;
		int32_t L_4 = ___closeCode1;
		WebSocket_DelegateOnCloseEvent_mA0382E9E16C6F4BF024C23973494290C2635941D(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// NativeWebSocket.WebSocket NativeWebSocket.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * WebSocketFactory_CreateInstance_mD304988097B4EFC944D4D63153E10E229005D7E3 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory_CreateInstance_mD304988097B4EFC944D4D63153E10E229005D7E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WebSocket(url);
		String_t* L_0 = ___url0;
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_1 = (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF *)il2cpp_codegen_object_new(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF_il2cpp_TypeInfo_var);
		WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3(L_1, L_0, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory__cctor_m1F096C7F70DDFCBEEC7AEFF37CE3A986FD550335 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFactory__cctor_m1F096C7F70DDFCBEEC7AEFF37CE3A986FD550335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<Int32, WebSocket> instances = new Dictionary<Int32, WebSocket> ();
		Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D * L_0 = (Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D *)il2cpp_codegen_object_new(Dictionary_2_tB8A8BDCD46B72C701CA50F15C4BCC7DC56DF0C6D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF5953D745A7A304B14644F1CDCEE808523B01A5(L_0, /*hidden argument*/Dictionary_2__ctor_mEF5953D745A7A304B14644F1CDCEE808523B01A5_RuntimeMethod_var);
		((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->set_instances_0(L_0);
		// public static bool isInitialized = false;
		((WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t8BC980588CFEC7B2B47357CA2A8BBAB6C979F8C7_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)0);
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
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m719389266B3DBD9607C62A6C0816A99BF33DD20F (int32_t ___closeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketHelpers_ParseCloseCodeEnum_m719389266B3DBD9607C62A6C0816A99BF33DD20F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_tEDA7BC393319702287FB88B0EEB6691171CE99A4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_6 = ___closeCode0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return WebSocketCloseCode.Undefined;
		return (int32_t)(((int32_t)1004));
	}
}
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t67EB02EB1F422B47090AC2BF1FCEDAF42DAB78A4 * WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketHelpers_GetErrorMessageFromCode_m6760B50B7C92EFDA063E4546E15A2C55882AEA7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (errorCode)
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-7))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_0033;
			}
			case 6:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0027:
	{
		// return new WebSocketUnexpectedException("WebSocket instance not found.", inner);
		Exception_t * L_1 = ___inner1;
		WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * L_2 = (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 *)il2cpp_codegen_object_new(WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_m4BCA0BBE54DB3FC3EFF6C0E4EB3682A0DD71C1C8(L_2, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0033:
	{
		// return new WebSocketInvalidStateException("WebSocket is already connected or in connecting state.", inner);
		Exception_t * L_3 = ___inner1;
		WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * L_4 = (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3(L_4, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_003f:
	{
		// return new WebSocketInvalidStateException("WebSocket is not connected.", inner);
		Exception_t * L_5 = ___inner1;
		WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * L_6 = (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3(L_6, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004b:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closing.", inner);
		Exception_t * L_7 = ___inner1;
		WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * L_8 = (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3(L_8, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0057:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closed.", inner);
		Exception_t * L_9 = ___inner1;
		WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * L_10 = (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3(L_10, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0063:
	{
		// return new WebSocketInvalidStateException("WebSocket is not in open state.", inner);
		Exception_t * L_11 = ___inner1;
		WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * L_12 = (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3(L_12, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_006f:
	{
		// return new WebSocketInvalidArgumentException("Cannot close WebSocket. An invalid code was specified or reason is too long.", inner);
		Exception_t * L_13 = ___inner1;
		WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 * L_14 = (WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 *)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577_il2cpp_TypeInfo_var);
		WebSocketInvalidArgumentException__ctor_m4D502EA5397574620C4AC8E406FAA86AC09C9E81(L_14, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_007b:
	{
		// return new WebSocketUnexpectedException("Unknown error.", inner);
		Exception_t * L_15 = ___inner1;
		WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * L_16 = (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 *)il2cpp_codegen_object_new(WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_m4BCA0BBE54DB3FC3EFF6C0E4EB3682A0DD71C1C8(L_16, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m2DB877FD226C71669D6BEC0DDF7399165C7AE105 (WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException() { }
		WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mBC7D03A399322A75EA26BE24AD29004C4E877708 (WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m4D502EA5397574620C4AC8E406FAA86AC09C9E81 (WebSocketInvalidArgumentException_tCFD68B94BBA83EA6E885E299B389E98B72706577 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m8D6C4617B150F97F795BCF9A2DEDD3DF0D184E91 (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException() { }
		WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m8377B00CE4062657B15657EB2F9852082C1E2559 (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mB1DDDA5FEE81EDA1D0124D7DE72537BC6BD6DAA3 (WebSocketInvalidStateException_t7445A4784B42CE117873F3A568E8A231DDEFA52D * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_mAF0BA6720A199F944A1F7AAE6CAE98A0C4EA5538 (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m8435861190BA0913502E4F2CB6668D28B8D74759 (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_m720D609AEFD86B5FABDDB2C5F4EAB81830C5EBFC (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m59FDAA5F5F925983DDE895240B33BE93A0E46D68 (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m1809A890B2FE8ED19221EB9CBF348FEE8F19E115 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m1FDDA662BC3C5ACF65E31E8BA6456440AE0CC857 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
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
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_mE81DB008FDCA31B6401B633906EFBDBE5D23DEDD (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m570BCEF5DDA76DC1568E976EF906B3A1D39C8871 (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC858E9A48D3957E7BC7FA7E7F7CEF35B5D6008BB (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException() { }
		WebSocketException__ctor_m48006F45C7C8752FC47EECF10812014262354BEB(__this, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mB69B2858801E0A5DF05289CC80F74F86008147D7 (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m3CEEE57F07D68769323ECE7C7FB4C00063F27D3A(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m4BCA0BBE54DB3FC3EFF6C0E4EB3682A0DD71C1C8 (WebSocketUnexpectedException_tE6D1A63112F9C7158B41F8DC331F93117996DC45 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_mFD84CD85133D07281F84D2C5F1C14A89132F9500(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
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
// System.Void add_character::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void add_character_Start_m603C0E5C51247CB783EB643513C6ACED19CB605B (add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (add_character_Start_m603C0E5C51247CB783EB643513C6ACED19CB605B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// }
		return;
	}
}
// System.Void add_character::add(System.String[],UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void add_character_add_m77BA86CEA099AAF8C991D25D25ADE0CB67AFEFA6 (add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___character1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (add_character_add_m77BA86CEA099AAF8C991D25D25ADE0CB67AFEFA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// string[] tileName    = parameters[0].Split('_');
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		// float xAxis = float.Parse(parameters[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___parameters0;
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// float zAxis = float.Parse(parameters[3]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___parameters0;
		int32_t L_10 = 3;
		String_t* L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// Instantiate(character, new Vector3(xAxis, 1, zAxis), Quaternion.identity);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_13 = ___character1;
		float L_14 = V_0;
		float L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_14, (1.0f), L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_13, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void add_character::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void add_character_update_mF3880F3B00DF64D1A3450A86502A3A5385A847CE (add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// add(v, ninja);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_v_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_ninja_5();
		add_character_add_m77BA86CEA099AAF8C991D25D25ADE0CB67AFEFA6(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void add_character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void add_character__ctor_m31F71D95CA67CAB4E7E7F4C921A86A77905434E3 (add_character_t8281A4CFA99FE5DCD01A0BCC1F6A558A86B11FAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (add_character__ctor_m31F71D95CA67CAB4E7E7F4C921A86A77905434E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] v = { "ground_4_0_4" }; // temp for testing
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD1239E37FC08DE4D629FDD65172F29EF2236E3C8);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1239E37FC08DE4D629FDD65172F29EF2236E3C8);
		__this->set_v_6(L_1);
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
// System.Void change_button::change_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void change_button_change_sprite_m00C9D38C7D47B0868A607E6A00071CE83D63542F (change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (change_button_change_sprite_m00C9D38C7D47B0868A607E6A00071CE83D63542F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (button.image.sprite == spriteOn)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_button_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_0, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_1, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_spriteOn_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// button.image.sprite = spriteOff;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_button_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_5, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_spriteOff_4();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		// button.image.sprite = spriteOn;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_button_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_8, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_spriteOn_5();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void change_button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void change_button__ctor_mC2DE69197E3F973F2DF58B1C093847FED3435317 (change_button_tBC174DAB09D5C8047668242F1C9B11432B2E2A7C * __this, const RuntimeMethod* method)
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
// System.Void change_scene::buttonChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void change_scene_buttonChangeScene_m271BDC0BCD0D73DAB25BD15E3A0106308FC62BE6 (change_scene_t3B232315E5290872C93C10178DAB37744D050D83 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (change_scene_buttonChangeScene_m271BDC0BCD0D73DAB25BD15E3A0106308FC62BE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void change_scene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void change_scene__ctor_mF924C38D824BCD29CDD1AEF4FCDFA9918CED73F7 (change_scene_t3B232315E5290872C93C10178DAB37744D050D83 * __this, const RuntimeMethod* method)
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
// System.Void character_selection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void character_selection_Start_m517876AB34C8A85F18A59027926F26CAE0811CBC (character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (character_selection_Start_m517876AB34C8A85F18A59027926F26CAE0811CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// }
		return;
	}
}
// System.Void character_selection::NextCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void character_selection_NextCharacter_m55FC1DBDC51DFBD307E3B63E25D7CDDFBB3EE83B (character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D * __this, const RuntimeMethod* method)
{
	{
		// characters[selectedCharacter].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_characters_5();
		int32_t L_1 = __this->get_selectedCharacter_6();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// selectedCharacter = (selectedCharacter + 1) % characters.Length;
		int32_t L_4 = __this->get_selectedCharacter_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_characters_5();
		__this->set_selectedCharacter_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))));
		// characters[selectedCharacter].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_characters_5();
		int32_t L_7 = __this->get_selectedCharacter_6();
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// description.selectedCiv = selectedCharacter;
		civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * L_10 = __this->get_description_7();
		int32_t L_11 = __this->get_selectedCharacter_6();
		L_10->set_selectedCiv_5(L_11);
		// }
		return;
	}
}
// System.Void character_selection::PreviousCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void character_selection_PreviousCharacter_mEBDD23D048F6F6A8B96A1F75BB765EB21CC04344 (character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D * __this, const RuntimeMethod* method)
{
	{
		// characters[selectedCharacter].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_characters_5();
		int32_t L_1 = __this->get_selectedCharacter_6();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// selectedCharacter--;
		int32_t L_4 = __this->get_selectedCharacter_6();
		__this->set_selectedCharacter_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// if (selectedCharacter < 0)
		int32_t L_5 = __this->get_selectedCharacter_6();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		// selectedCharacter += characters.Length;
		int32_t L_6 = __this->get_selectedCharacter_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_characters_5();
		__this->set_selectedCharacter_6(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))));
		// description.selectedCiv = selectedCharacter;
		civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * L_8 = __this->get_description_7();
		int32_t L_9 = __this->get_selectedCharacter_6();
		L_8->set_selectedCiv_5(L_9);
	}

IL_0050:
	{
		// characters[selectedCharacter].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_characters_5();
		int32_t L_11 = __this->get_selectedCharacter_6();
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// description.selectedCiv = selectedCharacter;
		civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * L_14 = __this->get_description_7();
		int32_t L_15 = __this->get_selectedCharacter_6();
		L_14->set_selectedCiv_5(L_15);
		// }
		return;
	}
}
// System.Void character_selection::get_civilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void character_selection_get_civilization_mA2B7F38477E5A090F01A9D5B592DA534E0880422 (character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (character_selection_get_civilization_mA2B7F38477E5A090F01A9D5B592DA534E0880422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function("network_manager", "set_player_civilization", new string[1] {description.descriptionText.text});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * L_3 = __this->get_description_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_descriptionText_4();
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, _stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, _stringLiteral00AAB94830E6E74F8E8BF8C47878A378C3054868, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void character_selection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void character_selection__ctor_m5A4F82A6032D19665B6B02433EE4EC9642BC634E (character_selection_t01F31DC603EF6473C5697756D77D51958175BD5D * __this, const RuntimeMethod* method)
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
// System.Void civ_description::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void civ_description_Update_m47FB12531776DCAD3A9DBBBFEDD3B07431F048DA (civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (civ_description_Update_m47FB12531776DCAD3A9DBBBFEDD3B07431F048DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (selectedCiv)
		int32_t L_0 = __this->get_selectedCiv_5();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0033;
	}

IL_0011:
	{
		// descriptionText.text = "Viking";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_descriptionText_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralCE6D16407AA08D762CD253B6CD8C830010194490);
		// break;
		return;
	}

IL_0022:
	{
		// descriptionText.text = "Greek";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_descriptionText_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralFB91DF7EEC2135EC963D55F2DA5FBB6CD3E3179D);
		// break;
		return;
	}

IL_0033:
	{
		// descriptionText.text = "Asian";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_descriptionText_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralC3F71191917A10B146EA94090694625A9B97F5F3);
		// }
		return;
	}
}
// System.Void civ_description::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void civ_description__ctor_mBD5B5BD4E1621D9FB98749B05CD94DF36DEBCBAC (civ_description_tD90C7BAC299924667957BB7CA7E8434D624630F2 * __this, const RuntimeMethod* method)
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
// System.Void click_handlers::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_Start_m324D530A537C41F2433E7619BBE4C292F976F081 (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (click_handlers_Start_m324D530A537C41F2433E7619BBE4C292F976F081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// load_button(localGameButton, canvas, "click_local");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_localGameButton_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_canvas_6();
		click_handlers_load_button_m5693F13EE2D81FFCC88D05A9C4A9D48B834CA79E(__this, L_2, L_3, _stringLiteralE883E5E31609FF3F9D826DA837DAAAC542C90E28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void click_handlers::load_button(UnityEngine.GameObject,UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_load_button_m5693F13EE2D81FFCC88D05A9C4A9D48B834CA79E (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___button0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cavas1, String_t* ___clickAction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (click_handlers_load_button_m5693F13EE2D81FFCC88D05A9C4A9D48B834CA79E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * L_0 = (U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mDDC93C1D77EC1C2FC51A52E6E43BF9A866B4F3E3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * L_2 = V_0;
		String_t* L_3 = ___clickAction2;
		L_2->set_clickAction_1(L_3);
		// activeButton = Instantiate(button) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___button0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// activeButton.transform.SetParent(canvas.transform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_canvas_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_7, L_9, (bool)0, /*hidden argument*/NULL);
		// activeButton.GetComponent<Button>().onClick.AddListener(() => { import_manager.run_function("button_manager", clickAction, new string[0] { }); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_11 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_10, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * L_12 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_13 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cload_buttonU3Eb__0_mD2C572942A7DBC7BAFD2ABD4EBA4F02017B695BF_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void click_handlers::click_local(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_click_local_m62A33BE45DD16A046FDD01690B14FCDCABBB2D90 (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (click_handlers_click_local_m62A33BE45DD16A046FDD01690B14FCDCABBB2D90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function("network_manager", "start_local_game", new string[0] { });
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, _stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, _stringLiteralB639FE9E91ACBD99F30ECB71F1EB84B9CCEB6535, L_1, /*hidden argument*/NULL);
		// detroy_menu();
		click_handlers_detroy_menu_m847D412BC025B299B1845C8B4EEED8D1264B155B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void click_handlers::detroy_menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers_detroy_menu_m847D412BC025B299B1845C8B4EEED8D1264B155B (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (click_handlers_detroy_menu_m847D412BC025B299B1845C8B4EEED8D1264B155B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(canvas);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_canvas_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void click_handlers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void click_handlers__ctor_mF1BCF21C2E4A9443EAF222401F944582D746F719 (click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * __this, const RuntimeMethod* method)
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
// System.Void import_manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager_Start_mA0AEDEF96EA8AD365BB174526CA6DD1CE4D93006 (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (import_manager_Start_mA0AEDEF96EA8AD365BB174526CA6DD1CE4D93006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serverManager = GameObject.Find("network_manager").GetComponent<server_manager>(); // Connects to the import_manager.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_1 = GameObject_GetComponent_Tisserver_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559_m88AD973A564B03CBDCEE9DA0F59A18776A432F56(L_0, /*hidden argument*/GameObject_GetComponent_Tisserver_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559_m88AD973A564B03CBDCEE9DA0F59A18776A432F56_RuntimeMethod_var);
		__this->set_serverManager_4(L_1);
		// }
		return;
	}
}
// System.Void import_manager::run_function(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// GameObject.Find(gameObject).SendMessage(function, parameters);
		String_t* L_0 = ___gameObject0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___function1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___parameters2;
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_1, L_2, (RuntimeObject *)(RuntimeObject *)L_3, /*hidden argument*/NULL);
		// }
		goto IL_0028;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Object)
		// catch
		// Debug.Log(gameObject + "." + function + " is not a local function.");
		String_t* L_4 = ___gameObject0;
		String_t* L_5 = ___function1;
		String_t* L_6 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, _stringLiteral3C8A7F1479C617CFB7F4ECC2F878930A21DB993D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// }
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		// }
		return;
	}
}
// System.Void import_manager::run_function_all(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject != "server_functions")
		String_t* L_0 = ___gameObject0;
		bool L_1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, _stringLiteralB4E4CA5C5C687ADADDAE2F0A9AC4EF78D5A74478, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// run_function(gameObject, function, parameters);
		String_t* L_2 = ___gameObject0;
		String_t* L_3 = ___function1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___parameters2;
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// serverManager.send(gameObject, function, parameters);
		server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_5 = __this->get_serverManager_4();
		String_t* L_6 = ___gameObject0;
		String_t* L_7 = ___function1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___parameters2;
		server_manager_send_m3BAE5F09FCA8BD7AE05936363EA53E83658F5B23(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void import_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void import_manager__ctor_m3484A0D55DF81CD21FF7E68B7681DA3C5A0A3850 (import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * __this, const RuntimeMethod* method)
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
// System.Void map_manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_Start_m4634849DD97A651C7CFA35807BE56493C4A3C6CC (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_Start_m4634849DD97A651C7CFA35807BE56493C4A3C6CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// }
		return;
	}
}
// System.Void map_manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_Update_m8DFD2C09798E969B0F5426600CD54D366570D77E (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void map_manager::create_ground(System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_create_ground_m8CCDF9A6AC1FAC26A1CA26794F88E2CF5D94649D (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, float ___xPosition0, float ___zPosition1, String_t* ___prefabName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_create_ground_m8CCDF9A6AC1FAC26A1CA26794F88E2CF5D94649D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject ground = water;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_water_6();
		V_0 = L_0;
		// if (prefabName == "viking")
		String_t* L_1 = ___prefabName2;
		bool L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralD1B7E32D8B8AD0ED70C4FCF6FFEC997341F33B42, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// ground = vikingLand;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_vikingLand_7();
		V_0 = L_3;
		// }
		goto IL_0047;
	}

IL_001d:
	{
		// else if (prefabName == "greece")
		String_t* L_4 = ___prefabName2;
		bool L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralF4C0BA4E309049D644C78A07DA5C1A2D427E2E76, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// ground = greeceLand;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_greeceLand_8();
		V_0 = L_6;
		// }
		goto IL_0047;
	}

IL_0033:
	{
		// else if (prefabName == "asian")
		String_t* L_7 = ___prefabName2;
		bool L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralF9F923FBED0D4354CF3058FF0E7B261135BE34DC, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// ground = asianLand;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_asianLand_9();
		V_0 = L_9;
	}

IL_0047:
	{
		// ground.name = prefabName + "_" + xPosition.ToString() + "_0_" + zPosition.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13 = ___prefabName2;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		ArrayElementTypeCheck (L_14, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		String_t* L_16 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___xPosition0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
		ArrayElementTypeCheck (L_17, _stringLiteral904A7CE8C394B97F74C2E640DC67ADF834259805);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral904A7CE8C394B97F74C2E640DC67ADF834259805);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		String_t* L_19 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___zPosition1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
		String_t* L_20 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_18, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_10, L_20, /*hidden argument*/NULL);
		// Instantiate(ground,new Vector3(xPosition, 0, zPosition), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		float L_22 = ___xPosition0;
		float L_23 = ___zPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_22, (0.0f), L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_21, L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 map_manager::near_ground_type(System.String[0...,0...],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* ___map0, String_t* ___type1, int32_t ___xCoordinate2, int32_t ___yCoordinate3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 16);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B46_1 = 0;
	{
		// int nearGroundType = 0;
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate - 1, yCoordinate    ] == type) ? 1 : 0;
			int32_t L_0 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_1 = ___map0;
			int32_t L_2 = ___xCoordinate2;
			int32_t L_3 = ___yCoordinate3;
			String_t* L_4 = (L_1)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), L_3);
			String_t* L_5 = ___type1;
			bool L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
			G_B2_0 = L_0;
			if (L_6)
			{
				G_B3_0 = L_0;
				goto IL_0019;
			}
		}

IL_0016:
		{
			G_B4_0 = 0;
			G_B4_1 = G_B2_0;
			goto IL_001a;
		}

IL_0019:
		{
			G_B4_0 = 1;
			G_B4_1 = G_B3_0;
		}

IL_001a:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B4_1, (int32_t)G_B4_0));
			// }catch{}
			goto IL_0021;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate - 1, yCoordinate - 1] == type) ? 1 : 0;
			int32_t L_7 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_8 = ___map0;
			int32_t L_9 = ___xCoordinate2;
			int32_t L_10 = ___yCoordinate3;
			String_t* L_11 = (L_8)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
			String_t* L_12 = ___type1;
			bool L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, L_12, /*hidden argument*/NULL);
			G_B8_0 = L_7;
			if (L_13)
			{
				G_B9_0 = L_7;
				goto IL_003b;
			}
		}

IL_0038:
		{
			G_B10_0 = 0;
			G_B10_1 = G_B8_0;
			goto IL_003c;
		}

IL_003b:
		{
			G_B10_0 = 1;
			G_B10_1 = G_B9_0;
		}

IL_003c:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B10_1, (int32_t)G_B10_0));
			// }catch{}
			goto IL_0043;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0040;
		throw e;
	}

CATCH_0040:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_0043;
	} // end catch (depth: 1)

IL_0043:
	{
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate    , yCoordinate - 1] == type) ? 1 : 0;
			int32_t L_14 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_15 = ___map0;
			int32_t L_16 = ___xCoordinate2;
			int32_t L_17 = ___yCoordinate3;
			String_t* L_18 = (L_15)->GetAtUnchecked(L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
			String_t* L_19 = ___type1;
			bool L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, L_19, /*hidden argument*/NULL);
			G_B14_0 = L_14;
			if (L_20)
			{
				G_B15_0 = L_14;
				goto IL_005b;
			}
		}

IL_0058:
		{
			G_B16_0 = 0;
			G_B16_1 = G_B14_0;
			goto IL_005c;
		}

IL_005b:
		{
			G_B16_0 = 1;
			G_B16_1 = G_B15_0;
		}

IL_005c:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B16_1, (int32_t)G_B16_0));
			// }catch{}
			goto IL_0063;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0060;
		throw e;
	}

CATCH_0060:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate + 1, yCoordinate - 1] == type) ? 1 : 0;
			int32_t L_21 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_22 = ___map0;
			int32_t L_23 = ___xCoordinate2;
			int32_t L_24 = ___yCoordinate3;
			String_t* L_25 = (L_22)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
			String_t* L_26 = ___type1;
			bool L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, L_26, /*hidden argument*/NULL);
			G_B20_0 = L_21;
			if (L_27)
			{
				G_B21_0 = L_21;
				goto IL_007d;
			}
		}

IL_007a:
		{
			G_B22_0 = 0;
			G_B22_1 = G_B20_0;
			goto IL_007e;
		}

IL_007d:
		{
			G_B22_0 = 1;
			G_B22_1 = G_B21_0;
		}

IL_007e:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B22_1, (int32_t)G_B22_0));
			// }catch{}
			goto IL_0085;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0082;
		throw e;
	}

CATCH_0082:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_0085;
	} // end catch (depth: 1)

IL_0085:
	{
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate + 1, yCoordinate    ] == type) ? 1 : 0;
			int32_t L_28 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_29 = ___map0;
			int32_t L_30 = ___xCoordinate2;
			int32_t L_31 = ___yCoordinate3;
			String_t* L_32 = (L_29)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), L_31);
			String_t* L_33 = ___type1;
			bool L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, L_33, /*hidden argument*/NULL);
			G_B26_0 = L_28;
			if (L_34)
			{
				G_B27_0 = L_28;
				goto IL_009d;
			}
		}

IL_009a:
		{
			G_B28_0 = 0;
			G_B28_1 = G_B26_0;
			goto IL_009e;
		}

IL_009d:
		{
			G_B28_0 = 1;
			G_B28_1 = G_B27_0;
		}

IL_009e:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B28_1, (int32_t)G_B28_0));
			// }catch{}
			goto IL_00a5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a2;
		throw e;
	}

CATCH_00a2:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_00a5;
	} // end catch (depth: 1)

IL_00a5:
	{
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate + 1, yCoordinate + 1] == type) ? 1 : 0;
			int32_t L_35 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_36 = ___map0;
			int32_t L_37 = ___xCoordinate2;
			int32_t L_38 = ___yCoordinate3;
			String_t* L_39 = (L_36)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
			String_t* L_40 = ___type1;
			bool L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, L_40, /*hidden argument*/NULL);
			G_B32_0 = L_35;
			if (L_41)
			{
				G_B33_0 = L_35;
				goto IL_00bf;
			}
		}

IL_00bc:
		{
			G_B34_0 = 0;
			G_B34_1 = G_B32_0;
			goto IL_00c0;
		}

IL_00bf:
		{
			G_B34_0 = 1;
			G_B34_1 = G_B33_0;
		}

IL_00c0:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B34_1, (int32_t)G_B34_0));
			// }catch{}
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c4;
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_00c7;
	} // end catch (depth: 1)

IL_00c7:
	{
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate    , yCoordinate + 1] == type) ? 1 : 0;
			int32_t L_42 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_43 = ___map0;
			int32_t L_44 = ___xCoordinate2;
			int32_t L_45 = ___yCoordinate3;
			String_t* L_46 = (L_43)->GetAtUnchecked(L_44, ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)));
			String_t* L_47 = ___type1;
			bool L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_46, L_47, /*hidden argument*/NULL);
			G_B38_0 = L_42;
			if (L_48)
			{
				G_B39_0 = L_42;
				goto IL_00df;
			}
		}

IL_00dc:
		{
			G_B40_0 = 0;
			G_B40_1 = G_B38_0;
			goto IL_00e0;
		}

IL_00df:
		{
			G_B40_0 = 1;
			G_B40_1 = G_B39_0;
		}

IL_00e0:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B40_1, (int32_t)G_B40_0));
			// }catch{}
			goto IL_00e7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e4;
		throw e;
	}

CATCH_00e4:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_00e7;
	} // end catch (depth: 1)

IL_00e7:
	{
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			// nearGroundType += (map[xCoordinate - 1, yCoordinate + 1] == type) ? 1 : 0;
			int32_t L_49 = V_0;
			StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_50 = ___map0;
			int32_t L_51 = ___xCoordinate2;
			int32_t L_52 = ___yCoordinate3;
			String_t* L_53 = (L_50)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
			String_t* L_54 = ___type1;
			bool L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, L_54, /*hidden argument*/NULL);
			G_B44_0 = L_49;
			if (L_55)
			{
				G_B45_0 = L_49;
				goto IL_0101;
			}
		}

IL_00fe:
		{
			G_B46_0 = 0;
			G_B46_1 = G_B44_0;
			goto IL_0102;
		}

IL_0101:
		{
			G_B46_0 = 1;
			G_B46_1 = G_B45_0;
		}

IL_0102:
		{
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B46_1, (int32_t)G_B46_0));
			// }catch{}
			goto IL_0109;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0106;
		throw e;
	}

CATCH_0106:
	{ // begin catch(System.Object)
		// }catch{}
		// }catch{}
		goto IL_0109;
	} // end catch (depth: 1)

IL_0109:
	{
		// return nearGroundType;
		int32_t L_56 = V_0;
		return L_56;
	}
}
// System.Int32 map_manager::not_near_ground_type(System.String[0...,0...],System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t map_manager_not_near_ground_type_mCB1ABF6FAB1FC9A68124EC97EBCC6DD72228AD51 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* ___map0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___set1, String_t* ___type2, int32_t ___xCoordinate3, int32_t ___yCoordinate4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// int notNearGroundType = 0;
		V_0 = 0;
		// foreach (string item in set)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___set1;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0028;
	}

IL_0008:
	{
		// foreach (string item in set)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (item != type)
		String_t* L_5 = V_3;
		String_t* L_6 = ___type2;
		bool L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		// notNearGroundType += near_ground_type(map, item, xCoordinate, yCoordinate);
		int32_t L_8 = V_0;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_9 = ___map0;
		String_t* L_10 = V_3;
		int32_t L_11 = ___xCoordinate3;
		int32_t L_12 = ___yCoordinate4;
		int32_t L_13 = map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_13));
	}

IL_0024:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0028:
	{
		// foreach (string item in set)
		int32_t L_15 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		// return notNearGroundType;
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.String[0...,0...] map_manager::generate_map(System.Int32,System.Int32,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* map_manager_generate_map_m0BA8378ACD74C076FBADCCC3B5223620E8E7BE97 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, int32_t ___width0, int32_t ___height1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___groundItems2, int32_t ___landPercentage3, int32_t ___seed4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_generate_map_m0BA8378ACD74C076FBADCCC3B5223620E8E7BE97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_11 = NULL;
	int32_t V_12 = 0;
	String_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		// string water = groundItems[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___groundItems2;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// List<string> preLand = new List<string>(groundItems);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___groundItems2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		// preLand.RemoveAt(0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4;
		List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73(L_5, 0, /*hidden argument*/List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var);
		// string[] land = preLand.ToArray();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_5, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		V_1 = L_6;
		// int numberOfGroundItems = width * height;
		int32_t L_7 = ___width0;
		int32_t L_8 = ___height1;
		// int numberOfLandItems = (int)(((float) numberOfGroundItems) * ((float)landPercentage / 100f));
		int32_t L_9 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = ___landPercentage3;
		V_2 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)((float)((float)(((float)((float)L_10)))/(float)(100.0f))))))));
		// int numberOfWaterItems = numberOfGroundItems - numberOfLandItems;
		// string[,] map = new string[width, height];
		int32_t L_11 = ___width0;
		int32_t L_12 = ___height1;
		il2cpp_array_size_t L_14[] = { (il2cpp_array_size_t)L_11, (il2cpp_array_size_t)L_12 };
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_13 = (StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90*)GenArrayNew(StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90_il2cpp_TypeInfo_var, L_14);
		V_3 = L_13;
		// int centerXCoordinate = (int)(width / 2);
		int32_t L_15 = ___width0;
		V_4 = ((int32_t)((int32_t)L_15/(int32_t)2));
		// int centerYCoordinate = (int)(height / 2);
		int32_t L_16 = ___height1;
		V_5 = ((int32_t)((int32_t)L_16/(int32_t)2));
		// Random.InitState(seed);
		int32_t L_17 = ___seed4;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(L_17, /*hidden argument*/NULL);
		// for (int localWidth = 0; localWidth < width; localWidth++)
		V_6 = 0;
		goto IL_0068;
	}

IL_0047:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		V_7 = 0;
		goto IL_005d;
	}

IL_004c:
	{
		// map[localWidth, localHeight] = water;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_18 = V_3;
		int32_t L_19 = V_6;
		int32_t L_20 = V_7;
		String_t* L_21 = V_0;
		(L_18)->SetAtUnchecked(L_19, L_20, L_21);
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005d:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_23 = V_7;
		int32_t L_24 = ___width0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0068:
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_26 = V_6;
		int32_t L_27 = ___width0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0047;
		}
	}
	{
		// for (int index = 0; index < land.Length; index++)
		V_8 = 0;
		goto IL_00c2;
	}

IL_0072:
	{
		// int localWidth = 0;
		V_9 = 0;
		// int localHeight = 0;
		V_10 = 0;
		goto IL_009c;
	}

IL_007a:
	{
		// localWidth  = Random.Range((centerXCoordinate - 2), (centerXCoordinate + (land.Length)));
		int32_t L_28 = V_4;
		int32_t L_29 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_1;
		int32_t L_31 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))), /*hidden argument*/NULL);
		V_9 = L_31;
		// localHeight = Random.Range((centerYCoordinate - 2), (centerYCoordinate + (land.Length)));
		int32_t L_32 = V_5;
		int32_t L_33 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_1;
		int32_t L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))), /*hidden argument*/NULL);
		V_10 = L_35;
	}

IL_009c:
	{
		// while (map[localWidth, localHeight] != water)
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_36 = V_3;
		int32_t L_37 = V_9;
		int32_t L_38 = V_10;
		String_t* L_39 = (L_36)->GetAtUnchecked(L_37, L_38);
		String_t* L_40 = V_0;
		bool L_41 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_39, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_007a;
		}
	}
	{
		// map[localWidth, localHeight] = land[index];
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_42 = V_3;
		int32_t L_43 = V_9;
		int32_t L_44 = V_10;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_1;
		int32_t L_46 = V_8;
		int32_t L_47 = L_46;
		String_t* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		(L_42)->SetAtUnchecked(L_43, L_44, L_48);
		// for (int index = 0; index < land.Length; index++)
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00c2:
	{
		// for (int index = 0; index < land.Length; index++)
		int32_t L_50 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))))
		{
			goto IL_0072;
		}
	}
	{
		// foreach (string type in land)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = V_1;
		V_11 = L_52;
		V_12 = 0;
		goto IL_0166;
	}

IL_00d4:
	{
		// foreach (string type in land)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = V_11;
		int32_t L_54 = V_12;
		int32_t L_55 = L_54;
		String_t* L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_13 = L_56;
		// int numberOfLandForThisType = (numberOfLandItems / land.Length) - 1;
		int32_t L_57 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = V_1;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_57/(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))), (int32_t)1));
		goto IL_015b;
	}

IL_00e6:
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		V_15 = 0;
		goto IL_0156;
	}

IL_00eb:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		V_16 = 0;
		goto IL_014b;
	}

IL_00f0:
	{
		// if ((near_ground_type(map, type, localWidth, localHeight) >= Random.Range(1, 2)) &&
		//     (not_near_ground_type(map, land, type, localWidth, localHeight) >= Random.Range(0, 4)) &&
		//    (map[localWidth, localHeight] == water) &&
		//    (numberOfLandForThisType != 0) )
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_59 = V_3;
		String_t* L_60 = V_13;
		int32_t L_61 = V_15;
		int32_t L_62 = V_16;
		int32_t L_63 = map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494(__this, L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		int32_t L_64 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0145;
		}
	}
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_65 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = V_1;
		String_t* L_67 = V_13;
		int32_t L_68 = V_15;
		int32_t L_69 = V_16;
		int32_t L_70 = map_manager_not_near_ground_type_mCB1ABF6FAB1FC9A68124EC97EBCC6DD72228AD51(__this, L_65, L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
		int32_t L_71 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0145;
		}
	}
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_72 = V_3;
		int32_t L_73 = V_15;
		int32_t L_74 = V_16;
		String_t* L_75 = (L_72)->GetAtUnchecked(L_73, L_74);
		String_t* L_76 = V_0;
		bool L_77 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_75, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_78 = V_14;
		if (!L_78)
		{
			goto IL_0145;
		}
	}
	{
		// map[localWidth, localHeight] = type;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_79 = V_3;
		int32_t L_80 = V_15;
		int32_t L_81 = V_16;
		String_t* L_82 = V_13;
		(L_79)->SetAtUnchecked(L_80, L_81, L_82);
		// numberOfLandForThisType--;
		int32_t L_83 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1));
	}

IL_0145:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_84 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_014b:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_85 = V_16;
		int32_t L_86 = ___width0;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_00f0;
		}
	}
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_87 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_0156:
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_88 = V_15;
		int32_t L_89 = ___width0;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_00eb;
		}
	}

IL_015b:
	{
		// while (numberOfLandForThisType > 0)
		int32_t L_90 = V_14;
		if ((((int32_t)L_90) > ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_91 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_0166:
	{
		// foreach (string type in land)
		int32_t L_92 = V_12;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = V_11;
		if ((((int32_t)L_92) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))))
		{
			goto IL_00d4;
		}
	}
	{
		// return map;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_94 = V_3;
		return L_94;
	}
}
// System.String[0...,0...] map_manager::generate_map2(System.Int32,System.Int32,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* map_manager_generate_map2_m92515DB05AB05552DE70C20AF13A10C25F6C0AB1 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, int32_t ___width0, int32_t ___height1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___groundItems2, int32_t ___landPercentage3, int32_t ___seed4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_generate_map2_m92515DB05AB05552DE70C20AF13A10C25F6C0AB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// string water = groundItems[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___groundItems2;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// List<string> preLand = new List<string>(groundItems);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___groundItems2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		// preLand.RemoveAt(0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4;
		List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73(L_5, 0, /*hidden argument*/List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var);
		// string[] land = preLand.ToArray();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_5, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		V_1 = L_6;
		// int numberOfGroundItems = width * height;
		int32_t L_7 = ___width0;
		int32_t L_8 = ___height1;
		// int numberOfLandItems = (int)(((float) numberOfGroundItems) * ((float)landPercentage / 100f));
		int32_t L_9 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = ___landPercentage3;
		V_2 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)((float)((float)(((float)((float)L_10)))/(float)(100.0f))))))));
		// int numberOfWaterItems = numberOfGroundItems - numberOfLandItems;
		// string[,] map = new string[width, height];
		int32_t L_11 = ___width0;
		int32_t L_12 = ___height1;
		il2cpp_array_size_t L_14[] = { (il2cpp_array_size_t)L_11, (il2cpp_array_size_t)L_12 };
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_13 = (StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90*)GenArrayNew(StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90_il2cpp_TypeInfo_var, L_14);
		V_3 = L_13;
		// int centerXCoordinate = (int)(width / 2);
		int32_t L_15 = ___width0;
		// int centerYCoordinate = (int)(height / 2);
		int32_t L_16 = ___height1;
		// Random.InitState(seed);
		int32_t L_17 = ___seed4;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(L_17, /*hidden argument*/NULL);
		// for (int localWidth = 0; localWidth < width; localWidth++)
		V_4 = 0;
		goto IL_0066;
	}

IL_0045:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		V_5 = 0;
		goto IL_005b;
	}

IL_004a:
	{
		// map[localWidth, localHeight] = water;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		String_t* L_21 = V_0;
		(L_18)->SetAtUnchecked(L_19, L_20, L_21);
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005b:
	{
		// for (int localHeight = 0; localHeight < width; localHeight++)
		int32_t L_23 = V_5;
		int32_t L_24 = ___width0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_004a;
		}
	}
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0066:
	{
		// for (int localWidth = 0; localWidth < width; localWidth++)
		int32_t L_26 = V_4;
		int32_t L_27 = ___width0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0045;
		}
	}
	{
		// foreach (string type in land)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = V_1;
		V_6 = L_28;
		V_7 = 0;
		goto IL_017c;
	}

IL_0076:
	{
		// foreach (string type in land)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_6;
		int32_t L_30 = V_7;
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_8 = L_32;
		// int localWidth  = Random.Range(1, (width - 2));
		int32_t L_33 = ___width0;
		int32_t L_34 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)2)), /*hidden argument*/NULL);
		V_9 = L_34;
		// int localHeight = Random.Range(1, (width - 2));
		int32_t L_35 = ___width0;
		int32_t L_36 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)2)), /*hidden argument*/NULL);
		V_10 = L_36;
		goto IL_00ab;
	}

IL_0095:
	{
		// localWidth  = Random.Range(1, (width - 2));
		int32_t L_37 = ___width0;
		int32_t L_38 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)2)), /*hidden argument*/NULL);
		V_9 = L_38;
		// localHeight = Random.Range(1, (width - 2));
		int32_t L_39 = ___width0;
		int32_t L_40 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)2)), /*hidden argument*/NULL);
		V_10 = L_40;
	}

IL_00ab:
	{
		// while ((map[localWidth, localHeight] != water) &&
		//        (map[localWidth + 1, localHeight] != water))
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_41 = V_3;
		int32_t L_42 = V_9;
		int32_t L_43 = V_10;
		String_t* L_44 = (L_41)->GetAtUnchecked(L_42, L_43);
		String_t* L_45 = V_0;
		bool L_46 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_00d1;
		}
	}
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_47 = V_3;
		int32_t L_48 = V_9;
		int32_t L_49 = V_10;
		String_t* L_50 = (L_47)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)), L_49);
		String_t* L_51 = V_0;
		bool L_52 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_50, L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0095;
		}
	}

IL_00d1:
	{
		// map[localWidth, localHeight]     = type;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_53 = V_3;
		int32_t L_54 = V_9;
		int32_t L_55 = V_10;
		String_t* L_56 = V_8;
		(L_53)->SetAtUnchecked(L_54, L_55, L_56);
		// map[localWidth + 1, localHeight] = type;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_57 = V_3;
		int32_t L_58 = V_9;
		int32_t L_59 = V_10;
		String_t* L_60 = V_8;
		(L_57)->SetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)), L_59, L_60);
		// for (int numberOfLandForThisType = (numberOfLandItems / land.Length) - 2; numberOfLandForThisType > 0; numberOfLandForThisType--)
		int32_t L_61 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = V_1;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_61/(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))), (int32_t)2));
		goto IL_0171;
	}

IL_00f6:
	{
		// for (int localXCoordinate = 0; localXCoordinate < width; localXCoordinate++)
		V_12 = 0;
		goto IL_0166;
	}

IL_00fb:
	{
		// for (int localYCoordinate = 0; localYCoordinate < width; localYCoordinate++)
		V_13 = 0;
		goto IL_015b;
	}

IL_0100:
	{
		// if ((near_ground_type(map, type, localXCoordinate, localYCoordinate) >= Random.Range(2, 4)) &&
		//     (not_near_ground_type(map, land, type, localXCoordinate, localYCoordinate) >= Random.Range(0, 4)) &&
		//    (map[localXCoordinate, localYCoordinate] == water) &&
		//    (numberOfLandForThisType != 0) )
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_63 = V_3;
		String_t* L_64 = V_8;
		int32_t L_65 = V_12;
		int32_t L_66 = V_13;
		int32_t L_67 = map_manager_near_ground_type_m24A990E32D526ADB0E482E6529F853857B507494(__this, L_63, L_64, L_65, L_66, /*hidden argument*/NULL);
		int32_t L_68 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, 4, /*hidden argument*/NULL);
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_0155;
		}
	}
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_69 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = V_1;
		String_t* L_71 = V_8;
		int32_t L_72 = V_12;
		int32_t L_73 = V_13;
		int32_t L_74 = map_manager_not_near_ground_type_mCB1ABF6FAB1FC9A68124EC97EBCC6DD72228AD51(__this, L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		int32_t L_75 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0155;
		}
	}
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_76 = V_3;
		int32_t L_77 = V_12;
		int32_t L_78 = V_13;
		String_t* L_79 = (L_76)->GetAtUnchecked(L_77, L_78);
		String_t* L_80 = V_0;
		bool L_81 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_79, L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_82 = V_11;
		if (!L_82)
		{
			goto IL_0155;
		}
	}
	{
		// map[localXCoordinate, localYCoordinate] = type;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_83 = V_3;
		int32_t L_84 = V_12;
		int32_t L_85 = V_13;
		String_t* L_86 = V_8;
		(L_83)->SetAtUnchecked(L_84, L_85, L_86);
		// numberOfLandForThisType--;
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1));
	}

IL_0155:
	{
		// for (int localYCoordinate = 0; localYCoordinate < width; localYCoordinate++)
		int32_t L_88 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
	}

IL_015b:
	{
		// for (int localYCoordinate = 0; localYCoordinate < width; localYCoordinate++)
		int32_t L_89 = V_13;
		int32_t L_90 = ___width0;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_0100;
		}
	}
	{
		// for (int localXCoordinate = 0; localXCoordinate < width; localXCoordinate++)
		int32_t L_91 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_0166:
	{
		// for (int localXCoordinate = 0; localXCoordinate < width; localXCoordinate++)
		int32_t L_92 = V_12;
		int32_t L_93 = ___width0;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_00fb;
		}
	}
	{
		// for (int numberOfLandForThisType = (numberOfLandItems / land.Length) - 2; numberOfLandForThisType > 0; numberOfLandForThisType--)
		int32_t L_94 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1));
	}

IL_0171:
	{
		// for (int numberOfLandForThisType = (numberOfLandItems / land.Length) - 2; numberOfLandForThisType > 0; numberOfLandForThisType--)
		int32_t L_95 = V_11;
		if ((((int32_t)L_95) > ((int32_t)0)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_96 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_017c:
	{
		// foreach (string type in land)
		int32_t L_97 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = V_6;
		if ((((int32_t)L_97) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))))
		{
			goto IL_0076;
		}
	}
	{
		// return map;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_99 = V_3;
		return L_99;
	}
}
// System.Void map_manager::load_map(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_load_map_m961B839BEA8A99BDB4351F894AB35FB5CE133637 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_load_map_m961B839BEA8A99BDB4351F894AB35FB5CE133637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	{
		// string[,] map = generate_map2(mapWidth, mapWidth, new string[4]{ "water", "viking", "greece", "asian" }, 80, int.Parse(parameters[0]));
		int32_t L_0 = __this->get_mapWidth_5();
		int32_t L_1 = __this->get_mapWidth_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteralD1B7E32D8B8AD0ED70C4FCF6FFEC997341F33B42);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD1B7E32D8B8AD0ED70C4FCF6FFEC997341F33B42);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteralF4C0BA4E309049D644C78A07DA5C1A2D427E2E76);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF4C0BA4E309049D644C78A07DA5C1A2D427E2E76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralF9F923FBED0D4354CF3058FF0E7B261135BE34DC);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF9F923FBED0D4354CF3058FF0E7B261135BE34DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___parameters0;
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_9, /*hidden argument*/NULL);
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_11 = map_manager_generate_map2_m92515DB05AB05552DE70C20AF13A10C25F6C0AB1(__this, L_0, L_1, L_6, ((int32_t)80), L_10, /*hidden argument*/NULL);
		// int xCoordinate = 0 - (mapWidth / 2);
		int32_t L_12 = __this->get_mapWidth_5();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((int32_t)((int32_t)L_12/(int32_t)2))));
		// int yCoordinate = 0 - (mapWidth / 2);
		int32_t L_13 = __this->get_mapWidth_5();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((int32_t)((int32_t)L_13/(int32_t)2))));
		// int sparatedDistance = (int)water.GetComponent<Renderer>().bounds.size.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_water_6();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_15 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_14, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_16 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		V_2 = (((int32_t)((int32_t)L_18)));
		// int currentWidthLength = 0;
		V_3 = 0;
		// foreach (string ground in map)
		V_5 = L_11;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_19 = V_5;
		int32_t L_20 = Array_GetUpperBound_m2A1E31C8CD49C3C21E240B6119E96772977F0834((RuntimeArray *)(RuntimeArray *)L_19, 0, /*hidden argument*/NULL);
		V_6 = L_20;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_21 = V_5;
		int32_t L_22 = Array_GetUpperBound_m2A1E31C8CD49C3C21E240B6119E96772977F0834((RuntimeArray *)(RuntimeArray *)L_21, 1, /*hidden argument*/NULL);
		V_7 = L_22;
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_23 = V_5;
		int32_t L_24 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)(RuntimeArray *)L_23, 0, /*hidden argument*/NULL);
		V_8 = L_24;
		goto IL_00f5;
	}

IL_009c:
	{
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_25 = V_5;
		int32_t L_26 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)(RuntimeArray *)L_25, 1, /*hidden argument*/NULL);
		V_9 = L_26;
		goto IL_00e9;
	}

IL_00a8:
	{
		// foreach (string ground in map)
		StringU5BU2CU5D_t57ABDCA8B352E243BFC6950153456ACCEF63DC90* L_27 = V_5;
		int32_t L_28 = V_8;
		int32_t L_29 = V_9;
		String_t* L_30 = (L_27)->GetAtUnchecked(L_28, L_29);
		V_10 = L_30;
		// create_ground(xCoordinate, yCoordinate, ground);
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		String_t* L_33 = V_10;
		map_manager_create_ground_m8CCDF9A6AC1FAC26A1CA26794F88E2CF5D94649D(__this, (((float)((float)L_31))), (((float)((float)L_32))), L_33, /*hidden argument*/NULL);
		// xCoordinate        += sparatedDistance;
		int32_t L_34 = V_0;
		int32_t L_35 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		// currentWidthLength += 1;
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		// if (currentWidthLength >= mapWidth)
		int32_t L_37 = V_3;
		int32_t L_38 = __this->get_mapWidth_5();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00e3;
		}
	}
	{
		// yCoordinate        += sparatedDistance;
		int32_t L_39 = V_1;
		int32_t L_40 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
		// xCoordinate         = 0 - (mapWidth / 2);
		int32_t L_41 = __this->get_mapWidth_5();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((int32_t)((int32_t)L_41/(int32_t)2))));
		// currentWidthLength  = 0;
		V_3 = 0;
	}

IL_00e3:
	{
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00e9:
	{
		// foreach (string ground in map)
		int32_t L_43 = V_9;
		int32_t L_44 = V_7;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f5:
	{
		// foreach (string ground in map)
		int32_t L_46 = V_8;
		int32_t L_47 = V_6;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_009c;
		}
	}
	{
		// }
		return;
	}
}
// System.String map_manager::get_current(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* map_manager_get_current_mA83B17A688B31912AE5D29D6ADEA3FC80BFD0064 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// return currentSelected;
		String_t* L_0 = __this->get_currentSelected_10();
		return L_0;
	}
}
// System.Void map_manager::set_current(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_set_current_mDBAF90E13FDA32F1FDD70617786785F4561AE10F (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___input0, const RuntimeMethod* method)
{
	{
		// this.currentSelected = input[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___input0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_currentSelected_10(L_2);
		// }
		return;
	}
}
// System.Void map_manager::unselect_tile(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager_unselect_tile_m2849BBA69E8F2E81FE7807BC727BF55B584EB400 (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (map_manager_unselect_tile_m2849BBA69E8F2E81FE7807BC727BF55B584EB400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function(get_current(new string[0] {}), "unselect", new string[0] {});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_2 = map_manager_get_current_mA83B17A688B31912AE5D29D6ADEA3FC80BFD0064_inline(__this, L_1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, L_2, _stringLiteralA7AF098AEB356CEB5A3ADD3886207C8E24C72E4E, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void map_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map_manager__ctor_m7CD53C22D90526C3879B94BAB3508EAAC7FCAEBC (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, const RuntimeMethod* method)
{
	{
		// public int mapWidth = 10;
		__this->set_mapWidth_5(((int32_t)10));
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
// System.Void match_manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_Start_m6CBCFC6E4C9362919EE45CAD0C2B22A69BAD618B (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_Start_m6CBCFC6E4C9362919EE45CAD0C2B22A69BAD618B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager = GameObject.Find("network_manager").GetComponent<import_manager>(); // Connects to the import_manager.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, /*hidden argument*/NULL);
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B(L_0, /*hidden argument*/GameObject_GetComponent_Tisimport_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304_m78BF257F3A44701D52C7A1C93B078EE0E21EFC4B_RuntimeMethod_var);
		__this->set_import_manager_4(L_1);
		// }
		return;
	}
}
// System.Void match_manager::receive_test_data(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_receive_test_data_mF26CE7F7DF8B43DCE95D67A3DCBC7E364FBC8663 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_receive_test_data_mF26CE7F7DF8B43DCE95D67A3DCBC7E364FBC8663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void match_manager::set_id(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_id_m0D92A136BFF5274F519055362EC62DE3439CE6CD (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// this.matchId = int.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_2, /*hidden argument*/NULL);
		__this->set_matchId_5(L_3);
		// }
		return;
	}
}
// System.Void match_manager::set_host(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_host_m6D37AE5C0AA2E1C50355F0B53296959E29AF1751 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// this.isHost = true;
		__this->set_isHost_6((bool)1);
		// }
		return;
	}
}
// System.String match_manager::get_type(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* match_manager_get_type_m7DAE40930EF1CEA2FE377EBDA29F08ABEBC453E5 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// return this.type;
		String_t* L_0 = __this->get_type_7();
		return L_0;
	}
}
// System.Void match_manager::set_map(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_map_m07B0BB7F4521A46714A50A6CB30A98EB447B3450 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// this.map = int.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_2, /*hidden argument*/NULL);
		__this->set_map_8(L_3);
		// }
		return;
	}
}
// System.Void match_manager::set_network_game()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_network_game_mD4808198D6AA3833632D2E5C25912E9A474805E8 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_set_network_game_mD4808198D6AA3833632D2E5C25912E9A474805E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.type = "network";
		__this->set_type_7(_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		// }
		return;
	}
}
// System.Void match_manager::set_local_game()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_local_game_m402CB2241788F96CC318DD8C82A0D4E2451441C6 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_set_local_game_m402CB2241788F96CC318DD8C82A0D4E2451441C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.type = "local";
		__this->set_type_7(_stringLiteralDEA070F4AC99A78BF17CB1D8CC143F070CD0A3B7);
		// }
		return;
	}
}
// System.Void match_manager::set_host_game()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_host_game_m1C0B7B6DB5566B8EB9A9B09743DF8C5021817419 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_set_host_game_m1C0B7B6DB5566B8EB9A9B09743DF8C5021817419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.type = "host";
		__this->set_type_7(_stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		// isReady = new List<bool>();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)il2cpp_codegen_object_new(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9(L_0, /*hidden argument*/List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		__this->set_isReady_12(L_0);
		// }
		return;
	}
}
// System.Void match_manager::get_player_civilization(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_get_player_civilization_m651864B25DA360F39D3B453157F2B44764FAB027 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_get_player_civilization_m651864B25DA360F39D3B453157F2B44764FAB027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function(parameters[0], parameters[1], new string[1] {this.playerCivilization});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___parameters0;
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___parameters0;
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = __this->get_playerCivilization_9();
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, L_3, L_6, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void match_manager::set_player_civilization(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_player_civilization_mE5C11B66A86738725A4306E03D95ABB49872B45B (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// this.playerCivilization = parameters[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_playerCivilization_9(L_2);
		// }
		return;
	}
}
// System.Void match_manager::set_match_map(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_match_map_m5BF7B0D936EC3A018BF164C528402006EE0D8804 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void match_manager::set_numberOfPlayers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_set_numberOfPlayers_mECBA1C68C23CEDEC3D23CF07BA6D3067F57F2563 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// this.numberOfPlayers = int.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_2, /*hidden argument*/NULL);
		__this->set_numberOfPlayers_11(L_3);
		// }
		return;
	}
}
// System.Void match_manager::setup_match(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_setup_match_mA3B2134DA673DE3F00FC822D84D202DD4C3F9F62 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_setup_match_mA3B2134DA673DE3F00FC822D84D202DD4C3F9F62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Setup_match is started");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral64C361F4296F64892342A447BD41E24EF08A6EB8, /*hidden argument*/NULL);
		// Debug.Log(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___parameters0;
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// this.matchId = int.Parse(parameters[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___parameters0;
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_5, /*hidden argument*/NULL);
		__this->set_matchId_5(L_6);
		// this.isHost  = bool.Parse(parameters[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___parameters0;
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_10 = Boolean_Parse_m97AFBD113AE4629041678100C5A595F3529C7F7D(L_9, /*hidden argument*/NULL);
		__this->set_isHost_6(L_10);
		// if (this.isHost)
		bool L_11 = __this->get_isHost_6();
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		// isReady = new List<bool>();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_12 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)il2cpp_codegen_object_new(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9(L_12, /*hidden argument*/List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		__this->set_isReady_12(L_12);
		// this.map = Random.Range(1000, 2000);
		int32_t L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)1000), ((int32_t)2000), /*hidden argument*/NULL);
		__this->set_map_8(L_13);
		// import_manager.run_function_all("server_functions", "set_match_map", new string[1] {this.map.ToString()});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_14 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		int32_t* L_17 = __this->get_address_of_map_8();
		String_t* L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_17, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC(L_14, _stringLiteralB4E4CA5C5C687ADADDAE2F0A9AC4EF78D5A74478, _stringLiteralA98BA42F5DFA50AB8385E1A20C53FC9A88A9E8F7, L_16, /*hidden argument*/NULL);
		// }
		goto IL_008f;
	}

IL_0081:
	{
		// this.map     = int.Parse(parameters[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = ___parameters0;
		int32_t L_20 = 2;
		String_t* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_21, /*hidden argument*/NULL);
		__this->set_map_8(L_22);
	}

IL_008f:
	{
		// import_manager.run_function("map", "load_map", new string[1] {this.map.ToString()});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_23 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		int32_t* L_26 = __this->get_address_of_map_8();
		String_t* L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_27);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_23, _stringLiteral0D52B98D58DD8EF50D05DDB2F9E6A291EFC7F82A, _stringLiteral638D189CEDF42AEBF22B64BE76876A3810A45347, L_25, /*hidden argument*/NULL);
		// import_manager.run_function_all("network_manager", "vote_ready", new string[0] {});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_28 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC(L_28, _stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, _stringLiteral0E52EE6C36542E7E5AC363181E7D02F9A16D3DF8, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void match_manager::vote_ready(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_vote_ready_mC104A64CAB1EFC6E0F2E62E72B569F149B6E460E (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_vote_ready_mC104A64CAB1EFC6E0F2E62E72B569F149B6E460E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isHost)
		bool L_0 = __this->get_isHost_6();
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// isReady.Add(true);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_1 = __this->get_isReady_12();
		List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735(L_1, (bool)1, /*hidden argument*/List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var);
		// if ((isReady.Count == numberOfPlayers) || true)
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_2 = __this->get_isReady_12();
		int32_t L_3 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_2, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		int32_t L_4 = __this->get_numberOfPlayers_11();
		// GameObject.Find("Main Camera").GetComponent<PanZoom>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, /*hidden argument*/NULL);
		PanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC * L_6 = GameObject_GetComponent_TisPanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_mAE06080ECB5169182FED5E1E36946CE2830AB057(L_5, /*hidden argument*/GameObject_GetComponent_TisPanZoom_t5B73A7D1F528D07EEB3BAC25529B8EDA6115A4CC_mAE06080ECB5169182FED5E1E36946CE2830AB057_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)1, /*hidden argument*/NULL);
		// import_manager.run_function_all("MenuManager", "removeWaitPanel", new string[0] {});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_7 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC(L_7, _stringLiteral160356CF5C664893697131099148ADEEA00E28DA, _stringLiteral0F81E351FFBE529464AD17F3EC889D95B52599B2, L_8, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void match_manager::start_match()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_start_match_m8DD98737CC7E2164B2160DFA6D63B8A4D37E795F (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_start_match_m8DD98737CC7E2164B2160DFA6D63B8A4D37E795F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.type == "network")
		String_t* L_0 = __this->get_type_7();
		bool L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// import_manager.run_function_all("server_functions", "add_player", new string[2]{this.championName, this.playerCivilization});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_2 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = __this->get_championName_10();
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		String_t* L_7 = __this->get_playerCivilization_9();
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		import_manager_run_function_all_m703540C5E95DF27BA8EDD82652CE4023AE8049FC(L_2, _stringLiteralB4E4CA5C5C687ADADDAE2F0A9AC4EF78D5A74478, _stringLiteralAB9F76891AC53723CE75B62A2955861E9C70310A, L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void match_manager::leave_match()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager_leave_match_m616AC0310970ABE944A5BA0D0A2955C105BC3F4E (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager_leave_match_m616AC0310970ABE944A5BA0D0A2955C105BC3F4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// import_manager.run_function("network_manager", "reset", new string[0] {});
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_0 = __this->get_import_manager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_0, _stringLiteral9C926C0BA7ECD656798448C1C1838816B72F0B43, _stringLiteral777AE62A4AAF93B33F90DF3E12489F43ABA14E39, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void match_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void match_manager__ctor_mE2FBB11542DFC44FEBE5AD843CBBC5F8781EF8B0 (match_manager_tF75FD137F8A38AE7016CE68E4E0ED351379E8E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (match_manager__ctor_mE2FBB11542DFC44FEBE5AD843CBBC5F8781EF8B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string championName = "start_name";       // The name of the players champion.
		__this->set_championName_10(_stringLiteralA2A08DBA5A9FC75133D68F1749B907F3349C76EB);
		// int        numberOfPlayers = 1000; // The number of current players in the game.
		__this->set_numberOfPlayers_11(((int32_t)1000));
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
// System.Void menu_manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_manager_Awake_m1B0AEF76B3E37BA262F3F75D69E392D4608907E0 (menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08 * __this, const RuntimeMethod* method)
{
	{
		// ChangeGroup(currentGroup);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_currentGroup_5();
		menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_manager::ChangeGroup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0 (menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___groupToActivate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// GameObject newGroup = groupToActivate;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___groupToActivate0;
		V_0 = L_0;
		// Debug.Log(newGroup.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		String_t* L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// foreach (GameObject group in groups)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_groups_4();
		V_1 = L_3;
		V_2 = 0;
		goto IL_0043;
	}

IL_0018:
	{
		// foreach (GameObject group in groups)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (group.name == newGroup.name)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_3;
		String_t* L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		String_t* L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		bool L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		// group.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_3;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_003f;
	}

IL_0038:
	{
		// group.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_3;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_003f:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		// foreach (GameObject group in groups)
		int32_t L_16 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void menu_manager::removeWaitPanel(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_manager_removeWaitPanel_mA4617AF4A8A4558278AC536763F8BD7ABA2CB290 (menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_manager_removeWaitPanel_mA4617AF4A8A4558278AC536763F8BD7ABA2CB290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeGroup(GameObject.Find("Canvas").transform.GetChild(3).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		menu_manager_ChangeGroup_m539A3DA6E64A29992DF448F8BEB5FB52A1FBD1C0(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_manager__ctor_m2F412AADC3854007591540E5640674186CAA9647 (menu_manager_t9B295FE0265F9362AC4F806ECF1EA55162DB6F08 * __this, const RuntimeMethod* method)
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
// System.Void menu_scene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_scene_Start_mFF5E35E384E82A89C6AE7BECA46A10BA7C9DD334 (menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_scene_Start_mFF5E35E384E82A89C6AE7BECA46A10BA7C9DD334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fadeGroup = FindObjectOfType<CanvasGroup>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84(/*hidden argument*/Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84_RuntimeMethod_var);
		__this->set_fadeGroup_4(L_0);
		// fadeGroup.alpha = 1;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = __this->get_fadeGroup_4();
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_1, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_scene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_scene_Update_mF5C9724FEECEC2AE284BA948092D4F911C6E1417 (menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93 * __this, const RuntimeMethod* method)
{
	{
		// fadeGroup.alpha = 1 - Time.timeSinceLevelLoad * fadeInSpeed;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = __this->get_fadeGroup_4();
		float L_1 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		float L_2 = __this->get_fadeInSpeed_5();
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_0, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_scene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_scene__ctor_m44BF1E4577B7A2999AB003B16FE0E7F90917FABF (menu_scene_t51EB2ACA4F7AF7DF56452A1657611BFC06373D93 * __this, const RuntimeMethod* method)
{
	{
		// private float fadeInSpeed = 0.33f; // Speed the scene fades in
		__this->set_fadeInSpeed_5((0.330000013f));
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
// System.Void panel_toggle::toggle_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void panel_toggle_toggle_panel_m2B91001FFF31AE894878D6FE4A2B75827ADDA2B2 (panel_toggle_tAD76B8C9E2E12D4547C69066DCF48FBE2B964C15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (panel_toggle_toggle_panel_m2B91001FFF31AE894878D6FE4A2B75827ADDA2B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (panel != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panel_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// panel.SetActive(!panel.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panel_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_panel_4();
		bool L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void panel_toggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void panel_toggle__ctor_mFD3D3C952D22CCB2CAE1C500825CDC021A91628C (panel_toggle_tAD76B8C9E2E12D4547C69066DCF48FBE2B964C15 * __this, const RuntimeMethod* method)
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
// System.Void preload::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void preload_Start_m90A2A82B176354479CF7AD13B1DF34BC81404D32 (preload_t0B52930C1F391272030E369F9367669C70EC5857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (preload_Start_m90A2A82B176354479CF7AD13B1DF34BC81404D32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fadeGroup = FindObjectOfType<CanvasGroup>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84(/*hidden argument*/Object_FindObjectOfType_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m0F7926B5F29EF5390694A74A83A01808FAA71E84_RuntimeMethod_var);
		__this->set_fadeGroup_4(L_0);
		// fadeGroup.alpha = 1;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = __this->get_fadeGroup_4();
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_1, (1.0f), /*hidden argument*/NULL);
		// if (Time.time < minimumTextTime)
		float L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3 = __this->get_minimumTextTime_6();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		// loadTime = minimumTextTime;
		float L_4 = __this->get_minimumTextTime_6();
		__this->set_loadTime_5(L_4);
		return;
	}

IL_0035:
	{
		// loadTime = Time.time;
		float L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_loadTime_5(L_5);
		// }
		return;
	}
}
// System.Void preload::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void preload_Update_m5A002E26E21E81AC949B107D1402885D4DB9F5BB (preload_t0B52930C1F391272030E369F9367669C70EC5857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (preload_Update_m5A002E26E21E81AC949B107D1402885D4DB9F5BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Time.time < minimumTextTime)
		float L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_minimumTextTime_6();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		// fadeGroup.alpha = 1 - Time.time;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_2 = __this->get_fadeGroup_4();
		float L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_2, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_3)), /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if(Time.time > minimumTextTime && loadTime !=0)
		float L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_minimumTextTime_6();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0070;
		}
	}
	{
		float L_6 = __this->get_loadTime_5();
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		// fadeGroup.alpha = Time.time - minimumTextTime;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_7 = __this->get_fadeGroup_4();
		float L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_minimumTextTime_6();
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_7, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		// if(fadeGroup.alpha >= 1)
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_10 = __this->get_fadeGroup_4();
		float L_11 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_10, /*hidden argument*/NULL);
		if ((!(((float)L_11) >= ((float)(1.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// SceneManager.LoadScene("Start");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void preload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void preload__ctor_m2BFBEFCA12E420C39C07D1FF596A0A5BFE3C6F18 (preload_t0B52930C1F391272030E369F9367669C70EC5857 * __this, const RuntimeMethod* method)
{
	{
		// private float minimumTextTime = 3.0f; // Minimum Time of that scene
		__this->set_minimumTextTime_6((3.0f));
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
// System.Void server_manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_Start_mA776C5F0039ABA6BF0E008E5558340138F1421C3 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (server_manager_Start_mA776C5F0039ABA6BF0E008E5558340138F1421C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m9BDD3701A2EE71C71C58C8695F3DC2A84009492D_RuntimeMethod_var);
		return;
	}
}
// System.Void server_manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_Update_mC821B02C501A6EC72CBE8D4534B6F9F34E3AA339 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void server_manager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_OnApplicationQuit_mFDA03EE53EAB0078BC02382AD150B84048E029F8 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (server_manager_OnApplicationQuit_mFDA03EE53EAB0078BC02382AD150B84048E029F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_m7C34925A426BC91A264BA5828CE9C9F9F07ED793_RuntimeMethod_var);
		return;
	}
}
// System.Void server_manager::deliver_message(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_deliver_message_mC9ED449AA59784896D20134DE65A69CA9F3A0EA4 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (server_manager_deliver_message_mC9ED449AA59784896D20134DE65A69CA9F3A0EA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * V_0 = NULL;
	{
		// var message = JsonUtility.FromJson<update_message>(System.Text.Encoding.UTF8.GetString(bytes));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * L_3 = JsonUtility_FromJson_Tisupdate_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_m1598824EE41C901EDFA7AA87C110A88A9F429789(L_2, /*hidden argument*/JsonUtility_FromJson_Tisupdate_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_m1598824EE41C901EDFA7AA87C110A88A9F429789_RuntimeMethod_var);
		V_0 = L_3;
		// GameObject.Find(message.gameObject).SendMessage(message.function, message.parameters);
		update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * L_4 = V_0;
		String_t* L_5 = L_4->get_gameObject_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_5, /*hidden argument*/NULL);
		update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * L_7 = V_0;
		String_t* L_8 = L_7->get_function_1();
		update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * L_9 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9->get_parameters_2();
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_6, L_8, (RuntimeObject *)(RuntimeObject *)L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void server_manager::send(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_send_m3BAE5F09FCA8BD7AE05936363EA53E83658F5B23 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (server_manager_send_m3BAE5F09FCA8BD7AE05936363EA53E83658F5B23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webSocket.SendText(JsonUtility.ToJson(new update_message(gameObject, function, parameters)));
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_0 = __this->get_webSocket_5();
		String_t* L_1 = ___gameObject0;
		String_t* L_2 = ___function1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___parameters2;
		update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * L_4 = (update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E *)il2cpp_codegen_object_new(update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E_il2cpp_TypeInfo_var);
		update_message__ctor_mEFC19B434569A1352B60254742D38E1F77E6D62B(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_4, /*hidden argument*/NULL);
		WebSocket_SendText_mB0149842CCEDBB3A3B6BBE15577AC2D568F141DD(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void server_manager::reset(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_reset_mFE5DAF187CBF1F88743889B41C5DC9E1238F08A7 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// webSocket.Close();
		WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_0 = __this->get_webSocket_5();
		WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79(L_0, ((int32_t)1000), (String_t*)NULL, /*hidden argument*/NULL);
		// Start();
		server_manager_Start_mA776C5F0039ABA6BF0E008E5558340138F1421C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void server_manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager__ctor_mFF184F8AC0B573AB7DFA68E2A4D8ED4434333809 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (server_manager__ctor_mFF184F8AC0B573AB7DFA68E2A4D8ED4434333809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string url = "ws://localhost:5678/";//"ws://ec2-3-138-134-244.us-east-2.compute.amazonaws.com:5678"; // Public global variables that can be changed in the Unity UI.
		__this->set_url_4(_stringLiteralFBB7596D39E202CB94D68C4894056ACA15264694);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void server_manager::<Start>b__3_3(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void server_manager_U3CStartU3Eb__3_3_mA8396F132D7A5C1CE3855FD07BC2808C8EDFE215 (server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		// deliver_message(bytes);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		server_manager_deliver_message_mC9ED449AA59784896D20134DE65A69CA9F3A0EA4(__this, L_0, /*hidden argument*/NULL);
		// };
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
// System.Void MainThreadUtil_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m25C18B2CA7FED1037D7E391BB93CB863C2D05DDF (U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainThreadUtil_<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m50FA6256E1E7A4F485243CFD944FC5E8522E31E0 (U3CU3Ec__DisplayClass9_0_t3D5C5AE4AE4F9527DC221DCD50FE7F83D7A3184D * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	{
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_0 = MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9_inline(/*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_waitForUpdate_0();
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void NativeWebSocket.WaitForBackgroundThread_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m04095B146DEED38FC0333E436A9502E07C0BF9F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m04095B146DEED38FC0333E436A9502E07C0BF9F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * L_0 = (U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 *)il2cpp_codegen_object_new(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m808C7AF3D1836C186578D38B452E3124D19965B6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m808C7AF3D1836C186578D38B452E3124D19965B6 (U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread_<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m995C95DABA4F2F6BF4ACF2F4158056EA6C467DC5 (U3CU3Ec_tF087E85FFB73A3479B7A436D81F3FE03C1BD99A1 * __this, const RuntimeMethod* method)
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Void WaitForUpdate_<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m575DB1A02B0B664D913C34BB3AF6CDA1D13177BD (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WaitForUpdate_<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m9D18EB25113D10C706B578A6B539270AE98BB17B (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate_<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_m12BF7BF68F572A943827BF88FBF759B09DC5CEA2 (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return theWorker;
		RuntimeObject* L_3 = __this->get_theWorker_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete();
		MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * L_4 = __this->get_awaiter_3();
		MainThreadAwaiter_Complete_m219870D8C94173287514C0400033CBB3A95CEA8A(L_4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object WaitForUpdate_<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9B00A18EB8F647308AA76A655882BACD9924C4A9 (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WaitForUpdate_<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m871F769BF0D5E6F9DE1D575E42ABB28E375EAD90 (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m871F769BF0D5E6F9DE1D575E42ABB28E375EAD90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m871F769BF0D5E6F9DE1D575E42ABB28E375EAD90_RuntimeMethod_var);
	}
}
// System.Object WaitForUpdate_<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_m39047CC28FFBCCBB03D75BA7F3E3080D67A52D3A (U3CCoroutineWrapperU3Ed__4_t51A8C13450E33DB1D1887BDB5D1DEDFD48DE337E * __this, const RuntimeMethod* method)
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
// System.Boolean WaitForUpdate_MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_m4554575D8258D61E1522F0402246D0F2983D54C7 (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void WaitForUpdate_MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mF9CC2D5BF9A411E072C012163D9BEA5599198798 (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void WaitForUpdate_MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_m5F6CF406FA23FF2F3D5F04F2F2F86F2F1F4E769C (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method)
{
	{
		// public void GetResult() { }
		return;
	}
}
// System.Void WaitForUpdate_MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m219870D8C94173287514C0400033CBB3A95CEA8A (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// IsCompleted = true;
		MainThreadAwaiter_set_IsCompleted_mF9CC2D5BF9A411E072C012163D9BEA5599198798_inline(__this, (bool)1, /*hidden argument*/NULL);
		// continuation?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_continuation_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WaitForUpdate_MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m58664518FA46E9AFE6C15B24F42E53D6CFFD651E (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		// this.continuation = continuation;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		__this->set_continuation_0(L_0);
		// }
		return;
	}
}
// System.Void WaitForUpdate_MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_mB90D56923CED905B3FBE6E132179810064DBEB45 (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___closeCode1);

}
// System.Void NativeWebSocket.WebSocketFactory_OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m7AE4D6D65BC7DDB3294C44F82AE3C926F65033AA (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory_OnCloseCallback::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_Invoke_mFE83D7ECC8259EE4D3D5DFB59C24D1D00CA29E4B (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___closeCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___closeCode1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___closeCode1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___instanceId0) - 1), ___closeCode1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory_OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloseCallback_BeginInvoke_m835AD1A10EAEFB97AE465B8B74D0903285754551 (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, int32_t ___instanceId0, int32_t ___closeCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCloseCallback_BeginInvoke_m835AD1A10EAEFB97AE465B8B74D0903285754551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___closeCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeWebSocket.WebSocketFactory_OnCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_EndInvoke_m7D65343BEF9EB1988B78203C3DF1161D61757A96 (OnCloseCallback_t596AD8381AEE860081ED360B4C36E01CB5CF6701 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___errorPtr1);

}
// System.Void NativeWebSocket.WebSocketFactory_OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m1F6F172A8E0B2C6DB6F27D155701CADCD9AB9E60 (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory_OnErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_mA80A09961B712E8901A32FFD65404E9599C4396B (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___errorPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___instanceId0) - 1), ___errorPtr1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory_OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_mAA54BD8759AACB17C155EFC6AD4B23FEAC1D8190 (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnErrorCallback_BeginInvoke_mAA54BD8759AACB17C155EFC6AD4B23FEAC1D8190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeWebSocket.WebSocketFactory_OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_m90478966CCB30949E0BEB429271BB53BB759E50C (OnErrorCallback_t860A5409CB7F913D3913D8307784D427E5F8A7DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___msgPtr1, ___msgSize2);

}
// System.Void NativeWebSocket.WebSocketFactory_OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m5897045C40CBE21B3FF3360ABA4873D604A09DD6 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory_OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_Invoke_m5CF9DDFDED25476D0E1CEF580B48DEEA546FD490 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						GenericVirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						VirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___instanceId0) - 1), ___msgPtr1, ___msgSize2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory_OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageCallback_BeginInvoke_m0B3E8720CA4FEAFE737A9C20170A5C3596173602 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnMessageCallback_BeginInvoke_m0B3E8720CA4FEAFE737A9C20170A5C3596173602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msgPtr1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___msgSize2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void NativeWebSocket.WebSocketFactory_OnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_EndInvoke_m1C50264AC6BC3819136070D0A069D9A54CBEC487 (OnMessageCallback_t1643DD4C9B9FC56CF5467934A92D92DA407D5E7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0);

}
// System.Void NativeWebSocket.WebSocketFactory_OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m5A7B0CBFBDAAF0140DC4CCEA0AFEACFF20240A8F (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory_OnOpenCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_Invoke_m67F50C06F58D564C6480BE574C8FAC3FDF32742E (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___instanceId0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory_OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOpenCallback_BeginInvoke_m5DCB128BE23CA6378884BAB54CD3E684A8813C9E (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, int32_t ___instanceId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnOpenCallback_BeginInvoke_m5DCB128BE23CA6378884BAB54CD3E684A8813C9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeWebSocket.WebSocketFactory_OnOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_EndInvoke_m3B0E75CD0A928F0535C727DD27DE809340E04610 (OnOpenCallback_t982AC619083BA6ED9982C09DB6DABF01FD187D47 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void click_handlers_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mDDC93C1D77EC1C2FC51A52E6E43BF9A866B4F3E3 (U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void click_handlers_<>c__DisplayClass5_0::<load_button>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3Cload_buttonU3Eb__0_mD2C572942A7DBC7BAFD2ABD4EBA4F02017B695BF (U3CU3Ec__DisplayClass5_0_t1BAD890D352B7A6D20C6BDE5076B6505E4F00199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3Cload_buttonU3Eb__0_mD2C572942A7DBC7BAFD2ABD4EBA4F02017B695BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButton.GetComponent<Button>().onClick.AddListener(() => { import_manager.run_function("button_manager", clickAction, new string[0] { }); });
		click_handlers_tC27D27AEDD5F396EF8330994CE1EC9AD48A0FB86 * L_0 = __this->get_U3CU3E4__this_0();
		import_manager_tA3CD8848B288A0EE8D20006F8FA6D9B0DDC13304 * L_1 = L_0->get_import_manager_4();
		String_t* L_2 = __this->get_clickAction_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		import_manager_run_function_mEBD61C1FC5F66C7732EFA2D281E1E3A7B3DA492A(L_1, _stringLiteral7B8ACFC5D1820E77053E39ACA6DB17A311C82DB1, L_2, L_3, /*hidden argument*/NULL);
		// activeButton.GetComponent<Button>().onClick.AddListener(() => { import_manager.run_function("button_manager", clickAction, new string[0] { }); });
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
IL2CPP_EXTERN_C  double DelegatePInvokeWrapper_function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 (function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 * __this, const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	double returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void click_handlers_function_parameter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_parameter__ctor_m5975A28A9303B965739BECA92FDA2E20D9015BB4 (function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Double click_handlers_function_parameter::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double function_parameter_Invoke_m01B7F24E06BAFDF1117A0144EC37F0C4C333B935 (function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 * __this, const RuntimeMethod* method)
{
	double result = 0.0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef double (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef double (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< double >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< double >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef double (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult click_handlers_function_parameter::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* function_parameter_BeginInvoke_m344ABB4480E5205EA967D95FB957A7BBE38FC222 (function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Double click_handlers_function_parameter::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double function_parameter_EndInvoke_mCD3E745B85059EFF2FEA4AA2F08C60750FC09BC3 (function_parameter_t45DFDFB44073AC61F2653F4F8E22A09CEAEBB632 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(double*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void server_manager_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0E82FD2A275EC080B7305E23D62AE6C8AB5FFA15 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m0E82FD2A275EC080B7305E23D62AE6C8AB5FFA15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * L_0 = (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE *)il2cpp_codegen_object_new(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCC93820B82666903629EC9BBD02B5A10995E4103(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void server_manager_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCC93820B82666903629EC9BBD02B5A10995E4103 (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void server_manager_<>c::<Start>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__3_0_m53F3AFFE35A8FFA4931AD32F562F7FC785282166 (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartU3Eb__3_0_m53F3AFFE35A8FFA4931AD32F562F7FC785282166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connection open!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void server_manager_<>c::<Start>b__3_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__3_1_m958851319451B20689247153FE693E84917D9CC8 (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * __this, String_t* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartU3Eb__3_1_m958851319451B20689247153FE693E84917D9CC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(e);
		String_t* L_0 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// Debug.Log("Error! " + e);
		String_t* L_1 = ___e0;
		String_t* L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542, L_1, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void server_manager_<>c::<Start>b__3_2(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__3_2_m1BEB06F43550C5D52E070EF0C6CC67D65CE66754 (U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * __this, int32_t ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartU3Eb__3_2_m1BEB06F43550C5D52E070EF0C6CC67D65CE66754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connection closed!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B, /*hidden argument*/NULL);
		// };
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
// System.Void server_manager_<OnApplicationQuit>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984 (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_0011:
		{
			// await webSocket.Close();
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_3 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_4 = L_3->get_webSocket_5();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = WebSocket_Close_m2DC6290E5ABC700974E15E065C72995DF11AED79(L_4, ((int32_t)1000), (String_t*)NULL, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006d;
			}
		}

IL_0031:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5_mD5E58C0C59C5F2338869CDEA35EDFC16D131320F_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006d:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_008d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		goto IL_00a0;
	} // end catch (depth: 1)

IL_008d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__5_MoveNext_m82B7249F37F812F9B83F37227F07403C67612984(_thisAdjusted, method);
}
// System.Void server_manager_<OnApplicationQuit>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__5_SetStateMachine_m456E824D896A93D008AF4B8E552A4654C1AE5A1B (U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__5_SetStateMachine_m456E824D896A93D008AF4B8E552A4654C1AE5A1B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__5_t50F7C145DD0989742C54360F18EDC1C960FDADD5 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__5_SetStateMachine_m456E824D896A93D008AF4B8E552A4654C1AE5A1B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void server_manager_<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0 (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * G_B4_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B4_1 = NULL;
	WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * G_B3_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B3_1 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * G_B6_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B6_1 = NULL;
	WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * G_B5_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B5_1 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * G_B8_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B8_1 = NULL;
	WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * G_B7_0 = NULL;
	WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * G_B7_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00f5;
			}
		}

IL_0014:
		{
			// webSocket = new WebSocket(url); //
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_3 = V_1;
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_4 = V_1;
			String_t* L_5 = L_4->get_url_4();
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_6 = (WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF *)il2cpp_codegen_object_new(WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF_il2cpp_TypeInfo_var);
			WebSocket__ctor_m77435DD84FB77AA519ADB9EE54E55AD5DBEC12B3(L_6, L_5, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
			L_3->set_webSocket_5(L_6);
			// webSocket.OnOpen += () =>
			// {
			//     Debug.Log("Connection open!");
			// };
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_7 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_8 = L_7->get_webSocket_5();
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_9 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
			WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_10 = L_9;
			G_B3_0 = L_10;
			G_B3_1 = L_8;
			if (L_10)
			{
				G_B4_0 = L_10;
				G_B4_1 = L_8;
				goto IL_004b;
			}
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * L_11 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_12 = (WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 *)il2cpp_codegen_object_new(WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335_il2cpp_TypeInfo_var);
			WebSocketOpenEventHandler__ctor_m1809A890B2FE8ED19221EB9CBF348FEE8F19E115(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__3_0_m53F3AFFE35A8FFA4931AD32F562F7FC785282166_RuntimeMethod_var), /*hidden argument*/NULL);
			WebSocketOpenEventHandler_t5CC67B9EEC83656D2B7B0C85C7577108817F5335 * L_13 = L_12;
			((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_13);
			G_B4_0 = L_13;
			G_B4_1 = G_B3_1;
		}

IL_004b:
		{
			WebSocket_add_OnOpen_m3AD885B71B3C90F1F5EC1A7217BA12114F894194(G_B4_1, G_B4_0, /*hidden argument*/NULL);
			// webSocket.OnError += (e) =>
			// {
			//     Debug.Log(e);
			//     Debug.Log("Error! " + e);
			// };
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_14 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_15 = L_14->get_webSocket_5();
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_16 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9__3_1_2();
			WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_17 = L_16;
			G_B5_0 = L_17;
			G_B5_1 = L_15;
			if (L_17)
			{
				G_B6_0 = L_17;
				G_B6_1 = L_15;
				goto IL_0075;
			}
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * L_18 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_19 = (WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A *)il2cpp_codegen_object_new(WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A_il2cpp_TypeInfo_var);
			WebSocketErrorEventHandler__ctor_m89873FB704DC7FCF39F6F00B9FC75DFFE1258D4C(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__3_1_m958851319451B20689247153FE693E84917D9CC8_RuntimeMethod_var), /*hidden argument*/NULL);
			WebSocketErrorEventHandler_t359EE2043F34BA64CBE9847DFDB44B63C2E0944A * L_20 = L_19;
			((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->set_U3CU3E9__3_1_2(L_20);
			G_B6_0 = L_20;
			G_B6_1 = G_B5_1;
		}

IL_0075:
		{
			WebSocket_add_OnError_m0DC8D3CE51CC45574ED5284BDF0F3189E976825F(G_B6_1, G_B6_0, /*hidden argument*/NULL);
			// webSocket.OnClose += (e) =>
			// {
			//     Debug.Log("Connection closed!");
			// };
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_21 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_22 = L_21->get_webSocket_5();
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_23 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9__3_2_3();
			WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_24 = L_23;
			G_B7_0 = L_24;
			G_B7_1 = L_22;
			if (L_24)
			{
				G_B8_0 = L_24;
				G_B8_1 = L_22;
				goto IL_009f;
			}
		}

IL_0088:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var);
			U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE * L_25 = ((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_26 = (WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 *)il2cpp_codegen_object_new(WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5_il2cpp_TypeInfo_var);
			WebSocketCloseEventHandler__ctor_m5B4942CC7469E8DFE3EB0CAB0BFA1A36691C221C(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__3_2_m1BEB06F43550C5D52E070EF0C6CC67D65CE66754_RuntimeMethod_var), /*hidden argument*/NULL);
			WebSocketCloseEventHandler_t0ABBB1300D49FEE71938AAD038DE3BFAF2D8D1C5 * L_27 = L_26;
			((U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t166743B3FC62B6D4202603DACAF5C65BEF89C5BE_il2cpp_TypeInfo_var))->set_U3CU3E9__3_2_3(L_27);
			G_B8_0 = L_27;
			G_B8_1 = G_B7_1;
		}

IL_009f:
		{
			WebSocket_add_OnClose_m0FEFFD504C35320464513739813DDB8BB2418892(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			// webSocket.OnMessage += (bytes) =>
			// {
			//     deliver_message(bytes);
			// };
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_28 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_29 = L_28->get_webSocket_5();
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_30 = V_1;
			WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA * L_31 = (WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA *)il2cpp_codegen_object_new(WebSocketMessageEventHandler_t2EE6854BE50A18E737285B79EE77D7B79C1387DA_il2cpp_TypeInfo_var);
			WebSocketMessageEventHandler__ctor_mAF0BA6720A199F944A1F7AAE6CAE98A0C4EA5538(L_31, L_30, (intptr_t)((intptr_t)server_manager_U3CStartU3Eb__3_3_mA8396F132D7A5C1CE3855FD07BC2808C8EDFE215_RuntimeMethod_var), /*hidden argument*/NULL);
			WebSocket_add_OnMessage_m430209598ED003FC2695D7151F96EE603EF19BF4(L_29, L_31, /*hidden argument*/NULL);
			// await webSocket.Connect();
			server_manager_t3A277271CCDE019876D8089C6CFD3B2B87509559 * L_32 = V_1;
			WebSocket_tA635CE6F049A42F72B61DC682DEED7F83D80F4BF * L_33 = L_32->get_webSocket_5();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_34 = WebSocket_Connect_m15EBC27022550F105BFBF73C31324C956A8160B6(L_33, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_35 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_34, /*hidden argument*/NULL);
			V_2 = L_35;
			bool L_36 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_36)
			{
				goto IL_0111;
			}
		}

IL_00d5:
		{
			int32_t L_37 = 0;
			V_0 = L_37;
			__this->set_U3CU3E1__state_0(L_37);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_38 = V_2;
			__this->set_U3CU3Eu__1_3(L_38);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_39, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0_m227AE153423BFF682C987D78D06F75D6238E549E_RuntimeMethod_var);
			goto IL_0144;
		}

IL_00f5:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_40 = __this->get_U3CU3Eu__1_3();
			V_2 = L_40;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_41 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_41, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_42 = (-1);
			V_0 = L_42;
			__this->set_U3CU3E1__state_0(L_42);
		}

IL_0111:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0131;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_011a;
		throw e;
	}

CATCH_011a:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_43, L_44, /*hidden argument*/NULL);
		goto IL_0144;
	} // end catch (depth: 1)

IL_0131:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_45, /*hidden argument*/NULL);
	}

IL_0144:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *>(__this + _offset);
	U3CStartU3Ed__3_MoveNext_m7FC35E7F200A97E3928AFD68651E8285A3CC5CB0(_thisAdjusted, method);
}
// System.Void server_manager_<Start>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_SetStateMachine_m49A08F40F903110B0A8A5FDC5C832014138ED1C9 (U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__3_SetStateMachine_m49A08F40F903110B0A8A5FDC5C832014138ED1C9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__3_t37CDCAF74362CB974AA033037511A7E708F18AA0 *>(__this + _offset);
	U3CStartU3Ed__3_SetStateMachine_m49A08F40F903110B0A8A5FDC5C832014138ED1C9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void server_manager_update_message::.ctor(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_message__ctor_mEFC19B434569A1352B60254742D38E1F77E6D62B (update_message_t5BF8FDCF84DA1DBA813749E4C4DD9D97577F1E6E * __this, String_t* ___gameObject0, String_t* ___function1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters2, const RuntimeMethod* method)
{
	{
		// public update_message(string gameObject, string function, string[] parameters)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gameObject = gameObject;
		String_t* L_0 = ___gameObject0;
		__this->set_gameObject_0(L_0);
		// this.function   = function;
		String_t* L_1 = ___function1;
		__this->set_function_1(L_1);
		// this.parameters = parameters;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___parameters2;
		__this->set_parameters_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8_inline (MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_set_Instance_m5B91C3750F1CE426A534CF51DA5C287E91C4D5B8AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_0 = ___value0;
		((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_set_synchronizationContext_m75FB914ED522D405E674A4E13AEEB4AAE0EC1908AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_get_synchronizationContext_mA37E536852B0A40E1C5E7E1A1D9A49658C7215D0AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MapGenerator_get_current_mE0C21DD6C8E7B36E15FE38AF5B479B236D448C74_inline (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	{
		// return currentSelected;
		String_t* L_0 = __this->get_currentSelected_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Sprite; }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_Sprite_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* map_manager_get_current_mA83B17A688B31912AE5D29D6ADEA3FC80BFD0064_inline (map_manager_t61F7A33E6A3DDBA2A96BDF497DDB91E40A3D1E27 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___parameters0, const RuntimeMethod* method)
{
	{
		// return currentSelected;
		String_t* L_0 = __this->get_currentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainThreadUtil_get_Instance_mD9FB56A8AB930FEBF536D8193C0220DAE65127C9AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46 * L_0 = ((MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t89BC76A2631C810D6CDC60C2119A607DF901AF46_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mF9CC2D5BF9A411E072C012163D9BEA5599198798_inline (MainThreadAwaiter_t9A50CDC2DB928D051923D773E30A201742B4A0EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
