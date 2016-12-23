#include "script_component.hpp"
	if(local player) then
	{
		_key = _this select 1;
		_moveLeft = (actionKeys "turnLeft");
		_moveRight =(actionKeys "turnRight");
		_moveForward= (actionKeys "MoveForward");
		_moveBack =(actionKeys "MoveBack");

		_vehicle = (player getVariable ["LIB_FAKE_CAR",objNull]);
		_gun = vehicle player;

		if(!(player getVariable ["LIB_GUN_MOVE",false])) exitWith {};

		_phase = (_gun animationPhase "wheel_1_1");

		if(isNull _vehicle) exitWith {};

		_speedDir = ((0.3 * (count crew _gun)) / 2);
		_speedMove = ((0.8 * (count crew _gun)) / 2);
		_g = -0.1;
		
		_crew = _gun getVariable ["LIB_TOTAL_CREW",[]];
		{
			if(!(_x in _crew)) then
			{
				private ["_id"];
				_id = _x addEventHandler ["AnimDone",{ (_this select 0) setVariable ["LIB_ARTY_ENABLE_MOVE",true,true];}];
				_x setVariable ["LIB_ARTY_CREW_ID_EH",_id,true];
				_crew = _crew + [_x];
			};
		} forEach crew _gun;
		_gun setVariable ["LIB_TOTAL_CREW",_crew,true];
	    _arrayWheels = ["wheel_1_1","wheel_2_1"];	
	
	    if(typeOf _gun == "LIB_61k") then
	    {
		    _arrayWheels = ["wheel_1_1","wheel_2_1","wheel_1_2","wheel_2_2"];

	    };

		if(_key in _moveForward) then
		{
			_phase = _phase + abs ((_speedMove / 100));
			
			if(player getVariable ["LIB_GUN_MOVE",false]) then
			{
				{[QGVAR(animate), [_gun,_x,_phase]] call CBA_fnc_globalEvent} forEach _arrayWheels;	
			};

			_vclHeight = (getPosASL _vehicle) select 2;
			_refHeight = (getPosASL player) select 2;
			_refDist   =  player distance _vehicle;
			_heightDiff = _refHeight - _vclHeight;
			if (_heightDiff > 0.1) then 
			{
				_slope = atan(_heightDiff/_refDist);
				_speedMove = _speedMove * (90 - _slope)/90;
				_g = _g * (30 + _slope)/30 * (count (crew _gun));
			};
            _velocity = [_speedMove * sin (getDir _vehicle),_speedMove * cos (getDir _vehicle),_g];
			//_vehicle setVelocity _velocity;
			[QGVAR(setVelocity), [_vehicle,_velocity]] call CBA_fnc_globalEvent;
			{[_x,"WalkF",false] call FUNC(setAnim)} forEach crew _gun;		
		};

		if(_key in _moveBack) then
		{
			_phase = _phase - abs ((_speedMove / 100));
			
			if(player getVariable ["LIB_GUN_MOVE",false]) then
			{
				{[QGVAR(animate), [_gun,_x,_phase]] call CBA_fnc_globalEvent} forEach _arrayWheels;
			};
			_velocity = [(_speedMove * -1) * sin (getDir _vehicle),(_speedMove * -1) * cos (getDir _vehicle),_g];
			//_vehicle setVelocity _velocity;
			[QGVAR(setVelocity), [_vehicle,_velocity]] call CBA_fnc_globalEvent;
			{[_x,"WalkF",false] call FUNC(setAnim)} forEach crew _gun;			
		};

		if(_key in _moveLeft) then
		{
		    _dir = ((getDir _vehicle) - _speedDir);
			//_vehicle setDir _dir;
			[QGVAR(setDir), [_vehicle,_dir]] call CBA_fnc_globalEvent;
			{[_x,"WalkF",false] call FUNC(setAnim)} forEach crew _gun;	
		};

		if(_key in _moveRight) then
		{
		    _dir = ((getDir _vehicle) + _speedDir);
			//_vehicle setDir _dir;
			[QGVAR(setDir), [_vehicle,_dir]] call CBA_fnc_globalEvent;
			{[_x,"WalkF",false] call FUNC(setAnim)} forEach crew _gun;	
		};
	};