params ["_unit","_box"];
private ["_canTake","_magArray","_mag"];
_canTake = false;
_magArray = magazines (_unit);
_mag = getText (configFile >> "cfgVehicles" >> (typeOf _box) >> "mortarMagazines");

if ((_unit canAddItemToVest _mag) || (_unit canAddItemToBackpack _mag)) then
{
    _canTake = true;
};
_canTake