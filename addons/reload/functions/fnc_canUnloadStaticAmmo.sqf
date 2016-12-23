#include "script_component.hpp"

params ["_cannon","_unit"];
private ["_canUnloadMagazine","_ammoCount"];

if !((alive _cannon) && _cannon getVariable [QGVAR(initialized),false]) exitWith {false};
_canUnloadMagazine = false;
_ammoCount = _cannon magazinesTurret [0];
if (count _ammoCount > 0) then {
    _canUnloadMagazine = true;
};
_canUnloadMagazine