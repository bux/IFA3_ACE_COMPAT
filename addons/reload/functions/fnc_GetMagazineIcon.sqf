private ["_icon"];
_icon = getText (configFile >> "CfgMagazines" >> _this >> "picture");
if (_icon == "") then {
	_icon = "a3\ui_f\data\IGUI\RscTitles\MPProgress\respawn_ca.paa";
	_icon
} else {
	_icon
}