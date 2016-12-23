#include "script_component.hpp"

params ["_vehicle","_weapon","_magazine","_turret"];

_return = 0;


_mainTurret = (_vehicle getvariable QGVAR(MainTurret));
if((_vehicle isKindOf 'Tank_F') and (_turret isEqualTo _mainTurret )) then {

    _turret_mags = (_vehicle getvariable QGVAR(MainTurretMags));
	
        for "_i" from 0 to ((count _turret_mags) - 1) do {
	        _curr_mag = _turret_mags select _i;
	        if ((_curr_mag select 0) == _magazine)  exitWith {
                _return = (_curr_mag select 1);
		    };
	    };
	
} else {

    _turret_mags = magazinesAllTurrets _vehicle;
    for "_i" from 0 to ((count _turret_mags) - 1) do {
	    _curr_mag = _turret_mags select _i;
	    if ((_curr_mag select 1) isEqualTo _turret) then {
	        if((_curr_mag select 0) == _magazine) exitWith {
		        _return = (_curr_mag select 2);
		    };
	    };
    };
};
_return	
    
    
