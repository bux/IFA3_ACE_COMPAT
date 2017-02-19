#include "script_component.hpp"

params ["_static","_role","_unit","_turret"];
private ["_pos"];

if(local _unit) then {


_unit allowDammage false;
_unit attachTo [_static,[0,-1.6,0.5]];
waitUntil { (count attachedObjects _static > 0) };
//hint str (attachedObjects _static);
//_pos = getPosASL _unit;
detach _unit;
//[QGVAR(setPosASL), [_unit,_pos]] call CBA_fnc_globalEvent;
_unit spawn { sleep 2 ; _this allowDammage true;};
};