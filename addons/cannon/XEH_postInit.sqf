#include "script_component.hpp"

[QGVAR(call), {
    params ["_data", "_func"];
    _data call _func;
}] call CBA_fnc_addEventHandler;

[QGVAR(spawn), {
    params ["_data", "_func"];
    _data spawn _func;
}] call CBA_fnc_addEventHandler;

[QGVAR(attachTo), {
    params ["_gun","_vehicle", "_attachPos"];
    _gun attachTo [ _vehicle,_attachPos];
}] call CBA_fnc_addEventHandler;

[QGVAR(setDir), {
    params ["_vehicle", "_dir"];
    _vehicle setDir _dir;
}] call CBA_fnc_addEventHandler;

[QGVAR(setPosATL), {
    params ["_vehicle", "_pos"];
    _vehicle setPosATL _pos;
}] call CBA_fnc_addEventHandler;

[QGVAR(setPosASL), {
    params ["_vehicle", "_pos"];
    _vehicle setPosASL _pos;
}] call CBA_fnc_addEventHandler;

[QGVAR(switchMove), {
    params ["_unit", "_move"];
    _unit switchMove _move;
}] call CBA_fnc_addEventHandler;

[QGVAR(animate), {
    params ["_vehicle", "_anim","_phase"];
    _vehicle animate [_anim,_phase];
}] call CBA_fnc_addEventHandler;

[QGVAR(animateSource), {
    params ["_vehicle", "_anim"];
    _vehicle animateSource _anim;
}] call CBA_fnc_addEventHandler;

[QGVAR(setVectorUp), {
    params ["_vehicle", "_setVectorUp"];
    _vehicle setVectorUp _setVectorUp;
}] call CBA_fnc_addEventHandler;

[QGVAR(setVectorDir), {
    params ["_vehicle", "_setVectorDir"];
    _vehicle setVectorDir _setVectorDir;
}] call CBA_fnc_addEventHandler;

[QGVAR(setVectorDirandUp), {
    params ["_vehicle", "_setVectorDirandUp"];
    _vehicle setVectorDirandUp _setVectorDirandUp;
}] call CBA_fnc_addEventHandler;

[QGVAR(allowdammage), {
    params ["_vehicle", "_var"];
    _vehicle allowdammage _var;
}] call CBA_fnc_addEventHandler;

[QGVAR(setVelocity), {
    params ["_vehicle", "_velocity"];
    _vehicle setVelocity _velocity;
}] call CBA_fnc_addEventHandler;
