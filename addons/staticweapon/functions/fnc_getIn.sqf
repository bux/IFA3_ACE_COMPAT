#include "script_component.hpp"

params ["_static","_role","_unit","_turret"];
if(local _unit) then {
_unit allowDammage false;
[QGVAR(allowDammage), [_unit,false]] call CBA_fnc_globalEvent;

_unit spawn {sleep 2;[QGVAR(allowDammage), [_this,true]] call CBA_fnc_globalEvent;};
};

