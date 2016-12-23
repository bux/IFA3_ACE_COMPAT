#define X_MAXMAGAZINES 1
#define X_RELOADTIME 1
#include "script_component.hpp"

params ["_vehicle", "_unit", "_parameters"];
private ["_cannon","_turrets","_actions"];
if (!alive _vehicle) exitWith {};
if!(_vehicle getVariable [QGVAR(initialized),false]) exitWith {};

_actions = [];

_turrets = allTurrets [_vehicle, true];
{
	private ["_weapons", "_weapon", "_maxMagazines", "_magazines", "_magazine"];
		
		_weapons = _vehicle weaponsTurret _x;
		for "_i" from 0 to ((count _weapons) - 1) do {
			_weapon = _weapons select _i;
            _maxMagazines = X_MAXMAGAZINES ;
			_magazines = [];
			{ _magazines pushBack (toLower _x)} forEach (getArray (configFile >> "CfgWeapons" >> _weapon >> "Magazines"));
			if (_weapon != "" && {[_vehicle, _x, _magazines, _maxMagazines] call FUNC(isTurretEmpty)}) then {
						
			    if([ _weapon ,_vehicle] call FUNC(isGunTurret)) then {                      

				    for "_j" from 0 to ((count _magazines) -1) do {
					    _magazine = _magazines select _j;
					    _mag_name = _magazine call FUNC(GetMagazineName);
					    _mag_icon = _magazine call FUNC(GetMagazineIcon);
                        _reloadTime = X_RELOADTIME;

					    _loadMethod = [] call FUNC(LoadMethod);
					    if (_loadMethod > 0) then {
						    _actions pushBack
						    [
							    [
								    _magazine, // ACTION
								    _mag_name, // DISPLAY STRING
								    _mag_icon, // ICON
								    {
									    _this = _this select 2;
									    //[] call FUNC(StartAnim);
									    [
										    _this select 0,
										    _this,
										    { (_this select 0) call FUNC(startLoad) },
										    {},
										    localize LSTRING(loadingCannon)
									    ] call FUNC(progressbar);
									    //(_this select 0) spawn FUNC(EndAnim);
								    }, // STATEMENT
								    {true}, // CONDITION
								    {},
								    [_reloadTime, _magazine, _vehicle, _mag_name, _x, _loadMethod, _magazines, _maxMagazines] // ARGUMENTS
							    ] call ace_interact_menu_fnc_createAction,
							    [],
							    _magazine
						    ];
					    };
				    };
			    };
			};
		};
} forEach _turrets;
_actions