#include "script_component.hpp"

	params ["_unit","_type","_now"];
	private ["_actions","_move"];

	if(((_unit getVariable ["LIB_ARTY_ENABLE_MOVE", true]) || _now) && (player getVariable ["LIB_GUN_MOVE",false])) then
	{
		_actions = getText (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState _unit) >>"actions");
		_move = getText (configFile >> "CfgMovesBasic" >> "Actions" >> _actions >> _type);

		[QGVAR(switchMove), [_unit,_move]] call CBA_fnc_globalEvent;
		_unit setVariable ["LIB_ARTY_ENABLE_MOVE",false,true];
	};
	
	true 