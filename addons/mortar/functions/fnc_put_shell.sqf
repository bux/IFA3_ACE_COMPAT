
params ["_unit","_box","_round"];
private ["_magArray","_mag","_roundAnim","_roundVar"];

_magArray = magazines _unit;
_mag = getText (configFile >> "cfgVehicles" >> (typeOf _box) >> "mortarMagazines");

if (_mag in _magArray) then
{
	_unit removeItem _mag;
	_roundAnim = format [ "round_%1_hide", _round];
	_roundVar = format [ "round_%1", _round];
	_box animate [_roundAnim, 0];
	_box setVariable [_roundVar, true, true];
} else
{
    private ["_nearby","_holder","_old_mags","_roundAnim","_roundVar"];
	_nearby = nearestObjects [_unit, ['GroundWeaponHolder'], 3];
	_holder = objNull;
	{
		if (_mag in (magazineCargo _x)) exitWith {_holder = _x};
	} forEach _nearby;
	if (!isNull _holder) then
	{
		_old_mags = magazinesAmmoCargo _holder;
		_i = _old_mags find [ _mag, 1];
		_old_mags set [_i, 'usedRound'];
		_old_mags = _old_mags - ['usedRound'];
		
		if (count (weaponCargo _holder) == 0) then { _holder addWeaponCargoGlobal ['FakeWeapon',1];};
		clearMagazineCargoGlobal (_holder);
		{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _old_mags;
		if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};
		_roundAnim = format [ "round_%1_hide", _round];
		_roundVar = format [ "round_%1", _round];
		(_this select 1) animate [_roundAnim, 0];
		(_this select 1) setVariable [_roundVar, true, true];
	} else {hint "Нет требуемых боеприпасов!";};
};
if(true) exitWith {};