    #include "script_component.hpp"
	
	params ["_vehicle", "_turret", "_magazines", "_maxMagazines"];
	private ["_return", "_magazinesAllTurrets", "_element"];

    _return = true;
    _magazinesAllTurrets = magazinesAllTurrets _vehicle;
    for "_i" from 0 to ((count _magazinesAllTurrets) - 1) do 
	{
	    _element = _magazinesAllTurrets select _i;
	    if ((_element select 1) isEqualTo _turret && ((toLower (_element select 0)) in _magazines)) then 
		{
		    if ((_element select 2) >= _maxMagazines) exitWith 
			{
			    _return = false;
		    };
	    };
    };
_return