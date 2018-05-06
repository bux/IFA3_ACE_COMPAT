class CfgVehicles {
	class LIB_SU_Mortar_base;
	class LIB_BM37: LIB_SU_Mortar_base {scope=1;};
	class LIB_GER_Mortar_base;
	class LIB_GrWr34: LIB_GER_Mortar_base {scope=1;};
	class LIB_US_Mortar_base;
	class LIB_M2_60: LIB_US_Mortar_base {scope=1;};

	class StaticWeapon;
	class StaticMortar: StaticWeapon
	{
		class Turrets;
	};
	class Mortar_01_base_F: StaticMortar
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LIB_Mortar_base_ACE: Mortar_01_base_F {
		scope = 0;
		expansion = 1;
		transportSoldier = 1;
		cargoAction[] = {"LIB_mortar_gunner_2"};
		mapSize = 3;
		class Library
		{
			libTextDesc = "";
		};
		class Eventhandlers: Eventhandlers
		{
			class IFA3_Weapons_Static_fnc_fired_EH
			{
				fired = "_this call LIB_Weapons_Static_fnc_fired_EH";
			};
			class IFA3_Weapons_Static
			{
				init = "[(_this select 0),[],true] spawn LIB_Weapons_Static_fnc_init_EH";
			};
			class IFA3_Weapons_Static_fnc_GetOut_EH
			{
				GetOut = "[(_this select 0),(_this select 1),(_this select 2),'AmovPknlMstpSnonWnonDnon'] call LIB_Weapons_Static_fnc_GetOut_EH";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_GrWr34_ACE"};
				gunnerAction = "LIB_mortar_gunner_1";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
		class ACE_Actions;
	};
	class LIB_GrWr34_ACE: LIB_Mortar_base_ACE {
		scope = 2;
		side = 1;
		faction = "LIB_WEHRMACHT";
		crew = "LIB_GER_gun_crew";
		typicalCargo[] = {"LIB_GER_gun_crew"};
		displayName = "$STR_LIB_DN_GRWR34_ACE";
		model = "\WW2\Assets_m\Weapons\Mortars_m\IF_GrWr34.p3d";
		icon = "\WW2\Assets_t\Weapons\Icons_t\Mortars\Icon_GrWr34_ca.paa";
		picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_GrWr34_ca.paa";
		class assembleInfo: assembleInfo
		{
			LIB_dissasembleTo[] = {"LIB_GrWr34_Barrel","LIB_GrWr34_Tripod_Deployed"};
			deployTime = 12;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_GrWr34_ACE"};
			};
		};
		class ACE_Actions: ACE_Actions
		{
			class ace_mk6mortar_unloadMagazine
			{
				displayName = "$STR_ace_mk6mortar_unloadMortar";
				distance = 2;
				condition = "_this call ace_mk6mortar_fnc_canUnloadMagazine";
				statement = "[_target,_player,5] call ace_mk6mortar_fnc_unloadMagazineTimer";
				icon = "";
				selection = "usti hlavne";
			};
			class ace_mk6mortar_LoadActions
			{
				displayName = "$STR_ace_mk6mortar_loadMortar";
				distance = 2;
				condition = "[_target,_player] call ace_mk6mortar_fnc_canLoadMagazine";
				statement = "";
				icon = "";
				selection = "usti hlavne";
				class ace_mk6mortar_loadMagazine_Illum
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Illum";
					condition = "[_target,_player,'LIB_1Rnd_81mm_Mo_Illum'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,5,'LIB_1Rnd_81mm_Mo_Illum'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_Smoke
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Smoke";
					condition = "[_target,_player,'LIB_1Rnd_81mm_Mo_Smoke'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_81mm_Mo_Smoke'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_HE
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE";
					condition = "[_target,_player,'LIB_1Rnd_81mm_Mo_HE'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_81mm_Mo_HE'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
			};
		};
	};
	class LIB_BM37_ACE: LIB_Mortar_base_ACE {
		scope = 2;
		side = 0;
		faction = "LIB_RKKA";
		crew = "LIB_SOV_gun_crew";
		typicalCargo[] = {"LIB_SOV_gun_crew"};
		displayName = "$STR_LIB_DN_BM37_ACE";
		model = "\WW2\Assets_m\Weapons\Mortars_m\IF_Bm37.p3d";
		icon = "\WW2\Assets_t\Weapons\Icons_t\Mortars\Icon_Bm37_ca.paa";
		picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_BM37_ca.paa";
		class assembleInfo: assembleInfo
		{
			LIB_dissasembleTo[] = {"LIB_BM37_Barrel","LIB_BM37_Tripod_Deployed"};
			deployTime = 13;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_BM37_ACE"};
			};
		};
		class ACE_Actions: ACE_Actions
		{
			class ace_mk6mortar_unloadMagazine
			{
				displayName = "$STR_ace_mk6mortar_unloadMortar";
				distance = 2;
				condition = "_this call ace_mk6mortar_fnc_canUnloadMagazine";
				statement = "[_target,_player,5] call ace_mk6mortar_fnc_unloadMagazineTimer";
				icon = "";
				selection = "usti hlavne";
			};
			class ace_mk6mortar_LoadActions
			{
				displayName = "$STR_ace_mk6mortar_loadMortar";
				distance = 2;
				condition = "[_target,_player] call ace_mk6mortar_fnc_canLoadMagazine";
				statement = "";
				icon = "";
				selection = "usti hlavne";
				class ace_mk6mortar_loadMagazine_Illum
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Illum";
					condition = "[_target,_player,'LIB_1Rnd_82mm_Mo_Illum'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,5,'LIB_1Rnd_82mm_Mo_Illum'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_Smoke
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Smoke";
					condition = "[_target,_player,'LIB_1Rnd_82mm_Mo_Smoke'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_82mm_Mo_Smoke'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_HE
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE";
					condition = "[_target,_player,'LIB_1Rnd_82mm_Mo_HE'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_82mm_Mo_HE'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
			};
		};
	};
	class LIB_M2_60_ACE: LIB_Mortar_base_ACE {
		scope = 2;
		side = 2;
		faction = "LIB_US_ARMY";
		crew = "LIB_US_corporal";
		typicalCargo[] = {"LIB_US_corporal"};
		displayName = "$STR_LIB_DN_M2_60_ACE";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_M2.p3d";
		icon = "\WW2\Assets_t\Weapons\Icons_t\Mortars\Icon_M2_ca.paa";
		picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_M2_60_ca.paa";
		class assembleInfo: assembleInfo
		{
			LIB_dissasembleTo[] = {"LIB_M2_60_Barrel","LIB_M2_60_Tripod_Deployed"};
			deployTime = 8;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_M2_60_ACE"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_M4_Mortar_Sight.p3d";
			};
		};
		class ACE_Actions: ACE_Actions
		{
			class ace_mk6mortar_unloadMagazine
			{
				displayName = "$STR_ace_mk6mortar_unloadMortar";
				distance = 2;
				condition = "_this call ace_mk6mortar_fnc_canUnloadMagazine";
				statement = "[_target,_player,5] call ace_mk6mortar_fnc_unloadMagazineTimer";
				icon = "";
				selection = "usti hlavne";
			};
			class ace_mk6mortar_LoadActions
			{
				displayName = "$STR_ace_mk6mortar_loadMortar";
				distance = 2;
				condition = "[_target,_player] call ace_mk6mortar_fnc_canLoadMagazine";
				statement = "";
				icon = "";
				selection = "usti hlavne";
				class ace_mk6mortar_loadMagazine_Illum
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Illum";
					condition = "[_target,_player,'LIB_1Rnd_60mm_Mo_Illum'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,5,'LIB_1Rnd_60mm_Mo_Illum'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_Smoke
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_Smoke";
					condition = "[_target,_player,'LIB_1Rnd_60mm_Mo_Smoke'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_60mm_Mo_Smoke'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
				class ace_mk6mortar_loadMagazine_HE
				{
					displayName = "$STR_ace_mk6mortar_loadMagazine_HE";
					condition = "[_target,_player,'LIB_1Rnd_60mm_Mo_HE'] call ace_mk6mortar_fnc_canLoadMagazine";
					statement = "[_target,_player,2.5,'LIB_1Rnd_60mm_Mo_HE'] call ace_mk6mortar_fnc_loadMagazineTimer";
					icon = "";
				};
			};
		};
	};

	class B_LIB_AssaultPack_Base;
	class LIB_Tripod_Bag: B_LIB_AssaultPack_Base {
		class assembleInfo;
	};
	class LIB_BM37_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_BM37_Barrel {
				deployTime = 10;
				assembleTo = "LIB_BM37_ACE";
			};
		};
	};
	class LIB_GrWr34_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_GrWr34_Barrel {
				deployTime = 10;
				assembleTo = "LIB_GrWr34_ACE";
			};
		};
	};
	class LIB_M2_60_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_M2_60_Barrel {
				deployTime = 8;
				assembleTo = "LIB_M2_60_ACE";
			};
		};
	};

	class NATO_Box_Base;
	class LIB_AmmoOrd_F: NATO_Box_Base {
		class TransportMagazines;
		class eventHandlers {
			init = "_this call compile preProcessFileLineNumbers ""\z\ifa3_comp_ace\addons\mortar\functions\fnc_init.sqf"";";
		};
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
				selection = "";
				distance = 3;
				condition = "!(_target getVariable ['isOpened',false])";
				class ACE_OpenLid {
					displayName = "$STR_ace_ifa3mortar_open_ammobox";
					distance = 2;
					condition = "!(_target getVariable ['isOpened',false])";
					statement = "_target animate [""BoxLidRotation"",1]; _target setVariable [""isOpened"",true,true];";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
				};
			};

			class ACE_CloseLid {
				selection = "rotation_action_point";
				distance = 2;
				displayName = "$STR_ace_ifa3mortar_close_ammobox";
				condition = "_target getVariable ['isOpened',true]";
				statement = "_target animate [""BoxLidRotation"",0]; _target setVariable [""isOpened"",false,true];";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;

			};

			class ACE_Round_1_Take {
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_1_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_1',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canTake)}";
				statement = "_target animate ['round_1_hide',1]; _target setVariable ['round_1',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_1_Put {
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_1_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_1',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canPut)})";
				statement = "[_player,_target,true] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_2_Take {
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_2_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_2',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canTake)}";
				statement = "_target animate ['round_2_hide',1]; _target setVariable ['round_2',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_2_Put {
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_2_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_2',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canPut)})";
				statement = "[_player,_target,2] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_3_Take {
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_3_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_3',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canTake)}";
				statement = "_target animate ['round_3_hide',1]; _target setVariable ['round_3',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_3_Put {
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_3_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_3',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canPut)})";
				statement = "[_player,_target,3] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_4_Take {
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_4_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_4',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canTake)}";
				statement = "_target animate ['round_4_hide',1]; _target setVariable ['round_4',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_4_Put {
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_4_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_4',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canPut)})";
				statement = "[_player,_target,4] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_5_Take {
				displayName = "$STR_ace_ifa3mortar_take";
				selection = "round_5_action_point";
				distance = 2;
				condition = "(_target getVariable ['round_5',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canTake)}";
				statement = "_target animate ['round_5_hide',1]; _target setVariable ['round_5',false,true]; [_player,_target] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_take_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};

			class ACE_Round_5_Put {
				displayName = "$STR_ace_ifa3mortar_place";
				selection = "round_5_action_point";
				distance = 2;
				condition = "(!(_target getVariable ['round_5',true]) && {(_target getVariable ['isOpened',true])} && {([_player,_target] call ifa3_comp_ace_mortar_fnc_canPut)})";
				statement = "[_player,_target,5] call compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\mortar\functions\fnc_put_shell.sqf';";
				showDisabled = 0;
				exceptions[] = {};
				priority = 5;
			};
		};
	};
	class LIB_Box_82mm_Mo_HE: LIB_AmmoOrd_F {
		class TransportMagazines {
			class _xx_LIB_1rnd_82mmHE_BM37
			{
				magazine = "LIB_1rnd_82mmHE_BM37";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
			};
		};
	};
	class LIB_Box_82mm_Mo_Smoke: LIB_Box_82mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines {
			class _xx_LIB_82mm_BM37_SmokeShell
			{
				magazine = "LIB_82mm_BM37_SmokeShell";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_SM";
			};
		};
	};
	class LIB_Box_82mm_Mo_Illum: LIB_Box_82mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
	class LIB_Box_81mm_Mo_HE: LIB_Box_82mm_Mo_HE {
		scope = 2;
		class TransportMagazines {
			class _xx_LIB_1rnd_81mmHE_GRWR34
			{
				magazine = "LIB_1rnd_81mmHE_GRWR34";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
			};
		};
	};
	class LIB_Box_81mm_Mo_Smoke: LIB_Box_81mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines {
			class _xx_LIB_81mm_GRWR34_SmokeShell
			{
				magazine = "LIB_81mm_GRWR34_SmokeShell";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_SM";
			};
		};
	};
	class LIB_Box_81mm_Mo_Illum: LIB_Box_81mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
	class LIB_Box_60mm_Mo_HE: LIB_Box_82mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines {
			class _xx_LIB_1rnd_60mmHE_M2
			{
				magazine = "LIB_1rnd_60mmHE_M2";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
			};
		};
	};
	class LIB_Box_60mm_Mo_Smoke: LIB_Box_60mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class TransportMagazines {
			class _xx_LIB_60mm_M2_SmokeShell
			{
				magazine = "LIB_60mm_M2_SmokeShell";
				count = 0;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_SM";
			};
		};
	};
	class LIB_Box_60mm_Mo_Illum: LIB_Box_60mm_Mo_HE {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
};
