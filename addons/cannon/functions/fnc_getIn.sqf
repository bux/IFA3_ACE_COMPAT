#include "script_component.hpp"

params ["_cannon","_role","_unit","_turret"];
if(local _unit) then
{
    _action_push = _cannon addAction [localize "STR_ACE_ifa3cannon_push",{_this spawn FUNC(pushCannon)}, [], 12, false, true, "", "(_this in crew _target) && !(_target getVariable ['LIB_ARTY_PUSH',false]) && (isPlayer _this)"];
    _action_cancel = _cannon addAction [localize "STR_ACE_ifa3cannon_cancel",{(_this select 0) setVariable ["LIB_ARTY_PUSH",false,true]}, [], 12, false, true, "", "(_this in crew _target) && (_this getVariable ['LIB_ARTY_CANCEL',false]) && (isPlayer _this)"];

    _cannon setVariable ["arty_push_actions",[_action_push,_action_cancel],false];
};