#define X_SEARCHRADIUS 5

private ["_toFind", "_return", "_holders", "_i"];
_toFind = _this;
_return = [];
_holders = nearestObjects [ACE_Player, ["GroundWeaponHolder"], X_SEARCHRADIUS];
for "_i" from 0 to ((count _holders) - 1) do {
	private ["_holder", "_magazines", "_i2"];
	_holder = _holders select _i;
	_magazines = magazinesAmmoCargo _holder;
	for "_i2" from 0 to ((count _magazines) - 1) do {
		private ["_mag", "_magClass", "_magCount"];
		_mag = _magazines select _i2;
		_magClass = _mag select 0;
		_magCount = _mag select 1;
		if (_magClass == _toFind && _magCount > 0) then {
			_return = [_holder, _magCount, _magazines, _i2];
		};
	};
};
_return