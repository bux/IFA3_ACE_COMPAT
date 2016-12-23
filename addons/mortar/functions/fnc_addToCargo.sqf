params ["_veh", "_amount"];

_spaceLeft = [_veh] call ace_cargo_fnc_getCargoSpaceLeft;
_spaceLeft = _spaceLeft - 1;
if ((_amount * 0.5) > _spaceLeft) then
{
	_amount = floor (_spaceLeft / 0.5);
};
if (_amount == 0) exitWith {};

["lex_82mm_ammobox", _veh, _amount] call ace_cargo_fnc_addCargoItem;