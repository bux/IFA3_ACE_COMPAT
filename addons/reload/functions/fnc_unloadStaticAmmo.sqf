#include "script_component.hpp"
#define __TURRET [0]

params ["_static","_unit"];
private ["_currentMagazine","_currentMagazineClass","_ammoCount","_WeaponHolder"];


_currentMagazines = (magazinesAllTurrets _static);


for "_i" from 0 to ((count _currentMagazines) - 1) do {
	_curr_mag = _currentMagazines select _i;
	if ((_curr_mag select 0) != 'FakeWeapon')  exitWith {
	
        if (_unit canAdd (_curr_mag select 0)) then {
		
	        (unitBackpack _unit) addMagazineAmmoCargo [(_curr_mag select 0), 1, (_curr_mag select 2)];
			
        } else {
            _pos = _unit modelToWorldVisual [(0.5 + (random 1)),0.5,0]; // Front right of player
            _WeaponHolder = createVehicle ["GroundWeaponHolder",_pos,[],0,"NONE"];
            _WeaponHolder addMagazineAmmoCargo [(_curr_mag select 0), 1, (_curr_mag select 2)];
            _WeaponHolder setPosATL _pos;
        };
        [QGVAR(removeMagazine), [_static, (_curr_mag select 0),(_curr_mag select 1)]] call CBA_fnc_globalEvent;
	};
};
