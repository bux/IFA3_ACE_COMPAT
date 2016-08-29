class ACE_Triggers
{
	class LIB_LadungPM
	{
		isAttachable = 1;
		displayName = "Detonator";
		picture = "\WW2\Assets_t\Weapons\Misc_t\Equipment\Mines\gear_Ladung_charger_ca.paa";
		requires[] = {"ACE_LIB_LadungPM"};
		onPlace = "(_this select 1) call ace_explosives_fnc_minePos;_this call ace_explosives_fnc_AddClacker;false";
	};
	class FireCord
	{
		isAttachable = 1;
		displayName = "Black powder fuse";
		picture = "\WW2\Assets_t\Weapons\Misc_t\Equipment\Mines\gear_Wire_ca.paa";
		onPlace = "(_this select 1) call ace_explosives_fnc_minePos;[_this select 1,(_this select 3) select 0] call ace_explosives_fnc_cordFired;false";
		onSetup = "_this call ace_explosives_fnc_openTimerSetUI;true";
		requires[] = {"ACE_LIB_FireCord"};
	};
};