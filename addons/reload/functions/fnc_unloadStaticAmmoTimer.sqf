#include "script_component.hpp"

params ["_static","_unit","_timeToUnload"];


if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call EFUNC(common,doAnimation);
};

[_timeToUnload, [_static,_unit], {(_this select 0) call FUNC(unloadStaticAmmo) }, {}, localize LSTRING(unloadingCannon)] call FUNC(progressBar);

