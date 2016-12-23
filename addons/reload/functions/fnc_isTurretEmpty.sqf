    #include "script_component.hpp"
	
	params ["_vehicle", "_turret", "_magazines", "_maxMagazines"];
	private ["_return", "_mags", "_mag"];

    _return = true;
	_mags = _vehicle magazinesTurret _turret;
	if((count _mags) > 0) then 
	{
	    {
	        if( (toLower _x) in _magazines) exitWith {_return = false };
	    } forEach _mags;
	};
_return