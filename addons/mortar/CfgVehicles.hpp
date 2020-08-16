class CfgVehicles {
	class LIB_StaticMortar_base;
	class LIB_SU_Mortar_base: LIB_StaticMortar_base {};
	class LIB_BM37: LIB_SU_Mortar_base {
		class UserActions {};
		class ace_csw {
			enabled = 1;
			magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "LIB_BM37";
			disassembleWeapon = "LIB_BM37_Barrel";
			disassembleTurret = "LIB_BM37_Tripod_Deployed";
			desiredAmmo = 1;
			ammoLoadTime = 3;
			ammoUnloadTime = 5;
		};	
	};
	class LIB_GER_Mortar_base: LIB_StaticMortar_base {};
	class LIB_GrWr34: LIB_GER_Mortar_base {
		class UserActions {};
		class ace_csw {
			enabled = 1;
			magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "LIB_GrWr34";
			disassembleWeapon = "LIB_GrWr34_Barrel"; // carry weapon [CfgWeapons]
			disassembleTurret = "LIB_GrWr34_Tripod_Deployed"; // turret [CfgVehicles]
			desiredAmmo = 1; // Ammo count when fully loaded
			ammoLoadTime = 3; // Time to load ammo in
			ammoUnloadTime = 5; // Time to retreive ammo from weapon
		};	
	};
	class LIB_US_Mortar_base: LIB_StaticMortar_base {};
	class LIB_M2_60: LIB_US_Mortar_base {
		class UserActions {};
		class ace_csw {
			enabled = 1;
			magazineLocation = "_target selectionPosition 'usti hlavne'";
			proxyWeapon = "LIB_M2_60_ACE";
			disassembleWeapon = "LIB_M2_60_Barrel";
			disassembleTurret = "LIB_M2_60_Tripod_Deployed";
			desiredAmmo = 1;
			ammoLoadTime = 3;
			ammoUnloadTime = 5;
		};	
	};

	class LIB_GrWr34_ACE: LIB_GrWr34 {scope = 1;};
	class LIB_BM37_ACE: LIB_BM37 {scope = 1;};
	class LIB_M2_60_ACE: LIB_M2_60 {scope = 1;};

	class B_LIB_AssaultPack_Base;
	class LIB_Tripod_Bag: B_LIB_AssaultPack_Base {
		class assembleInfo;
	};
	class LIB_BM37_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_BM37_Barrel {
				deployTime = 10;
				assembleTo = "LIB_BM37";
			};
		};
		class ace_csw { disassembleTo = "LIB_BM37_Tripod"; }; // What will be spawned when "Pickup Tripod" is selected
	};
	class LIB_GrWr34_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_GrWr34_Barrel {
				deployTime = 10;
				assembleTo = "LIB_GrWr34";
			};
		};
		class ace_csw { disassembleTo = "LIB_GrWr34_Tripod"; }; // What will be spawned when "Pickup Tripod" is selected
	};
	class LIB_M2_60_Tripod_Deployed: LIB_Tripod_Bag {
		class assembleInfo: assembleInfo {
			class LIB_M2_60_Barrel {
				deployTime = 8;
				assembleTo = "LIB_M2_60";
			};
		};
		class ace_csw { disassembleTo = "LIB_M2_60_Tripod"; }; // What will be spawned when "Pickup Tripod" is selected
	};

	class LIB_ReammoBox_base;
	class LIB_AmmoOrdnance_base: LIB_ReammoBox_base {
		ace_dragging_cancarry = 1;
		ace_dragging_carryposition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;

		ace_dragging_canDrag = 1;
		ace_dragging_dragposition[] = {0,1.2,0};
		ace_dragging_dragdirection = 0;

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

	class LIB_Box_82mm_Mo_base: LIB_AmmoOrdnance_base {};
	class LIB_Box_82mm_Mo_HE: LIB_Box_82mm_Mo_base {
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
	class LIB_Box_82mm_Mo_Smoke: LIB_Box_82mm_Mo_base {
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
	class LIB_Box_82mm_Mo_Illum: LIB_Box_82mm_Mo_base {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
	class LIB_Box_81mm_Mo_HE: LIB_Box_82mm_Mo_base {
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
	class LIB_Box_81mm_Mo_Smoke: LIB_Box_82mm_Mo_base {
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
	class LIB_Box_81mm_Mo_Illum: LIB_Box_82mm_Mo_base {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
	class LIB_Box_60mm_Mo_base: LIB_AmmoOrdnance_base {};
	class LIB_Box_60mm_Mo_HE: LIB_Box_60mm_Mo_base {
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
	class LIB_Box_60mm_Mo_Smoke: LIB_Box_60mm_Mo_base {
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
	class LIB_Box_60mm_Mo_Illum: LIB_Box_60mm_Mo_base {
		scope = 2;
		scopeCurator = 2;
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
};
