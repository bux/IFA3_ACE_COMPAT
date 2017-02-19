#include "script_component.hpp"

params ["_vehicle"];

_vehicle remoteExec ["ACE_ifa3cannon_fnc_movingCannon",2,false];