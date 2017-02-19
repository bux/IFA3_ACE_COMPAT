#include "script_component.hpp"

_this spawn {

params ["_unit","_static"];
if(local _unit) then {
_pos = _unit modelToWorld [0,1.5,0];

 if( surfaceIsWater  _pos) then {
    _pos set [ 2, (getPosASL _unit select 2) + 0.1];
    //_static setPosASL _pos;
    [QGVAR(setPosASL), [_static,_pos]] call CBA_fnc_globalEvent;	
} else {
    //_static setPosATL _pos;
	[QGVAR(setPosATL), [_static,_pos]] call CBA_fnc_globalEvent;
};
    sleep 0.1;
    [_unit, _static] call ace_dragging_fnc_startCarry;
};

};