#define MACRO_REARM_TRUCK_ACTIONS \
        class ACE_Actions: ACE_Actions { \
            class ACE_MainActions: ACE_MainActions { \
                class EGVAR(rearm,TakeAmmo) { \
                    displayName = ECSTRING(rearm,TakeAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canTakeAmmo)); \
                    insertChildren = QUOTE(_target call EFUNC(rearm,addRearmActions)); \
                    exceptions[] = {"isNotInside"}; \
                    showDisabled = 0; \
                    priority = 2; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
                class EGVAR(rearm,StoreAmmo) { \
                    displayName = ECSTRING(rearm,StoreAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canStoreAmmo)); \
                    statement = QUOTE(_this call EFUNC(rearm,storeAmmo)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
            }; \
        };

#define MACRO_REFUEL_ACTIONS \
    class ACE_Actions: ACE_Actions { \
        class ACE_MainActions: ACE_MainActions { \
            class EGVAR(refuel,Refuel) { \
                displayName = ECSTRING(refuel,Refuel); \
                distance = 7; \
                condition = "true"; \
                statement = ""; \
                showDisabled = 0; \
                priority = 2; \
                icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                class EGVAR(refuel,TakeNozzle) { \
                    displayName = ECSTRING(refuel,TakeNozzle); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canTakeNozzle)); \
                    statement = QUOTE([ARR_3(_player,_target,objNull)] call EFUNC(refuel,TakeNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,CheckFuelCounter) { \
                    displayName = ECSTRING(refuel,CheckFuelCounter); \
                    condition = "true"; \
                    statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,readFuelCounter)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,CheckFuel) { \
                    displayName = ECSTRING(refuel,CheckFuel); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canCheckFuel)); \
                    statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,checkFuel)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,Connect) { \
                    displayName = ECSTRING(refuel,Connect); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canConnectNozzle)); \
                    statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,connectNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,Return) { \
                    displayName = ECSTRING(refuel,Return); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canReturnNozzle)); \
                    statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,returnNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
            }; \
        }; \
    };


