class CfgVehicles
{
	class Car;
	class LIB_Logic;
	class LIB_ArtyFunc: LIB_Logic
	{
		displayName = "$STR_LIB_Modul_arty";
		vehicleClass = "Modules";

		class Eventhandlers
		{
			init = "";
		};
	};
	class Car_F: Car {};

	class Wheeled_APC_F: Car_F {};

	class ifa3_Ba10: Wheeled_APC_F
	{
		class UserActions
		{
			class Towing
			{
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "(alive (nearestobject [this,'LIB_StaticCannon_base'])) && !(isnil 'bis_fnc_init') && !((nearestobject [this,'LIB_StaticCannon_base']) getVariable ['LIB_ARTY_MOVING_TOWING',false]) && (((nearestobject [this,'LIB_StaticCannon_base']) modelToWorld [0,-3,1]) distance (this modelToworld [0,-3.5,0]) < 3) && (count crew (nearestobject [this,'LIB_StaticCannon_base']) == 0)";
				statement = "if (isNil 'LIB_Wheeled_Towing') then {LIB_Wheeled_Towing = compile preprocessFileLineNumbers '\WW2\Core_f\System_Artillery_f\Towing\Towing.sqf';}; [this] spawn LIB_Wheeled_Towing;";
			};

			class Drop
			{
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "(alive (nearestobject [this,'LIB_StaticCannon_base'])) && ((nearestobject [this,'LIB_StaticCannon_base']) getVariable ['LIB_ARTY_MOVING_TOWING',false]) && ((nearestobject [this,'LIB_StaticCannon_base']) getVariable ['LIB_ARTY_MOVING_TOWING_ENABLE',true])";
				statement = "if !((nearestobject [this,'LIB_StaticCannon_base']) getVariable ['LIB_ARTY_LOCK_STATUS',false]) then {(nearestobject [this,'LIB_StaticCannon_base']) lock false}; (nearestobject [this,'LIB_StaticCannon_base']) setVariable ['LIB_ARTY_MOVING_TOWING',false,true];";
			};
		};
	};
};
