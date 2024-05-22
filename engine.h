#pragma once

#include <cstdlib>
#include "core.h"
#include "utils.h"

class CVEngineServer;

extern CVEngineServer g_CVEngineServer;
extern uintptr_t g_CVEngineServerInterface;
extern uintptr_t g_r1oCVEngineServerInterface[203];

void CreateR1OCVEngineServerInterface();
int64_t FuncThatReturnsFF_Stub();

class CVEngineServer
{
public:
	CVEngineServer() = default;
	CVEngineServer(uintptr_t* r1vtable);

	static uintptr_t NullSub1;
	static uintptr_t ChangeLevel;
	static uintptr_t IsMapValid;
	static uintptr_t GetMapCRC;
	static uintptr_t IsDedicatedServer;
	static uintptr_t IsInEditMode;
	static uintptr_t GetLaunchOptions;
	static uintptr_t PrecacheModel;
	static uintptr_t PrecacheDecal;
	static uintptr_t PrecacheGeneric;
	static uintptr_t IsModelPrecached;
	static uintptr_t IsDecalPrecached;
	static uintptr_t IsGenericPrecached;
	static uintptr_t IsSimulating;
	static uintptr_t GetPlayerUserId;
	static uintptr_t GetPlayerNetworkIDString;
	static uintptr_t IsUserIDInUse;
	static uintptr_t GetLoadingProgressForUserID;
	static uintptr_t GetEntityCount;
	static uintptr_t GetPlayerNetInfo;
	static uintptr_t IsClientValid;
	static uintptr_t PlayerChangesTeams;
	static uintptr_t RequestClientScreenshot;
	static uintptr_t CreateEdict;
	static uintptr_t RemoveEdict;
	static uintptr_t PvAllocEntPrivateData;
	static uintptr_t FreeEntPrivateData;
	static uintptr_t SaveAllocMemory;
	static uintptr_t SaveFreeMemory;
	static uintptr_t FadeClientVolume;
	static uintptr_t ServerCommand;
	static uintptr_t CBuf_Execute;
	static uintptr_t ClientCommand;
	static uintptr_t LightStyle;
	static uintptr_t StaticDecal;
	static uintptr_t EntityMessageBeginEx;
	static uintptr_t EntityMessageBegin;
	static uintptr_t UserMessageBegin;
	static uintptr_t MessageEnd;
	static uintptr_t ClientPrintf;
	static uintptr_t Con_NPrintf;
	static uintptr_t Con_NXPrintf;
	static uintptr_t UnkFunc1;
	static uintptr_t NumForEdictinfo;
	static uintptr_t UnkFunc2;
	static uintptr_t UnkFunc3;
	static uintptr_t CrosshairAngle;
	static uintptr_t GetGameDir;
	static uintptr_t CompareFileTime;
	static uintptr_t LockNetworkStringTables;
	static uintptr_t CreateFakeClient;
	static uintptr_t GetClientConVarValue;
	static uintptr_t ReplayReady;
	static uintptr_t GetReplayFrame;
	static uintptr_t UnkFunc4;
	static uintptr_t UnkFunc5;
	static uintptr_t UnkFunc6;
	static uintptr_t UnkFunc7;
	static uintptr_t UnkFunc8;
	static uintptr_t ParseFile;
	static uintptr_t CopyLocalFile;
	static uintptr_t PlaybackTempEntity;
	static uintptr_t UnkFunc9;
	static uintptr_t LoadGameState;
	static uintptr_t LoadAdjacentEnts;
	static uintptr_t ClearSaveDir;
	static uintptr_t GetMapEntitiesString;
	static uintptr_t GetPlaylistCount;
	static uintptr_t GetUnknownPlaylistKV;
	static uintptr_t GetPlaylistValPossible;
	static uintptr_t GetPlaylistValPossibleAlt;
	static uintptr_t AddPlaylistOverride;
	static uintptr_t MarkPlaylistReadyForOverride;
	static uintptr_t UnknownPlaylistSetup;
	static uintptr_t GetUnknownPlaylistKV2;
	static uintptr_t GetUnknownPlaylistKV3;
	static uintptr_t GetUnknownPlaylistKV4;
	static uintptr_t UnknownMapSetup;
	static uintptr_t UnknownMapSetup2;
	static uintptr_t UnknownMapSetup3;
	static uintptr_t UnknownMapSetup4;
	static uintptr_t UnknownGamemodeSetup;
	static uintptr_t UnknownGamemodeSetup2;
	static uintptr_t IsMatchmakingDedi;
	static uintptr_t UnusedTimeFunc;
	static uintptr_t IsClientSearching;
	static uintptr_t UnkFunc11;
	static uintptr_t IsPrivateMatch;
	static uintptr_t IsCoop;
	static uintptr_t GetSkillFlag_Unused;
	static uintptr_t TextMessageGet;
	static uintptr_t UnkFunc12;
	static uintptr_t LogPrint;
	static uintptr_t IsLogEnabled;
	static uintptr_t IsWorldBrushValid;
	static uintptr_t SolidMoved;
	static uintptr_t TriggerMoved;
	static uintptr_t CreateSpatialPartition;
	static uintptr_t DestroySpatialPartition;
	static uintptr_t UnkFunc13;
	static uintptr_t IsPaused;
	static uintptr_t UnkFunc14;
	static uintptr_t UnkFunc15;
	static uintptr_t UnkFunc16;
	static uintptr_t UnkFunc17;
	static uintptr_t UnkFunc18;
	static uintptr_t UnkFunc19;
	static uintptr_t UnkFunc20;
	static uintptr_t UnkFunc21;
	static uintptr_t UnkFunc22;
	static uintptr_t UnkFunc23;
	static uintptr_t UnkFunc24;
	static uintptr_t UnkFunc25;
	static uintptr_t UnkFunc26;
	static uintptr_t UnkFunc27;
	static uintptr_t UnkFunc28;
	static uintptr_t UnkFunc29;
	static uintptr_t UnkFunc30;
	static uintptr_t UnkFunc31;
	static uintptr_t UnkFunc32;
	static uintptr_t UnkFunc33;
	static uintptr_t UnkFunc34;
	static uintptr_t InsertServerCommand;
	static uintptr_t UnkFunc35;
	static uintptr_t UnkFunc36;
	static uintptr_t UnkFunc37;
	static uintptr_t UnkFunc38;
	static uintptr_t UnkFunc39;
	static uintptr_t UnkFunc40;
	static uintptr_t UnkFunc41;
	static uintptr_t UnkFunc42;
	static uintptr_t UnkFunc43;
	static uintptr_t UnkFunc44;
	static uintptr_t AllocLevelStaticData;
	static uintptr_t UnkFunc45;
	static uintptr_t UnkFunc46;
	static uintptr_t UnkFunc47;
	static uintptr_t Pause;
	static uintptr_t UnkFunc48;
	static uintptr_t UnkFunc49;
	static uintptr_t UnkFunc50;
	static uintptr_t UnkFunc51;
	static uintptr_t UnkFunc52;
	static uintptr_t MarkTeamsAsBalanced_On;
	static uintptr_t MarkTeamsAsBalanced_Off;
	static uintptr_t UnkFunc53;
	static uintptr_t UnkFunc54;
	static uintptr_t UnkFunc55;
	static uintptr_t UnkFunc56;
	static uintptr_t DisconnectClient;
	static uintptr_t UnkFunc58;
	static uintptr_t UnkFunc59;
	static uintptr_t UnkFunc60;
	static uintptr_t UnkFunc61;
	static uintptr_t UnkFunc62;
	static uintptr_t UnkFunc63;
	static uintptr_t NullSub2;
	static uintptr_t UnkFunc64;
	static uintptr_t NullSub3;
	static uintptr_t NullSub4;
	static uintptr_t UnkFunc65;
	static uintptr_t UnkFunc66;
	static uintptr_t UnkFunc67;
	static uintptr_t UnkFunc68;
	static uintptr_t UnkFunc69;
	static uintptr_t FuncThatReturnsFF_12;
	static uintptr_t FuncThatReturnsFF_11;
	static uintptr_t FuncThatReturnsFF_10;
	static uintptr_t FuncThatReturnsFF_9;
	static uintptr_t FuncThatReturnsFF_8;
	static uintptr_t FuncThatReturnsFF_7;
	static uintptr_t FuncThatReturnsFF_6;
	static uintptr_t FuncThatReturnsFF_5;
	static uintptr_t FuncThatReturnsFF_4;
	static uintptr_t FuncThatReturnsFF_3;
	static uintptr_t FuncThatReturnsFF_2;
	static uintptr_t FuncThatReturnsFF_1;
	static uintptr_t GetClientXUID;
	static uintptr_t IsActiveApp;
	static uintptr_t UnkFunc70;
	static uintptr_t Bandwidth_WriteBandwidthStatsToFile;
	static uintptr_t UnkFunc71;
	static uintptr_t IsCheckpointMapLoad;
	static uintptr_t UnkFunc72;
	static uintptr_t UnkFunc73;
	static uintptr_t UnkFunc74;
	static uintptr_t UnkFunc75;
	static uintptr_t UnkFunc76;
	static uintptr_t NullSub5;
	static uintptr_t NullSub6;
	static uintptr_t UpdateClientHashtag;
	static uintptr_t UnkFunc77;
	static uintptr_t UnkFunc78;
	static uintptr_t UnkFunc79;
	static uintptr_t UnkFunc80;
	static uintptr_t UnkFunc81;
	static uintptr_t UnkFunc82;

private:
	void __InitDedi(uintptr_t* r1vtable)
	{
		ChangeLevel = r1vtable[0];
		IsMapValid = r1vtable[1];
		GetMapCRC = r1vtable[2];
		IsDedicatedServer = r1vtable[3];
		IsInEditMode = r1vtable[4];
		GetLaunchOptions = r1vtable[5];
		PrecacheModel = r1vtable[6];
		PrecacheDecal = r1vtable[7];
		PrecacheGeneric = r1vtable[8];
		IsModelPrecached = r1vtable[9];
		IsDecalPrecached = r1vtable[10];
		IsGenericPrecached = r1vtable[11];
		IsSimulating = r1vtable[12];
		GetPlayerUserId = r1vtable[13];
		GetPlayerNetworkIDString = r1vtable[14];
		IsUserIDInUse = r1vtable[15];
		GetLoadingProgressForUserID = r1vtable[16];
		GetEntityCount = r1vtable[17];
		GetPlayerNetInfo = r1vtable[18];
		IsClientValid = r1vtable[19];
		PlayerChangesTeams = r1vtable[20];
		CreateEdict = r1vtable[21];
		RemoveEdict = r1vtable[22];
		PvAllocEntPrivateData = r1vtable[23];
		FreeEntPrivateData = r1vtable[24];
		SaveAllocMemory = r1vtable[25];
		SaveFreeMemory = r1vtable[26];
		FadeClientVolume = r1vtable[27];
		ServerCommand = r1vtable[28];
		CBuf_Execute = r1vtable[29];
		ClientCommand = r1vtable[30];
		LightStyle = r1vtable[31];
		StaticDecal = r1vtable[32];
		EntityMessageBeginEx = r1vtable[33];
		EntityMessageBegin = r1vtable[34];
		UserMessageBegin = r1vtable[35];
		MessageEnd = r1vtable[36];
		ClientPrintf = r1vtable[37];
		Con_NPrintf = r1vtable[38];
		Con_NXPrintf = r1vtable[39];
		UnkFunc1 = r1vtable[40];
		NumForEdictinfo = r1vtable[41];
		UnkFunc2 = r1vtable[42];
		CrosshairAngle = r1vtable[43];
		GetGameDir = r1vtable[44];
		CompareFileTime = r1vtable[45];
		LockNetworkStringTables = r1vtable[46];
		CreateFakeClient = r1vtable[47];
		GetClientConVarValue = r1vtable[48];
		ReplayReady = r1vtable[49];
		GetReplayFrame = r1vtable[50];
		UnkFunc4 = r1vtable[51];
		UnkFunc5 = r1vtable[52];
		UnkFunc7 = r1vtable[53];
		UnkFunc8 = r1vtable[54];
		ParseFile = r1vtable[55];
		CopyLocalFile = r1vtable[56];
		PlaybackTempEntity = r1vtable[57];
		UnkFunc9 = r1vtable[58];
		LoadGameState = r1vtable[59];
		LoadAdjacentEnts = r1vtable[60];
		ClearSaveDir = r1vtable[61];
		GetMapEntitiesString = r1vtable[62];
		GetPlaylistCount = r1vtable[63];
		GetUnknownPlaylistKV = r1vtable[64];
		GetPlaylistValPossible = r1vtable[65];
		GetPlaylistValPossibleAlt = r1vtable[66];
		GetUnknownPlaylistKV2 = r1vtable[67];
		GetUnknownPlaylistKV3 = r1vtable[68];
		UnknownMapSetup = r1vtable[69];
		UnknownMapSetup2 = r1vtable[70];
		UnknownMapSetup3 = r1vtable[71];
		UnknownMapSetup4 = r1vtable[72];
		//CVEngineServer__UnknownMapSetup3_2 = r1vtable[73];
		UnknownGamemodeSetup2 = r1vtable[74];
		IsMatchmakingDedi = r1vtable[75];
		UnusedTimeFunc = r1vtable[76];
		UnkFunc11 = r1vtable[77];
		//CVEngineServer__UnusedTimeFunc_2 = r1vtable[78];
		IsClientSearching = r1vtable[79];
		IsPrivateMatch = r1vtable[80];
		TextMessageGet = r1vtable[81];
		UnkFunc12 = r1vtable[82];
		LogPrint = r1vtable[83];
		IsLogEnabled = r1vtable[84];
		IsWorldBrushValid = r1vtable[85];
		SolidMoved = r1vtable[86];
		TriggerMoved = r1vtable[87];
		CreateSpatialPartition = r1vtable[88];
		DestroySpatialPartition = r1vtable[89];
		UnkFunc13 = r1vtable[90];
		IsPaused = r1vtable[91];
		UnkFunc14 = r1vtable[92];
		UnkFunc15 = r1vtable[93];
		UnkFunc16 = r1vtable[94];
		UnkFunc17 = r1vtable[95];
		UnkFunc18 = r1vtable[96];
		UnkFunc19 = r1vtable[97];
		UnkFunc20 = r1vtable[98];
		UnkFunc21 = r1vtable[99];
		UnkFunc22 = r1vtable[100];
		UnkFunc23 = r1vtable[101];
		UnkFunc24 = r1vtable[102];
		UnkFunc25 = r1vtable[103];
		UnkFunc26 = r1vtable[104];
		UnkFunc27 = r1vtable[105];
		UnkFunc28 = r1vtable[106];
		UnkFunc29 = r1vtable[107];
		UnkFunc30 = r1vtable[108];
		UnkFunc31 = r1vtable[109];
		UnkFunc32 = r1vtable[110];
		UnkFunc33 = r1vtable[111];
		InsertServerCommand = r1vtable[113];
		UnkFunc35 = r1vtable[114];
		UnkFunc36 = r1vtable[115];
		UnkFunc37 = r1vtable[116];
		UnkFunc38 = r1vtable[117];
		UnkFunc39 = r1vtable[118];
		UnkFunc40 = r1vtable[119];
		UnkFunc41 = r1vtable[120];
		UnkFunc42 = r1vtable[121];
		UnkFunc43 = r1vtable[122];
		UnkFunc44 = r1vtable[123];
		AllocLevelStaticData = r1vtable[124];
		UnkFunc45 = r1vtable[125];
		UnkFunc46 = r1vtable[126];
		UnkFunc47 = r1vtable[127];
		Pause = r1vtable[128];
		UnkFunc48 = r1vtable[129];
		UnkFunc49 = r1vtable[130];
		UnkFunc50 = r1vtable[131];
		NullSub1 = r1vtable[132];
		UnkFunc51 = r1vtable[133];
		UnkFunc52 = r1vtable[134];
		MarkTeamsAsBalanced_On = r1vtable[135];
		MarkTeamsAsBalanced_Off = r1vtable[136];
		UnkFunc54 = r1vtable[137];
		UnkFunc55 = r1vtable[138];
		UnkFunc56 = r1vtable[138];
		DisconnectClient = r1vtable[139];
		UnkFunc58 = r1vtable[141];
		UnkFunc59 = r1vtable[142];
		UnkFunc60 = r1vtable[143];
		UnkFunc61 = r1vtable[144];
		UnkFunc62 = r1vtable[145];
		//CVEngineServer__UnkFunc = r1vtable[146];
		UnkFunc63 = r1vtable[147];
		UnkFunc64 = r1vtable[148];
		GetClientXUID = r1vtable[149];
		IsActiveApp = r1vtable[150];
		UnkFunc70 = r1vtable[151];
		Bandwidth_WriteBandwidthStatsToFile = r1vtable[152];
		UnkFunc71 = r1vtable[153];
		IsCheckpointMapLoad = r1vtable[154];
		//CVEngineServer__IsDurangoDedi = r1vtable[155];
		UnkFunc53 = r1vtable[156];
		//sub_18006E790 = r1vtable[157];
		//sub_18006ECB0 = r1vtable[158];
		//nullsub_285 = r1vtable[159];
		//sub_18006ED00 = r1vtable[160];
		//sub_18006ED90 = r1vtable[161];
		//sub_18006EDA0 = r1vtable[162];
		//sub_18006ED10 = r1vtable[163];
		//sub_18006ED20 = r1vtable[164];
		//sub_18006ED30 = r1vtable[165];
		//sub_18006ED50 = r1vtable[166];
		//sub_18006ED60 = r1vtable[167];
		//sub_18006ED70 = r1vtable[168];
		//sub_18006EDB0 = r1vtable[169];
		//sub_18006EDC0 = r1vtable[170];
		//sub_18006EDD0 = r1vtable[171];
		//sub_18006EDE0 = r1vtable[172];
		//sub_18006EDF0 = r1vtable[173];
		//sub_18006EE00 = r1vtable[174];
		//sub_18006EE10 = r1vtable[175];
		//sub_18006EE20 = r1vtable[176];
		//sub_18006EE30 = r1vtable[177];
		//sub_18006EE40 = r1vtable[178];
		//sub_18006EE50 = r1vtable[179];
		//sub_18006EE60 = r1vtable[180];
		//sub_18006EE80 = r1vtable[181];
		//sub_18006EE90 = r1vtable[182];
		//sub_18006EEA0 = r1vtable[183];
		//sub_18006EEB0 = r1vtable[184];
		//sub_18006E750 = r1vtable[185];
		UnkFunc77 = r1vtable[186];
		// dedi nullsubs
		RequestClientScreenshot = r1vtable[132];
		UnkFunc3 = r1vtable[132];
		UnkFunc6 = r1vtable[132];
		AddPlaylistOverride = r1vtable[132];
		MarkPlaylistReadyForOverride = r1vtable[132];
		UnknownPlaylistSetup = r1vtable[132];
		GetUnknownPlaylistKV4 = r1vtable[132];
		UnknownGamemodeSetup = r1vtable[132];
		IsCoop = r1vtable[132];
		GetSkillFlag_Unused = r1vtable[132];
		UnkFunc34 = r1vtable[132];
		NullSub2 = r1vtable[132];
		NullSub3 = r1vtable[132];
		NullSub4 = r1vtable[132];
		UnkFunc65 = r1vtable[132];
		UnkFunc66 = r1vtable[132];
		UnkFunc67 = r1vtable[132];
		UnkFunc68 = r1vtable[132];
		UnkFunc69 = r1vtable[132];
		FuncThatReturnsFF_12 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_11 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_10 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_9 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_8 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_7 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_6 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_5 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_4 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_3 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_2 = uintptr_t(&FuncThatReturnsFF_Stub);
		FuncThatReturnsFF_1 = uintptr_t(&FuncThatReturnsFF_Stub);
		UnkFunc72 = r1vtable[132];
		UnkFunc73 = r1vtable[132];
		UnkFunc74 = r1vtable[132];
		UnkFunc75 = r1vtable[132];
		UnkFunc76 = r1vtable[132];
		NullSub5 = r1vtable[132];
		NullSub6 = r1vtable[132];
		UpdateClientHashtag = r1vtable[132];
		UnkFunc78 = r1vtable[132];
		UnkFunc79 = r1vtable[132];
		UnkFunc80 = r1vtable[132];
		UnkFunc81 = r1vtable[132];
		UnkFunc82 = r1vtable[132];
	}

