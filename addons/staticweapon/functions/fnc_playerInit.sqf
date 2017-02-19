#include "script_component.hpp"

if!(isServer) then {

waitUntil { player == player };
waitUntil { local player };

fnc_checkDammageStatic = 
{
    params ["_unit","_selection","_damage","_killer","_ammo","_hitpartindex","_killer_veh"];
    //hint str [_ammo,_damage];
    if((_unit getVariable "no_damage_static") and !(isClass (configFile >>"CfgAmmo">>_ammo))) exitWith {false};
    if!(_unit getVariable "no_damage_static") exitWith {_damage};
    if(isClass (configFile >>"CfgAmmo">>_ammo)) then {
        _unit allowDammage true;
    };
    _damage
};

_this spawn {
    params ["_unit"];

    if(ACE_player == _unit) then {
	    _unit setVariable ['no_damage_static',false,false ];
	    _id_EH_HD = _unit addEventHandler [ 'HandleDamage',{ _this call fnc_checkDammageStatic}];
	    _unit execFSM "\z\ifa3_comp_ace\addons\staticweapon\functions\playerSensor.fsm";
		
		_id_EH_WA = _unit addEventHandler [ 'WeaponAssembled',{ _this call ace_ifa3staticweapon_fnc_weaponAssembled}];
		_id_EH_WD = _unit addEventHandler [ 'WeaponDisassembled',{ _this call ace_ifa3staticweapon_fnc_weaponDisassembled}];
	};
};
};
if(true) exitWith {};