#include "script_component.hpp"
#define X_DISTANCE 4.1

//hint str _this;

params ["_reloadTime", "_magazine", "_vehicle", "_mag_name", "_turret", "_loadMethod", "_magazines2", "_maxMagazines"];

if (isNull _vehicle) exitWith {
	hint "Cant find vehicle!";
};
if !([_vehicle, _turret, _magazines2, _maxMagazines] call FUNC(isTurretEmpty)) exitWith {
//	hint "FULL";
};
switch (_loadMethod) do {
	case 1: { // PLAYER'S MAGAZINE
		if ((ACE_Player distance _vehicle) < X_DISTANCE) then {
			_magazines = magazinesAmmo ACE_Player;
			for "_i" from 0 to ((count _magazines) - 1) do {
				_mag = _magazines select _i;
				_magClass = _mag select 0;
				_magCount = _mag select 1;
				if (_magClass == _magazine && _magCount > 0) exitWith {
					ACE_Player removeMagazine _magazine;
					
					//[[_vehicle, _magazine, _turret, _magCount], QUOTE(FNC(ProcessReload))] call BIS_fnc_MP;
					[_vehicle, _magazine, _turret, _magCount] call FUNC(processReload);
				};
			};
		};
	};
	case 2: { // MAGAZINE AROUND
		if (ACE_Player == (vehicle ACE_Player)) then {
			_mag = _magazine call FUNC(findMagazineAround); // HOLDER, COUNT, MAGARRAY, INDEX
			if (count _mag > 0) then {
				_mag_holder = _mag select 0;
				_mag_count = _mag select 1;
				_mag_array = _mag select 2;
				_mag_index = _mag select 3;
				
				// REMOVE WEAPON HOLDER MAGAZINE
				_mag_array deleteAt _mag_index;
				
				if (count _mag_array > 0) then {
					if (
						count (backpackCargo _mag_holder) == 0 &&
						count (weaponCargo _mag_holder) == 0 &&
						count (itemCargo _mag_holder) == 0
					) then {
						_mag_holder addWeaponCargoGlobal ['FakeWeapon',1];
					};
				};
				
				clearMagazineCargoGlobal _mag_holder;
				for "_i" from 0 to ((count _mag_array) - 1) do {
					_element = _mag_array select _i;
					_mag_holder addMagazineAmmoCargo [_element select 0, 1, _element select 1];
				};
				
				if ("FakeWeapon" in (weaponCargo _mag_holder)) then {
					clearWeaponCargoGlobal _mag_holder;
				};
				
					//[[_vehicle, _magazine, _turret, _mag_count], QUOTE(FNC(ProcessReload))] call BIS_fnc_MP;
					[_vehicle, _magazine, _turret, _mag_count] call FUNC(processReload);
			};
		};
	};
	case 3: { // VEHICLE MAGAZINE
		if (ACE_Player != (vehicle ACE_Player)) then {
			_veh_magz = magazinesAmmoCargo _vehicle;
			for "_i" from 0 to ((count _veh_magz) - 1) do {
				_veh_mag = _veh_magz select _i;
				_veh_magClass = _veh_mag select 0;
				_veh_magCount = _veh_mag select 1;
				if ((_magazine == _veh_magClass) && (_veh_magCount > 0)) exitWith {
					// REMOVE VEHICLE CARGO MAGAZINE
					_veh_magz deleteAt _i;
					clearMagazineCargoGlobal _vehicle;
					for "_i" from 0 to ((count _veh_magz) - 1) do {
						_element = _veh_magz select _i;
						_vehicle addMagazineAmmoCargo [_element select 0, 1, _element select 1];
						//[QGVAR(addMagazineAmmoCargo), [_vehicle, (_element select 0),1,(_element select 1)]] call EFUNC(common,globalEvent);
					};
					
					//[[_vehicle, _magazine, _turret, _veh_magCount], QUOTE(FNC(ProcessReload))] call BIS_fnc_MP;
					[_vehicle, _magazine, _turret, _veh_magCount] call FUNC(processReload);
				};
			};
		};
	};
};