	void __InitNormal(uintptr_t* r1vtable)
	{
		ChangeLevel = r1vtable[0];
		IsMapValid = r1vtable[1];
		GetMapCRC = r1vtable[2];
		IsDedicatedServer = r1vtable[3];
		IsInEditMode = r1vtable[4];
		GetLaunchOptions = r1vtable[5];
		PrecacheModel = r1vtable[6];
		PrecacheDecal = r1vtable[7];
		PrecacheGeneric = r1vtable[8];
		IsModelPrecached = r1vtable[9];
		IsDecalPrecached = r1vtable[10];
		IsGenericPrecached = r1vtable[11];
		IsSimulating = r1vtable[12];
		GetPlayerUserId = r1vtable[13];
		GetPlayerNetworkIDString = r1vtable[14];
		IsUserIDInUse = r1vtable[15];
		GetLoadingProgressForUserID = r1vtable[16];
		GetEntityCount = r1vtable[17];
		GetPlayerNetInfo = r1vtable[18];
		IsClientValid = r1vtable[19];
		PlayerChangesTeams = r1vtable[20];
		RequestClientScreenshot = r1vtable[21];
		CreateEdict = r1vtable[22];
		RemoveEdict = r1vtable[23];
		PvAllocEntPrivateData = r1vtable[24];
		FreeEntPrivateData = r1vtable[25];
		SaveAllocMemory = r1vtable[26];
		SaveFreeMemory = r1vtable[27];
		FadeClientVolume = r1vtable[28];
		ServerCommand = r1vtable[29];
		CBuf_Execute = r1vtable[30];
		ClientCommand = r1vtable[31];
		LightStyle = r1vtable[32];
		StaticDecal = r1vtable[33];
		EntityMessageBeginEx = r1vtable[34];
		EntityMessageBegin = r1vtable[35];
		UserMessageBegin = r1vtable[36];
		MessageEnd = r1vtable[37];
		ClientPrintf = r1vtable[38];
		Con_NPrintf = r1vtable[39];
		Con_NXPrintf = r1vtable[40];
		UnkFunc1 = r1vtable[41];
		NumForEdictinfo = r1vtable[42];
		UnkFunc2 = r1vtable[43];
		UnkFunc3 = r1vtable[44];
		CrosshairAngle = r1vtable[45];
		GetGameDir = r1vtable[46];
		CompareFileTime = r1vtable[47];
		LockNetworkStringTables = r1vtable[48];
		CreateFakeClient = r1vtable[49];
		GetClientConVarValue = r1vtable[50];
		ReplayReady = r1vtable[51];
		GetReplayFrame = r1vtable[52];
		UnkFunc4 = r1vtable[53];
		UnkFunc5 = r1vtable[54];
		UnkFunc6 = r1vtable[55];
		UnkFunc7 = r1vtable[56];
		UnkFunc8 = r1vtable[57];
		ParseFile = r1vtable[58];
		CopyLocalFile = r1vtable[59];
		PlaybackTempEntity = r1vtable[60];
		UnkFunc9 = r1vtable[61];
		LoadGameState = r1vtable[62];
		LoadAdjacentEnts = r1vtable[63];
		ClearSaveDir = r1vtable[64];
		GetMapEntitiesString = r1vtable[65];
		GetPlaylistCount = r1vtable[66];
		GetUnknownPlaylistKV = r1vtable[67];
		GetPlaylistValPossible = r1vtable[68];
		GetPlaylistValPossibleAlt = r1vtable[69];
		AddPlaylistOverride = r1vtable[70];
		MarkPlaylistReadyForOverride = r1vtable[71];
		UnknownPlaylistSetup = r1vtable[72];
		GetUnknownPlaylistKV2 = r1vtable[73];
		GetUnknownPlaylistKV3 = r1vtable[74];
		GetUnknownPlaylistKV4 = r1vtable[75];
		UnknownMapSetup = r1vtable[76];
		UnknownMapSetup2 = r1vtable[77];
		UnknownMapSetup3 = r1vtable[78];
		UnknownMapSetup4 = r1vtable[79];
		UnknownGamemodeSetup = r1vtable[80];
		UnknownGamemodeSetup2 = r1vtable[81];
		IsMatchmakingDedi = r1vtable[82];
		UnusedTimeFunc = r1vtable[83];
		IsClientSearching = r1vtable[84];
		UnkFunc11 = r1vtable[85];
		IsPrivateMatch = r1vtable[86];
		IsCoop = r1vtable[87];
		GetSkillFlag_Unused = r1vtable[88];
		TextMessageGet = r1vtable[89];
		UnkFunc12 = r1vtable[90];
		LogPrint = r1vtable[91];
		IsLogEnabled = r1vtable[92];
		IsWorldBrushValid = r1vtable[93];
		SolidMoved = r1vtable[94];
		TriggerMoved = r1vtable[95];
		CreateSpatialPartition = r1vtable[96];
		DestroySpatialPartition = r1vtable[97];
		UnkFunc13 = r1vtable[98];
		IsPaused = r1vtable[99];
		UnkFunc14 = r1vtable[100];
		UnkFunc15 = r1vtable[101];
		UnkFunc16 = r1vtable[102];
		UnkFunc17 = r1vtable[103];
		UnkFunc18 = r1vtable[104];
		UnkFunc19 = r1vtable[105];
		UnkFunc20 = r1vtable[106];
		UnkFunc21 = r1vtable[107];
		UnkFunc22 = r1vtable[108];
		UnkFunc23 = r1vtable[109];
		UnkFunc24 = r1vtable[110];
		UnkFunc25 = r1vtable[111];
		UnkFunc26 = r1vtable[112];
		UnkFunc27 = r1vtable[113];
		UnkFunc28 = r1vtable[114];
		UnkFunc29 = r1vtable[115];
		UnkFunc30 = r1vtable[116];
		UnkFunc31 = r1vtable[117];
		UnkFunc32 = r1vtable[118];
		UnkFunc33 = r1vtable[119];
		UnkFunc34 = r1vtable[120];
		InsertServerCommand = r1vtable[121];
		UnkFunc35 = r1vtable[122];
		UnkFunc36 = r1vtable[123];
		UnkFunc37 = r1vtable[124];
		UnkFunc38 = r1vtable[125];
		UnkFunc39 = r1vtable[126];
		UnkFunc40 = r1vtable[127];
		UnkFunc41 = r1vtable[128];
		UnkFunc42 = r1vtable[129];
		UnkFunc43 = r1vtable[130];
		UnkFunc44 = r1vtable[131];
		AllocLevelStaticData = r1vtable[132];
		UnkFunc45 = r1vtable[133];
		UnkFunc46 = r1vtable[134];
		UnkFunc47 = r1vtable[135];
		Pause = r1vtable[136];
		UnkFunc48 = r1vtable[137];
		UnkFunc49 = r1vtable[138];
		UnkFunc50 = r1vtable[139];
		NullSub1 = r1vtable[140];
		UnkFunc51 = r1vtable[141];
		UnkFunc52 = r1vtable[142];
		MarkTeamsAsBalanced_On = r1vtable[143];
		MarkTeamsAsBalanced_Off = r1vtable[144];
		UnkFunc53 = r1vtable[145];
		UnkFunc54 = r1vtable[146];
		UnkFunc55 = r1vtable[147];
		UnkFunc56 = r1vtable[148];
		DisconnectClient = r1vtable[149];
		UnkFunc58 = r1vtable[150];
		UnkFunc59 = r1vtable[151];
		UnkFunc60 = r1vtable[152];
		UnkFunc61 = r1vtable[153];
		UnkFunc62 = r1vtable[154];
		UnkFunc63 = r1vtable[155];
		NullSub2 = r1vtable[156];
		UnkFunc64 = r1vtable[157];
		NullSub3 = r1vtable[158];
		NullSub4 = r1vtable[159];
		UnkFunc65 = r1vtable[160];
		UnkFunc66 = r1vtable[161];
		UnkFunc67 = r1vtable[162];
		UnkFunc68 = r1vtable[163];
		UnkFunc69 = r1vtable[164];
		//CVEngineServer__UnkFunc_R1EXCLUSIVE = r1vtable[165];
		FuncThatReturnsFF_12 = r1vtable[166];
		FuncThatReturnsFF_11 = r1vtable[167];
		FuncThatReturnsFF_10 = r1vtable[168];
		FuncThatReturnsFF_9 = r1vtable[169];
		FuncThatReturnsFF_8 = r1vtable[170];
		FuncThatReturnsFF_7 = r1vtable[171];
		FuncThatReturnsFF_6 = r1vtable[172];
		FuncThatReturnsFF_5 = r1vtable[173];
		FuncThatReturnsFF_4 = r1vtable[174];
		FuncThatReturnsFF_3 = r1vtable[175];
		FuncThatReturnsFF_2 = r1vtable[176];
		FuncThatReturnsFF_1 = r1vtable[177];
		GetClientXUID = r1vtable[178];
		IsActiveApp = r1vtable[179];
		UnkFunc70 = r1vtable[180];
		Bandwidth_WriteBandwidthStatsToFile = r1vtable[181];
		UnkFunc71 = r1vtable[182];
		IsCheckpointMapLoad = r1vtable[183];
		UnkFunc72 = r1vtable[184];
		UnkFunc73 = r1vtable[185];
		UnkFunc74 = r1vtable[186];
		UnkFunc75 = r1vtable[187];
		UnkFunc76 = r1vtable[188];
		NullSub5 = r1vtable[189];
		NullSub6 = r1vtable[190];
		//sub_1800FE440 = r1vtable[191];
		//sub_1800FE450 = r1vtable[192];
		//sub_1800FE3C0 = r1vtable[193];
		//sub_1800FE3D0 = r1vtable[194];
		//sub_1800FE3E0 = r1vtable[195];
		//sub_1800FE400 = r1vtable[196];
		//sub_1800FE410 = r1vtable[197];
		//sub_1800FE420 = r1vtable[198];
		//sub_1800FE460 = r1vtable[199];
		//sub_1800FE470 = r1vtable[200];
		//sub_1800FE480 = r1vtable[201];
		//sub_1800FE490 = r1vtable[202];
		//sub_1800FE4A0 = r1vtable[203];
		//sub_1800FE4B0 = r1vtable[204];
		//sub_1800FE4C0 = r1vtable[205];
		//sub_1800FE4D0 = r1vtable[206];
		//sub_1800FE4E0 = r1vtable[207];
		//sub_1800FE4F0 = r1vtable[208];
		//sub_1800FE500 = r1vtable[209];
		//sub_1800FE510 = r1vtable[210];
		//sub_1800FE530 = r1vtable[211];
		//sub_1800FE540 = r1vtable[212];
		//sub_1800FE550 = r1vtable[213];
		//sub_1800FE560 = r1vtable[214];
		UpdateClientHashtag = r1vtable[215];
		UnkFunc77 = r1vtable[216];
		UnkFunc78 = r1vtable[217];
		UnkFunc79 = r1vtable[218];
		UnkFunc80 = r1vtable[219];
		UnkFunc81 = r1vtable[220];
		UnkFunc82 = r1vtable[221];
	}
};