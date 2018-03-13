class CfgPatches
{
	class LIB_ACE_Cargo
	{
		author="IFA3 Team, ACE3 Team & Garmr";
		name="IFA33 ACE Cargo Compatibility";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WW2_assets_c_vehicles_planes_c",
			"WW2_Assets_c_Vehicles_Planes_c_HORSA",
			"WW2_Assets_c_Vehicles_Planes_c_C47",
			"WW2_Assets_c_Vehicles_Planes_c_WACO",
			"WW2_Assets_c_Weapons_Ammoboxes_c",
			"ace_cargo",
			"ifa3_comp_ace_mortar",
			"ifa3_comp_ace_main"
		};
		ammo[]={};
		magazines[]={};
		weapons[]={};
		units[]={};
	};
};

class CfgVehicles
{
	//U.S Stuff

	//C47 Skytrain
	class LIB_US_Plane_base;
	class LIB_C47_Skytrain : LIB_US_Plane_base
	{
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	
	//Horsa
	class LIB_HORSA : LIB_US_Plane_base
	{
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	
	//Waco
	class LIB_CG4_WACO : LIB_US_Plane_base
	{
		ace_cargo_space=7;
		ace_cargo_hasCargo=1;
	};
	
	//60mm Mortar boxes
	class LIB_Box_82mm_Mo_HE;
	class LIB_Box_60mm_Mo_HE : LIB_Box_82mm_Mo_HE
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_60mm_Mo_Smoke : LIB_Box_60mm_Mo_HE
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	class LIB_Box_60mm_Mo_Illum : LIB_Box_60mm_Mo_HE
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size=0.5;
		ace_cargo_canLoad=1;
	};
	
	//Ammoboxes
	class LIB_ReammoBox_Base;
	class LIB_BasicAmmunitionBox_US : LIB_ReammoBox_Base
	{
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_BasicWeaponsBox_US : LIB_BasicAmmunitionBox_US
	{
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class LIB_Mine_AmmoBox_US : LIB_ReammoBox_Base
	{
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
};