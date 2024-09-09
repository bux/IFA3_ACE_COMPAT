#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
		{
			"ace_cargo",
			"WW2_assets_c_vehicles_planes_c",
			"WW2_Assets_c_Vehicles_Planes_c_HORSA",
			"WW2_Assets_c_Vehicles_Planes_c_C47",
			"WW2_Assets_c_Vehicles_Planes_c_WACO",
			"WW2_Assets_c_Weapons_Ammoboxes_c",
			"ifa3_comp_ace_mortar",
			"ifa3_comp_ace_main"
		};
        author = CSTRING(Team);
        authors[] = { "Garmr" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	// Planes
	class LIB_Plane_base;
	class LIB_US_Plane_base: LIB_Plane_base {};
	class LIB_GER_Plane_base: LIB_Plane_base {};
	class LIB_SU_Plane_base: LIB_Plane_base {};
	class LIB_P47: LIB_US_Plane_base {
    	EGVAR(refuel,fuelCapacity) = 1155;
	};
	class LIB_P39: LIB_US_Plane_base {
		EGVAR(refuel,fuelCapacity) = 454;
	};
	class LIB_Pe2: LIB_SU_Plane_base {
		EGVAR(refuel,fuelCapacity) = 1086;
	};
	class LIB_C47_Skytrain : LIB_US_Plane_base {
		EGVAR(refuel,fuelCapacity) = 3043;
		GVAR(loadmasterTurrets)[] = {{17}};
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	class LIB_HORSA : LIB_US_Plane_base {
		EGVAR(refuel,fuelCapacity) = 0;
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	class LIB_CG4_WACO : LIB_US_Plane_base {
		EGVAR(refuel,fuelCapacity) = 0;
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	class LIB_Ju87 : LIB_GER_Plane_base {
		EGVAR(refuel,fuelCapacity) = 1155;
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	class LIB_FW190F8: LIB_GER_Plane_base {
    	EGVAR(refuel,fuelCapacity) = 639;
	};
	
	//Ammoboxes
	class LIB_ReammoBox_Base;
	class LIB_BasicAmmunitionBox_US : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_BasicWeaponsBox_US : LIB_BasicAmmunitionBox_US {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_Mine_AmmoBox_US : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_BasicAmmunitionBox_GER : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_BasicWeaponsBox_GER : LIB_BasicAmmunitionBox_GER {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_Mine_AmmoBox_GER : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_AmmoCrate_Mortar_GER : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_4Rnd_RPzB : LIB_ReammoBox_Base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_WeaponsBox_Big_GER : LIB_BasicWeaponsBox_GER {
		ace_cargo_size=2;
		ace_cargo_canLoad=1;
	};
	
	//Mortar Boxes
	class LIB_AmmoOrdnance_base;
	class LIB_Box_60mm_Mo_base: LIB_AmmoOrdnance_base {};
	class LIB_Box_82mm_Mo_base: LIB_AmmoOrdnance_base {};
	class LIB_Box_60mm_Mo_HE : LIB_Box_60mm_Mo_base {
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_60mm_Mo_Smoke : LIB_Box_60mm_Mo_base {
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_60mm_Mo_Illum : LIB_Box_60mm_Mo_base {
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_81mm_Mo_HE : LIB_Box_82mm_Mo_base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_81mm_Mo_Smoke : LIB_Box_82mm_Mo_base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_81mm_Mo_Illum : LIB_Box_82mm_Mo_base {
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
};