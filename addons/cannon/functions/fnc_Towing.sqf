params ["_vehicle"];


_gun = nearestObject [_vehicle, "LIB_StaticCannon_base"];

_vehicle setVariable ["Attached_gun",_gun,true];
_gun setVariable ["Attached_car",_vehicle,true];

[_vehicle] call ACE_ifa3cannon_fnc_movingExec;