#define MACRO_REPAIRVEHICLE \
    class ACE_Actions { \
        class ACE_MainActions { \
            class GVAR(Repair) { \
                displayName = CSTRING(Repair); \
                condition = "true"; \
                statement = ""; \
                runOnHover = 1; \
                showDisabled = 0; \
                priority = 2; \
                icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa"; \
                distance = 4; \
                exceptions[] = {"isNotOnLadder"}; \
            }; \
        }; \
    };	
	
class CfgVehicles
{
	class LIB_Boat_base;
	class LIB_LCVP: LIB_Boat_base	{
		EGVAR(refuel,fuelCapacity) = 500;
	};
	class LIB_StaticCannon_base;
	class LIB_Zis3_base: LIB_StaticCannon_base	{
		ace_cargo_canLoad = 0;
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class LIB_Pak40_base: LIB_StaticCannon_base	{
		ace_cargo_canLoad = 0;
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class LIB_61k_base: LIB_StaticCannon_base	{
		ace_cargo_canLoad = 0;
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class LIB_StaticCanon_base;
	class LIB_FlaK_38_base: LIB_StaticCanon_base	{
		ace_cargo_canLoad = 0;
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class LIB_Flakvierling_38_base: LIB_StaticCanon_base	{
		ace_cargo_canLoad = 0;
		ace_dragging_canCarry = 0;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class LIB_StaticMGWeapon_base;
	class LIB_MG42_Lafette: LIB_StaticMGWeapon_base	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class lib_maxim_m30_base: LIB_StaticMGWeapon_base	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_carryDirection = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
	};
	class B_LIB_AssaultPack_Base;
	class B_LIB_GER_LW_Paradrop: B_LIB_AssaultPack_Base {
        ace_hasReserveParachute = 1;
        ace_reserveParachute = "ACE_ReserveParachute";
    };
	class B_LIB_SOV_RA_Paradrop: B_LIB_AssaultPack_Base {
        ace_hasReserveParachute = 1;
        ace_reserveParachute = "ACE_ReserveParachute";
    };
	class LIB_Plane_base;
	class LIB_SU_Plane_base: LIB_Plane_base {};
	class LIB_GER_Plane_base: LIB_Plane_base {};
	class LIB_US_Plane_base: LIB_Plane_base {};
	class LIB_P47: LIB_US_Plane_base {
        EGVAR(refuel,fuelCapacity) = 776;
    };	
	class LIB_FW190F8: LIB_GER_Plane_base {
        EGVAR(refuel,fuelCapacity) = 523.9;
    };	
	class LIB_Ju87: LIB_GER_Plane_base {
        EGVAR(refuel,fuelCapacity) = 1155;
    };	
	class LIB_P39: LIB_SU_Plane_base {
        EGVAR(refuel,fuelCapacity) = 454;
    };	
	class LIB_Pe2: LIB_SU_Plane_base {
        EGVAR(refuel,fuelCapacity) = 1086;
    };	
	class LIB_Li2: LIB_SU_Plane_base {
        EGVAR(refuel,fuelCapacity) = 3043;
    };	
	class LIB_Tank_base;
	class LIB_JS2_43: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 820;		
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander_back"};
    };
	class LIB_PzKpfwIV_H_base: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 470;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander"};
    };
	class LIB_PzKpfwV_base: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 720;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander"};
    };
	class LIB_PzKpfwVI_B_base: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 860;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander"};
    };
	class LIB_PzKpfwVI_E_base: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 540;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander"};		
    };
	class LIB_StuG_III_G_base: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 320;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander","osa_poklop_loader_back"};
    };
	class LIB_T34_76: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 610;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander_back"};
    };
	class LIB_T34_85: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 810;
		GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander_back"};
    };
	class LIB_M4A3_75: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 660;
        GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander_left"};		
    };
	class LIB_SU85: LIB_Tank_base {
        ace_repair_hitpointPositions[] = {{"HitHull", {0,0,0}},{"HitEngine", {0,0,0}},{"HitFuel", {0,0,0}},{"HitLTrack", {0,0,0}},{"HitRTrack", {0,0,0}}};
		EGVAR(refuel,fuelCapacity) = 510;
        GVAR(ammoLocation) = "HitTurret";
        GVAR(cookoffSelections)[] = {"osa_poklop_commander_back"};
    };
	class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
    class Car_F: Car {
        class ViewPilot;
        class NewTurret;
    };
	class LIB_Car_base: Car_F {};
	class LIB_Kfz1_base: LIB_Car_base	{
		ace_cargo_space = 3;
		EGVAR(refuel,fuelCapacity) = 50;
	};
	class LIB_Willys_MB_base: LIB_Car_base	{
		ace_cargo_space = 3;
		EGVAR(refuel,fuelCapacity) = 56.8; 
	};	
	class Truck_F: Car_F {};
	class LIB_Truck_base: Truck_F {};
	class LIB_opelblitz_base: LIB_Truck_base {
        EGVAR(refuel,fuelCapacity) = 82;
    };
	class LIB_opelblitz_open_y_camo: LIB_opelblitz_base {};
	class LIB_opelblitz_fuel: LIB_opelblitz_base {
        transportFuel = 0; //3k
        MACRO_REFUEL_ACTIONS
        GVAR(hooks)[] = {{.28,-4.99,-.3},{-.25,-4.99,-.3}};
        GVAR(fuelCargo) = 10000;
    };
	class LIB_opelblitz_parm: LIB_opelblitz_base {
		MACRO_REPAIRVEHICLE
        GVAR(canRepair) = 1;
        transportRepair = 0;
    };
	class LIB_opelblitz_ammo: LIB_opelblitz_open_y_camo {
        transportAmmo = 0;
        MACRO_REARM_TRUCK_ACTIONS
    };
	class LIB_Scout_M3_base: LIB_Truck_base {
        EGVAR(refuel,fuelCapacity) = 110;
    };
	class LIB_US6_base: LIB_Truck_base {
        EGVAR(refuel,fuelCapacity) = 151;
    };
	class LIB_US6_Unarmed_base: LIB_US6_base {};
	class LIB_US6_Tent: LIB_US6_Unarmed_base {};
	class LIB_US6_Tent_Cargo: LIB_US6_Unarmed_base	{
		ace_cargo_space = 15;
	};
	class LIB_US6_Open_Cargo: LIB_US6_Tent_Cargo	{
		ace_cargo_space = 15;
	};
	class LIB_US6_Ammo: LIB_US6_Open_Cargo {
        transportAmmo = 0;
        MACRO_REARM_TRUCK_ACTIONS
    };
	class LIB_US_GMC_Ammo: LIB_US6_Ammo {
        transportAmmo = 0;
        MACRO_REARM_TRUCK_ACTIONS
    };
	class LIB_US_GMC_Parm: LIB_US6_Tent {
		MACRO_REPAIRVEHICLE
        GVAR(canRepair) = 1;
        transportRepair = 0;
    };
	class LIB_US_GMC_Fuel: LIB_US6_Tent {
        transportFuel = 0; //3k
        MACRO_REFUEL_ACTIONS
        GVAR(hooks)[] = {{.28,-4.99,-.3},{-.25,-4.99,-.3}};
        GVAR(fuelCargo) = 10000;
    };
	class LIB_zis5v_base: LIB_Truck_base {
        EGVAR(refuel,fuelCapacity) = 60;
    };
	class LIB_zis6_parm: LIB_zis5v_base {
		MACRO_REPAIRVEHICLE
        GVAR(canRepair) = 1;
        transportRepair = 0;
    };
	class LIB_zis5v_fuel: LIB_zis5v_base {
        transportFuel = 0; //3k
        MACRO_REFUEL_ACTIONS
        GVAR(hooks)[] = {{.28,-4.99,-.3},{-.25,-4.99,-.3}};
        GVAR(fuelCargo) = 10000;
    };
	class LIB_Wheeled_APC_base;
	class LIB_SdKfz251_base: LIB_Wheeled_APC_base {
        EGVAR(refuel,fuelCapacity) = 160;
    };
	class LIB_SdKfz_7_base: LIB_SdKfz251_base {
        EGVAR(refuel,fuelCapacity) = 215;
    };
	class LIB_US_M3_Halftrack: LIB_SdKfz251_base {
        EGVAR(refuel,fuelCapacity) = 230;
    };
	class LIB_ReammoBox_base;
	class LIB_Mine_Ammo_Box_Ger: LIB_ReammoBox_base	{
		scope = 2;
		displayName = "$STR_LIB_MINES_BOX_GER";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\WW2_Ger_ammo.p3d";
		faction = "LIB_WEHRMACHT";
		class TransportMagazines
		{
			class Ammo_LIB_TMI_42
			{
				magazine = "LIB_TMI_42_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_SMI_35_1
			{
				magazine = "LIB_SMI_35_1_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_SMI_35
			{
				magazine = "LIB_SMI_35_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_STMI
			{
				magazine = "LIB_STMI_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_shumine42
			{
				magazine = "LIB_shumine_42_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_ladung_S
			{
				magazine = "LIB_Ladung_Small_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_ladung_B
			{
				magazine = "LIB_Ladung_Big_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_ladung_PM
			{
				magazine = "LIB_Ladung_PM_MINE_mag";
				count = 0;
			};
			class Ammo_LIB_provod_100
			{
				magazine = "LIB_PM_Provod_100";
				count = 0;
			};
			class Ammo_LIB_marker
			{
				magazine = "LIB_MARKER_MINE_mag";
				count = 15;
			};
			class _xx_LIB_SIGN_MINEN
			{
				magazine = "LIB_SIGN_MINEN_mag";
				count = 15;
			};
		};
		class TransportWeapons
		{
			class Ammo_LIB_w
			{
				weapon = "LIB_w";
				count = 0;
			};
		};
		class TransportItems
		{
			class LIB_w
			{
				name = "LIB_w";
				count = 5;
			};
			class _xx_ACE_LIB_LadungPM
			{
				name = "ACE_LIB_LadungPM";
				count = 5;
			};
			class _xx_ACE_LIB_DefusalKit
			{
				name = "ACE_LIB_DefusalKit";
				count = 5;
			};
			class _xx_ACE_LIB_FireCord
			{
				name = "ACE_LIB_FireCord";
				count = 5;
			};
		};
	};
	class LIB_Mine_Ammo_Box_Su: LIB_ReammoBox_base	{
		scope = 2;
		displayName = "$STR_LIB_MINES_BOX_Su";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\WW2_Su_ammo.p3d";
		faction = "LIB_RKKA";
		class TransportMagazines
		{
			class Ammo_LIB_pomzec
			{
				magazine = "LIB_pomzec_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_provod_100
			{
				magazine = "LIB_PM_Provod_100";
				count = 0;
			};
			class Ammo_LIB_M3
			{
				magazine = "LIB_M3_Mine_mag";
				count = 10;
			};
			class Ammo_LIB_PMD6
			{
				magazine = "LIB_PMD6_Mine_mag";
				count = 10;
			};
			class Ammo_LIB_TM44
			{
				magazine = "LIB_TM44_Mine_mag";
				count = 10;
			};
			class Ammo_LIB_PM
			{
				magazine = "LIB_PM_Mine_mag";
				count = 0;
			};
			class Ammo_LIB_TROTIL
			{
				magazine = "LIB_TROTIL_MINE_mag";
				count = 10;
			};
			class Ammo_LIB_marker
			{
				magazine = "LIB_MARKER_MINE_mag";
				count = 15;
			};
			class _xx_LIB_SIGN_MINES
			{
				magazine = "LIB_SIGN_MINES_mag";
				count = 15;
			};
		};
		class TransportWeapons
		{
			class Ammo_LIB_w
			{
				weapon = "LIB_w";
				count = 0;
			};
		};
		class TransportItems
		{
			class LIB_w
			{
				name = "LIB_w";
				count = 5;
			};
			class _xx_ACE_LIB_LadungPM
			{
				name = "ACE_LIB_LadungPM";
				count = 5;
			};
			class _xx_ACE_LIB_DefusalKit
			{
				name = "ACE_LIB_DefusalKit";
				count = 5;
			};
			class _xx_ACE_LIB_FireCord
			{
				name = "ACE_LIB_FireCord";
				count = 5;
			};
		};
	};
	class LIB_Mine_AmmoBox_US: LIB_ReammoBox_base	{
		scope = 2;
		displayName = "$STR_LIB_DN_US_MINES_BOX";
		model = "\WW2\Assets_m\Weapons\Ammoboxes_m\WW2_Su_ammo.p3d";
		faction = "LIB_US_ARMY";
		class TransportMagazines
		{
			class _xx_LIB_US_M1A1_ATMINE_mag
			{
				magazine = "LIB_US_M1A1_ATMINE_mag";
				count = 10;
			};
			class _xx_LIB_US_M3_MINE_mag
			{
				magazine = "LIB_US_M3_MINE_mag";
				count = 10;
			};
			class _xx_LIB_US_TNT_4pound_mag
			{
				magazine = "LIB_US_TNT_4pound_mag";
				count = 15;
			};
			class _xx_LIB_US_BM10_PM_mag
			{
				magazine = "LIB_US_BM10_PM_mag";
				count = 15;
			};
			class _xx_LIB_PM_Provod_100
			{
				magazine = "LIB_PM_Provod_100";
				count = 15;
			};
		};
		class TransportWeapons
		{
			class _xx_LIB_ToolKit
			{
				weapon = "LIB_ToolKit";
				count = 5;
			};
		};
		class TransportItems
		{
			class _xx_ACE_LIB_LadungPM
			{
				name = "ACE_LIB_LadungPM";
				count = 5;
			};
			class _xx_ACE_LIB_DefusalKit
			{
				name = "ACE_LIB_DefusalKit";
				count = 5;
			};
			class _xx_ACE_LIB_FireCord
			{
				name = "ACE_LIB_FireCord";
				count = 5;
			};
		};		
	};

	class ACE_Explosives_Place;
	class ACE_Explosives_Place_LIB_SMI_35_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_SMI_35";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_SMI35_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_SMI_SMi35_1_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_SMI_35_1";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Smi35_1_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_STMI_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_STMI";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_StMi_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_pomzec_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_POMZ_2";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Pomzec_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_M3_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_M3";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_M3_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_US_M3_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_DN_US_M3";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_M3_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_shumine42_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_shumine42";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Shumine42_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_PMD6_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_PMD6";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_PMD6_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_TMI_42_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_TMI_42";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Tmi_42_inv.p3d";
	};
	class ACE_Explosives_Place_LIB_TM_44_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_TM_44";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Tm_44_inv.p3d";		
	};
	class ACE_Explosives_Place_LIB_US_M1A1_ATMINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_DN_US_M1A1_ATMINE";
		model = "\WW2\Assets_m\Weapons\Mines_m\WW2_M1a1_at.p3d";
	};
	class ACE_Explosives_Place_LIB_US_TNT: ACE_Explosives_Place	{
		displayName = "$STR_LIB_DN_US_TNT_4POUND";
		model = "\WW2\Assets_m\Weapons\Mines_m\WW2_Tnt_4pound.p3d";		
	};	
	class ACE_Explosives_Place_LIB_MARKER_MINE: ACE_Explosives_Place	{
		displayName = "$STR_LIB_MARKER";
		model = "\WW2\Assets_m\Weapons\Mines_m\WW2_Marker_mine.p3d";
	};	
	class ACE_Explosives_Place_LIB_Ladung_Small: ACE_Explosives_Place	{
		displayName = "$STR_LIB_Ladung_Small";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Ladung_inv.p3d";	
	};
	class ACE_Explosives_Place_LIB_Ladung_Big: ACE_Explosives_Place	{
		displayName = "$STR_LIB_Ladung_Big";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\WW2_Ladung_big_provod_inv.p3d";	
	};
};
