#include "script_component.hpp"

	if(local player) then
	{
		_key = _this select 1;
		_moveLeft = (actionKeys "turnLeft");
		_moveRight =(actionKeys "turnRight");
		_moveForward= (actionKeys "MoveForward");
		_moveBack =(actionKeys "MoveBack");

		_vehicle = (player getVariable ["LIB_FAKE_CAR",objNull]);
		if(isNull _vehicle) exitWith {};

		_g = -0.1;

		if(_key in _moveForward) then
		{
		    _velocity = [0,0,_g];
			//_vehicle setVelocity _velocity;
            [QGVAR(setVelocity), [_vehicle,_velocity]] call CBA_fnc_globalEvent;			
		};

		if(_key in _moveBack) then
		{
		    _velocity = [0,0,_g];
			//_vehicle setVelocity _velocity;
            [QGVAR(setVelocity), [_vehicle,_velocity]] call CBA_fnc_globalEvent;
		};
	};