#include "script_component.hpp"

if (isServer) then {
    ["ace_cookoff_addTurretToEditable", {
        params ["_vehicle"];
        if (isClass (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AnimationSources" >> "ACE_Turret")) then {
            _vehicle animateSource ["ACE_Turret",1];
        };
    }] call CBA_fnc_addEventHandler;
};
