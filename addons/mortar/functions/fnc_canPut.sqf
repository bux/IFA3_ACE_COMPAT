params ["_unit","_box"];
private ["_canPut","_magArray","_mag"];
_canPut = false;
_magArray = magazines (_unit);
_mag = getText (configFile >> "cfgVehicles" >> (typeOf _box) >> "mortarMagazines");

if (_mag in _magArray) then
{
    _canPut = true;
};
_canPut