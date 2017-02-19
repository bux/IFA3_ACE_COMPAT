#include "script_component.hpp"

params ["_vehicle"];

if (_vehicle getVariable [QGVAR(initialized),false] || _vehicle getVariable [QGVAR(exclude),false]) exitWith {TRACE_1("Exit",_vehicle)};

    private ["_turretPaths","_newmags"];
   _turretPaths = allTurrets [_vehicle, true];
   _newmags = [];
   {
        private ["_turretPath","_weapons"];
        _turretPath = _x;
		_weapons = _vehicle weaponsTurret _turretPath;
		_newmags pushBack [_weapons];
		{
		    private ["_weapon","_mags"];
		    _weapon = _x;
			_mags = _vehicle magazinesTurret _turretPath;
            			
			{
				[QGVAR(removeMagazine), [_vehicle, _x, _turretPath]] call CBA_fnc_globalEvent;
			} foreach _mags;		    
		}  foreach _weapons;
   } foreach _turretPaths;

   _vehicle setVariable [QGVAR(initialized),true,true];
   _vehicle setVariable [QGVAR(MainWeapon),((_vehicle weaponsTurret [0]) select 0),true];
   _vehicle setVariable [QGVAR(MainTurret),[0],true];
   _vehicle setVariable [QGVAR(MainTurretMags),(_vehicle magazinesTurret [0]),true];

