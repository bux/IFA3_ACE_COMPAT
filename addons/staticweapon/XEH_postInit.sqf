#include "script_component.hpp"

[QGVAR(setPosATL), {
    params ["_vehicle", "_pos"];
    _vehicle setPosATL _pos;
}] call CBA_fnc_addEventHandler;

[QGVAR(setPosASL), {
    params ["_vehicle", "_pos"];
    _vehicle setPosASL _pos;
}] call CBA_fnc_addEventHandler;


[QGVAR(allowdammage), {
    params ["_vehicle", "_var"];
    _vehicle allowdammage _var;
}] call CBA_fnc_addEventHandler;



