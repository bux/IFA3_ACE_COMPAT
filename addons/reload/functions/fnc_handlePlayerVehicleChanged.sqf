
#include "script_component.hpp"

params ["_player", "_newVehicle"];


if (isNull _newVehicle) exitWith {};
if !(_newVehicle isKindOf "LandVehicle") exitWith {};
if (_newVehicle isKindOf "lib_us6_bm13") exitWith {};
if (!(_newVehicle getVariable [QGVAR(initialized),false]) && !(_newVehicle getVariable [QGVAR(exclude),false])) then {
    [{
        params ["_vehicle"];
        if (!(_vehicle getVariable [QGVAR(initialized),false]) && !(_vehicle getVariable [QGVAR(exclude),false])) then {
            [{
                ["ace_initVehicle", [_this], [_this]] call CBA_fnc_globalEvent;
            },  _vehicle , 0.05] call CBA_fnc_waitAndExecute;
        };
    }, _newVehicle ] call EFUNC(common,runAfterSettingsInit);
};

