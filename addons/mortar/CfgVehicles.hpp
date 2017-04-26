class CfgVehicles {

	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class ACE_Actions;
	};
	class Mortar_01_base_F: StaticMortar{};
	class LIB_Mortar_base_ACE: Mortar_01_base_F {
		scope = 1;
		expansion = 1;
		transportSoldier = 1;
		cargoAction[] = {"LIB_mortar_gunner_2"};
		mapSize = 3;	
		class Library
		{
			libTextDesc = "";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_GrWr34_ACE"};
				gunnerAction = "LIB_mortar_gunner_1";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_Optika_zis3.p3d";
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
	};
	class LIB_GrWr34_ACE: LIB_Mortar_base_ACE {
		scope = 2;
		side = 1;
		faction = "LIB_WEHRMACHT";
		crew = "LIB_GER_gun_crew";
		typicalCargo[] = {"LIB_GER_gun_crew"};
		displayname = "GrWr34 (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_GrWr34.p3d";
		icon = "\WW2\Assets_t\Weapons\Misc_t\Icons\Mortars\icon_GrWr34_ca.paa";
		picture = "\WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\GrWr34_ca.paa";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_GrWr34_ACE"};
			};
		};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[] = {"LIB_GrWr34_Bag_ACE","LIB_GrWr34_Bar_ACE"};
		};
	};
	class LIB_BM37_ACE: LIB_Mortar_base_ACE {
		scope = 2;
		side = 0;
		faction = "LIB_RKKA";
		crew = "LIB_SOV_gun_crew";
		typicalCargo[] = {"LIB_SOV_gun_crew"};
		displayname = "BM37 (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_Bm37.p3d";
		icon = "\WW2\Assets_t\Weapons\Misc_t\Icons\Mortars\icon_Bm37_ca.paa";
		picture = "\WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\BM37_ca.paa";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_BM37_ACE"};
			};
		};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[] = {"LIB_BM37_Bag_ACE","LIB_BM37_Bar_ACE"};
		};
	};
	
	class Bag_Base;
	class LIB_Bag_Base_ACE: Bag_Base {
		scope = 1;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		icon = "iconBackpack";
		mass = 380;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};		
	};
	class LIB_GrWr34_Bag_ACE: LIB_Bag_Base_ACE{
		faction = "LIB_WEHRMACHT";
		scope = 2;
		displayName = "GrWr34 Tripod (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_GrWr34_bp.p3d";
		picture = "\WW2\Assets_t\Weapons\Misc_t\Pictures\Backpacks\B_GrWr34_Bag_ca.paa";
	};
	class LIB_BM37_Bag_ACE: LIB_Bag_Base_ACE {
		faction = "LIB_RKKA";
		scope = 2;
		displayName = "BM37 Tripod (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_Bm37_bp.p3d";
		picture = "\WW2\Assets_t\Vehicles\Misc_t\Pictures\Mortars\BM37_base_ca.paa";
	};
	
	class Weapon_Bag_Base: Bag_Base {
		class assembleInfo{};
	};	
	class LIB_Weapon_Bag_Base_ACE: Weapon_Bag_Base {
		scope = 1;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";		
		mass = 250;
		class assembleInfo: assembleInfo{};
	};
	class LIB_GrWr34_Bar_ACE: LIB_Weapon_Bag_Base_ACE {
		faction = "LIB_WEHRMACHT";
		scope = 2;
		displayName = "GrWr34 Barrel (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_GrWr34_br.p3d";
		picture = "\WW2\Assets_t\Weapons\Misc_t\Pictures\Backpacks\B_GrWr34_Bar_ca.paa";
		class assembleInfo: assembleInfo {
			base[] = {"LIB_GrWr34_Bag_ACE"};
			displayName = "$STR_LIB_DN_GRWR34";
			assembleTo = "LIB_GrWr34_ACE";
		};

	};
	class LIB_BM37_Bar_ACE: LIB_Weapon_Bag_Base_ACE {
		faction = "LIB_RKKA";
		scope = 2;
		displayName = "BM37 Barrel (ACE3)";
		model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_Bm37_br.p3d";
		picture = "\WW2\Assets_t\Weapons\Misc_t\Pictures\Backpacks\B_BM37_Bar_ca.paa";

		class assembleInfo: assembleInfo
		{
			base[] = {"LIB_BM37_Bag_ACE"};
			displayName = "$STR_LIB_DN_GRWR34";
			assembleTo = "LIB_BM37_ACE";
		};
	};
	class NATO_Box_Base;
	class LIB_AmmoOrd_F: NATO_Box_Base	{
		scope = 1;
		scopeCurator = 1;
		forceSupply=0;
		showWeaponCargo=0;
		transportMaxMagazines=0;
		transportMaxWeapons=0;		
		class eventHandlers {
			init = "_this call compile preProcessFileLineNumbers ""\z\ifa3_comp_ace\addons\mortar\functions\fnc_init.sqf"";";
		};
		class AnimationSources {
			class BoxLidRotation {
				source = "user";
				initPhase = 0;
				animPeriod = 1.5;
			};

			class round_1_hide {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_2_hide {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_3_hide {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_4_hide {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};

			class round_5_hide {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
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
		class TransportMagazines {};
	};

	class LIB_Box_82mm_Mo_HE: LIB_AmmoOrd_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_HE";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_heat_co.paa"};		
		mortarMagazines = "LIB_1Rnd_82mm_Mo_HE";
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_HE";
			};
		};
	};

	class LIB_Box_82mm_Mo_Smoke: LIB_AmmoOrd_F {
		scope = 2;
		scopeCurator = 2;		
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_SM";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_smoke_co.paa"};				
		mortarMagazines = "LIB_1Rnd_82mm_Mo_Smoke";
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_SM";
			};
		};
	};

	class LIB_Box_82mm_Mo_Illum: LIB_AmmoOrd_F {
		scope = 2;
		scopeCurator = 2;		
		displayName = "$STR_ace_ifa3mortar_mortar_ammobox_IL";
		model = "\z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"z\ifa3_comp_ace\addons\mortar\data\82mm_ammobox_illum_co.paa"};		
		mortarMagazines = "LIB_1Rnd_82mm_Mo_Illum";
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions:  ACE_MainActions {
				displayName = "$STR_ace_ifa3mortar_desc_mortar_ammobox_IL";
			};
		};
	};
};
