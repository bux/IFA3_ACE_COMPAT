#include "script_component.hpp"
if (isClass(configfile >> "CfgPatches" >> "ace_cookoff")) then {
  
    if (isServer) then {
      ["ace_cookoff_addTurretToEditable", {
          params ["_vehicle","_turret"];
          if (isClass (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AnimationSources" >> "ACE_Turret")) then {
              private _textures = getObjectTextures _vehicle;
              {_turret setObjectTextureGlobal [_forEachIndex, _x]} foreach _textures;
              _vehicle animateSource ["ACE_Turret",1];
          };
      }] call CBA_fnc_addEventHandler;
  };

  // blow off turret effect
  ["LIB_SdKfz234_2", "killed", {
      if ((_this select 0) getVariable ["ace_cookoff_enable",ace_cookoff_enable]) then {
          if (random 1 < 0.15) then {
              (_this select 0) call ace_cookoff_fnc_blowOffTurret;
          };
      };
  }] call CBA_fnc_addClassEventHandler;
};
