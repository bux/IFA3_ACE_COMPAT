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

};

["ace_throwableThrown", {
  params ["_unit", "_activeThrowable"];
  if (isClass (configFile >> "CfgAmmo" >> (typeOf _activeThrowable) >> "Eventhandlers" >> "WW2_GAS")) then {
    private _script = getText (configFile >> "CfgAmmo" >> (typeOf _activeThrowable) >> "Eventhandlers" >> "WW2_GAS" >> "Fired");
    [_unit,"Throw","","", "", "", _activeThrowable] call compile _script;
  };

}] call CBA_fnc_addEventHandler;
