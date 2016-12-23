#include "script_component.hpp"

params ["_reloadTime","_vehicle","_magazine","_turret","_count"];


_mainTurret = (_vehicle getvariable QGVAR(MainTurret));

if((_vehicle isKindOf 'Tank_F') and (_turret isEqualTo _mainTurret )) then {
    _turret_mags = (_vehicle getvariable QGVAR(MainTurretMags));
	
	if(count _turret_mags > 0) then {
        for "_i" from 0 to ((count _turret_mags) - 1) do {
	        _curr_mag = _turret_mags select _i;
	        if ( (_curr_mag select 0) == _magazine) then {
                _turret_mags deleteAt (_turret_mags find _curr_mag);
                _vehicle setVariable [QGVAR(MainTurretMags),_turret_mags,true];				
	        };
        };
	};
};	

[QGVAR(removeMagazine), [_vehicle, _magazine,_turret]] call CBA_fnc_globalEvent;

_vehicle addMagazineAmmoCargo [_magazine, 1, _count];

