private ["_cfgEntry"];
_cfgEntry = getText (configFile >> "CfgMagazines" >> _this >> "displayNameShort");
if (_cfgEntry == "") then {
	_cfgEntry = getText (configFile >> "CfgMagazines" >> _this >> "displayName");
	_cfgEntry
    } else {
	_cfgEntry
    }