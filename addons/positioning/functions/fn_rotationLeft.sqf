#include "\z\ace\addons\common\script_component.hpp"
#define __DIR 30

params ["_target"];

//_target setDir ((getDir _target) - __DIR);
//["setDir", _target, [_target, ((getdir _target) - __DIR)]] call ace_common_fnc_targetEvent;
[QEGVAR(common,setDir), [_target, ((getdir _target) - __DIR)], _target] call CBA_fnc_targetEvent;
