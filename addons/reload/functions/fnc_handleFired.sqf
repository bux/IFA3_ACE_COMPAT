
#include "script_component.hpp"


PARAMS_7(_vehicle,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);

if !(_vehicle getVariable [QGVAR(initialized),false]) exitWith {};

_mainTurret = (_vehicle getvariable QGVAR(MainTurret));

_turret_mags = magazinesAllTurrets _vehicle;
for "_i" from 0 to ((count _turret_mags) - 1) do {
	_curr_mag = _turret_mags select _i;
	if ((_curr_mag select 0) isEqualTo _magazine)  then {
	    if((_vehicle isKindOf 'Tank_F') and ((_curr_mag select 1) isEqualTo _mainTurret)) then {		    
		    _mainTurret_mags = (magazinesAmmo _vehicle);
			_vehicle setVariable [QGVAR(MainTurretMags),_mainTurret_mags,true];
		};
		if((_curr_mag select 2) == 0) then {
		    [QGVAR(removeMagazine), [_vehicle, (_curr_mag select 0),(_curr_mag select 1)]] call CBA_fnc_globalEvent;
		};
	};
};






