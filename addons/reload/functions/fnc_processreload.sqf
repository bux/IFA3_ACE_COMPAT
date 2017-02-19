#include "script_component.hpp"
params ["_vehicle", "_magazine", "_turret", "_magCount"];
private ["_turret_mags", "_curr_mag"];


_mainTurret = (_vehicle getvariable QGVAR(MainTurret));

if((_vehicle isKindOf 'Tank_F') and (_turret isEqualTo _mainTurret )) then {

    _turret_mags = (_vehicle getvariable QGVAR(MainTurretMags));
	    if(count _turret_mags > 0) then {
            for "_i" from 0 to ((count _turret_mags) - 1) do {
	            _curr_mag = _turret_mags select _i;
	            if (((_curr_mag select 0) == _magazine) && ((_curr_mag select 1) == 0)) then {
		            [QGVAR(removeMagazine), [_vehicle, (_curr_mag select 0),_turret]] call CBA_fnc_globalEvent;
                    _turret_mags deleteAt (_turret_mags find _curr_mag);
                    _vehicle setVariable [QGVAR(MainTurretMags),_turret_mags,true];				
	            };
            };
	    };
	    _turret_mags pushBack [_magazine,_magCount];
	    _vehicle setVariable [QGVAR(MainTurretMags),_turret_mags,true];
		
} else {	
	
    // REMOVE ALL EMPTY TURRET MAGAZINES
    _turret_mags = magazinesAllTurrets _vehicle;
    for "_i" from 0 to ((count _turret_mags) - 1) do {
	    _curr_mag = _turret_mags select _i;
	    if (((_curr_mag select 1) isEqualTo _turret) && ((_curr_mag select 2) == 0)) then {
		    [QGVAR(removeMagazine), [_vehicle, (_curr_mag select 0),_turret]] call CBA_fnc_globalEvent;
	    };
    };
};

[QGVAR(addMagazine), [_vehicle, _magazine,_turret]] call CBA_fnc_globalEvent;
[QGVAR(setAmmo), [_vehicle, _magazine,_magCount,_turret]] call CBA_fnc_globalEvent;
