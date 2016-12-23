#include "script_component.hpp"

[QGVAR(addMagazine), {
    params ["_vehicle", "_magazine","_turret"];
    _vehicle addMagazineTurret [ _magazine,_turret];
}] call CBA_fnc_addEventHandler;

[QGVAR(removeMagazine), {
    params ["_vehicle", "_magazine","_turret"];
    _vehicle removeMagazineTurret [_magazine,_turret];
}] call CBA_fnc_addEventHandler;

[QGVAR(setAmmo), {
    params ["_vehicle", "_magazine","_ammoCount","_turret"];
    _vehicle setMagazineTurretAmmo [_magazine, _ammoCount, _turret];
}] call CBA_fnc_addEventHandler;

[QGVAR(addMagazineAmmoCargo), {
    params ["_vehicle", "_magazine","_value","_ammoCount"];
    _vehicle addMagazineAmmoCargo [_magazine, _value, _ammoCount];
}] call CBA_fnc_addEventHandler;

[QGVAR(addWeapon), {
    params ["_vehicle", "_weapon"];
    _vehicle addWeapon _weapon;
}] call CBA_fnc_addEventHandler;

[QGVAR(removeWeapon), {
    params ["_vehicle", "_weapon"];
    _vehicle removeWeapon _weapon;
}] call CBA_fnc_addEventHandler;

["ace_initVehicle", {_this call FUNC(vehicleInit)}] call CBA_fnc_addEventHandler;

if (!hasInterface) exitWith {};

["vehicle", FUNC(handlePlayerVehicleChanged)] call CBA_fnc_addPlayerEventHandler;

