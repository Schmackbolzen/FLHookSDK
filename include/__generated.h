#pragma once

//
// WARNING: THIS IS AN AUTO-GENERATED FILE, DO NOT EDIT!
//

enum class HookedCall {
	IClientImpl__Send_FLPACKET_COMMON_FIREWEAPON,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATEEQUIP,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATECRUISE,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATETHRUSTERS,
	IClientImpl__Send_FLPACKET_COMMON_SETTARGET,
	IClientImpl__Send_FLPACKET_COMMON_GOTRADELANE,
	IClientImpl__Send_FLPACKET_COMMON_STOPTRADELANE,
	IClientImpl__Send_FLPACKET_COMMON_JETTISONCARGO,
	IClientImpl__Send_FLPACKET_SERVER_LOGINRESPONSE,
	IClientImpl__Send_FLPACKET_SERVER_CHARACTERINFO,
	IClientImpl__Send_FLPACKET_SERVER_CHARSELECTVERIFIED,
	IClientImpl__CDPClientProxy__Disconnect,
	IClientImpl__CDPClientProxy__GetSendQSize,
	IClientImpl__CDPClientProxy__GetSendQBytes,
	IClientImpl__CDPClientProxy__GetLinkSaturation,
	IClientImpl__Send_FLPACKET_SERVER_SETSHIPARCH,
	IClientImpl__Send_FLPACKET_SERVER_SETHULLSTATUS,
	IClientImpl__Send_FLPACKET_SERVER_SETCOLLISIONGROUPS,
	IClientImpl__Send_FLPACKET_SERVER_SETEQUIPMENT,
	IClientImpl__Send_FLPACKET_SERVER_SETADDITEM,
	IClientImpl__Send_FLPACKET_SERVER_SETSTARTROOM,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYCHARACTER,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATECHAR,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETECHARLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFSCRIPTBEHAVIOR,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYSCRIPTBEHAVIOR,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETESCRIPTBEHAVIORLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETEAMBIENTSCRIPTLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYMISSIONCOMPUTER,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATEMISSIONCOMPUTER,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETEMISSIONCOMPUTERLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFMISSIONVENDORACCEPTANCE,
	IClientImpl__Send_FLPACKET_SERVER_GFMISSIONVENDORWHYEMPTY,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATENEWSBROADCAST,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETENEWSBROADCASTLIST,
	IClientImpl__Send_FLPACKET_SERVER_CREATESOLAR,
	IClientImpl__Send_FLPACKET_SERVER_CREATESHIP,
	IClientImpl__Send_FLPACKET_SERVER_CREATELOOT,
	IClientImpl__Send_FLPACKET_SERVER_CREATEMINE,
	IClientImpl__Send_FLPACKET_SERVER_CREATEGUIDED,
	IClientImpl__Send_FLPACKET_SERVER_CREATECOUNTER,
	IClientImpl__Send_FLPACKET_SERVER_DESTROYOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_ACTIVATEOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_SYSTEM_SWITCH_OUT,
	IClientImpl__Send_FLPACKET_SERVER_SYSTEM_SWITCH_IN,
	IClientImpl__Send_FLPACKET_SERVER_LAND,
	IClientImpl__Send_FLPACKET_SERVER_LAUNCH,
	IClientImpl__Send_FLPACKET_SERVER_REQUESTCREATESHIPRESP,
	IClientImpl__Send_FLPACKET_SERVER_DAMAGEOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_ITEMTRACTORED,
	IClientImpl__Send_FLPACKET_SERVER_USE_ITEM,
	IClientImpl__Send_FLPACKET_SERVER_SETREPUTATION,
	IClientImpl__Send_FLPACKET_SERVER_SENDCOMM,
	IClientImpl__Send_FLPACKET_SERVER_SET_MISSION_MESSAGE,
	IClientImpl__Send_FLPACKET_SERVER_SETMISSIONOBJECTIVES,
	IClientImpl__Send_FLPACKET_SERVER_MARKOBJ,
	IClientImpl__Send_FLPACKET_SERVER_SETCASH,
	IClientImpl__Send_FLPACKET_SERVER_REQUEST_RETURNED,
	IClientImpl__Send_FLPACKET_SERVER_OBJECTCARGOUPDATE,
	IClientImpl__Send_FLPACKET_SERVER_BURNFUSE,
	IClientImpl__Send_FLPACKET_COMMON_SET_WEAPON_GROUP,
	IClientImpl__Send_FLPACKET_COMMON_SET_VISITED_STATE,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_BEST_PATH,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_PLAYER_STATS,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_GROUP_POSITIONS,
	IClientImpl__Send_FLPACKET_COMMON_SET_MISSION_LOG,
	IClientImpl__Send_FLPACKET_COMMON_SET_INTERFACE_STATE,
	IClientImpl__Send_FLPACKET_COMMON_PLAYER_TRADE,
	IClientImpl__Send_FLPACKET_SERVER_SCANNOTIFY,
	IClientImpl__Send_FLPACKET_SERVER_PLAYERLIST,
	IClientImpl__Send_FLPACKET_SERVER_PLAYERLIST_2,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_6,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_7,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_2,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_3,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_4,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_5,
	IClientImpl__Send_FLPACKET_SERVER_FORMATION_UPDATE,
	IServerImpl__AbortMission,
	IServerImpl__AcceptTrade,
	IServerImpl__ActivateCruise,
	IServerImpl__ActivateEquip,
	IServerImpl__ActivateThrusters,
	IServerImpl__AddTradeEquip,
	IServerImpl__BaseEnter,
	IServerImpl__BaseExit,
	IServerImpl__BaseInfoRequest,
	IServerImpl__CharacterInfoReq,
	IServerImpl__CharacterSelect,
	IServerImpl__CharacterSkipAutosave,
	IServerImpl__CommComplete,
	IServerImpl__Connect,
	IServerImpl__CreateNewCharacter,
	IServerImpl__DelTradeEquip,
	IServerImpl__DestroyCharacter,
	IServerImpl__DisConnect,
	IServerImpl__Dock,
	IServerImpl__DumpPacketStats,
	IServerImpl__ElapseTime,
	IServerImpl__FireWeapon,
	IServerImpl__GFGoodBuy,
	IServerImpl__GFGoodSell,
	IServerImpl__GFGoodVaporized,
	IServerImpl__GFObjSelect,
	IServerImpl__GetServerID,
	IServerImpl__GetServerSig,
	IServerImpl__GetServerStats,
	IServerImpl__GoTradelane,
	IServerImpl__Hail,
	IServerImpl__InitiateTrade,
	IServerImpl__InterfaceItemUsed,
	IServerImpl__JettisonCargo,
	IServerImpl__JumpInComplete,
	IServerImpl__LaunchComplete,
	IServerImpl__LocationEnter,
	IServerImpl__LocationExit,
	IServerImpl__LocationInfoRequest,
	IServerImpl__Login,
	IServerImpl__MineAsteroid,
	IServerImpl__MissionResponse,
	IServerImpl__MissionSaveB,
	IServerImpl__NewCharacterInfoReq,
	IServerImpl__OnConnect,
	IServerImpl__PlayerLaunch,
	IServerImpl__PopUpDialog,
	IServerImpl__PushToServer,
	IServerImpl__RTCDone,
	IServerImpl__ReqAddItem,
	IServerImpl__ReqCargo,
	IServerImpl__ReqChangeCash,
	IServerImpl__ReqCollisionGroups,
	IServerImpl__ReqDifficultyScale,
	IServerImpl__ReqEquipment,
	IServerImpl__ReqHullStatus,
	IServerImpl__ReqModifyItem,
	IServerImpl__ReqRemoveItem,
	IServerImpl__ReqSetCash,
	IServerImpl__ReqShipArch,
	IServerImpl__RequestBestPath,
	IServerImpl__RequestCancel,
	IServerImpl__RequestCreateShip,
	IServerImpl__RequestEvent,
	IServerImpl__RequestGroupPositions,
	IServerImpl__RequestPlayerStats,
	IServerImpl__RequestRankLevel,
	IServerImpl__RequestTrade,
	IServerImpl__SPBadLandsObjCollision,
	IServerImpl__SPMunitionCollision,
	IServerImpl__SPObjCollision,
	IServerImpl__SPObjUpdate,
	IServerImpl__SPRequestInvincibility,
	IServerImpl__SPRequestUseItem,
	IServerImpl__SPScanCargo,
	IServerImpl__SaveGame,
	IServerImpl__SetActiveConnection,
	IServerImpl__SetInterfaceState,
	IServerImpl__SetManeuver,
	IServerImpl__SetMissionLog,
	IServerImpl__SetTarget,
	IServerImpl__SetTradeMoney,
	IServerImpl__SetVisitedState,
	IServerImpl__SetWeaponGroup,
	IServerImpl__Shutdown,
	IServerImpl__Startup,
	IServerImpl__StopTradeRequest,
	IServerImpl__StopTradelane,
	IServerImpl__SubmitChat,
	IServerImpl__SwapConnections,
	IServerImpl__SystemSwitchOutComplete,
	IServerImpl__TerminateTrade,
	IServerImpl__TractorObjects,
	IServerImpl__TradeResponse,
};