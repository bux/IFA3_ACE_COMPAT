#include "script_component.hpp"

params ["_cannon","_role","_unit","_turret"];
if(local _unit) then
{
    {
        _cannon removeAction _x;
    } forEach (_cannon getVariable ['arty_push_actions',[]]);

    _cannon setVariable ['arty_push_actions',[]];
};