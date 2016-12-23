#include "config.sqh"

params ["_vehicle"];
private ["_type","_roleass","_role","_turret","_check"];
_check = false;
_type = (typeOf _vehicle);
_roleass = (assignedVehicleRole ACE_Player);
_role = (_roleass select 0);
_turret = (_roleass select 1);
    {
        if((_x select 0) == _type) exitWith
	    {
	        if(str(_x select 1) == str _turret) then 
		    {
		        _check = true;
		    };
	    };
    } foreach __LOADERPOS;
_check 