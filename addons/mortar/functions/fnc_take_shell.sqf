if!(local player) exitWith {};
params ["_unit","_box"];
private ["_mag"];

_mag = getText (configFile >> "cfgVehicles" >> typeOf _box >> "mortarMagazines");

if (_unit canAddItemToVest _mag) then
{
    (vestContainer _unit) addMagazineCargoGlobal [_mag,1];
} 
else
{
    (unitBackpack _unit) addMagazineCargoGlobal [_mag,1];
};

if(true) exitWith {};

