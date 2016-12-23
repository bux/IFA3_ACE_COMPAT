 if!(local player) exitWith {};
 #include "script_component.hpp"
 
 //=======================================================
 _fnc_checkCaller = 
 {
    params ["_unit","_gun"];
	
	if!(_gun getVariable ["LIB_ARTY_PUSH",false]) exitWith { true };
	if!(_unit in crew _gun) exitWith { true };
	if!(alive _unit) exitWith { true};
	
    false
 };
//=======================================================

 params ["_obj","_caller"];

	_caller setVariable ["LIB_ARTY_CANCEL",true,false];
	_obj setVariable ["LIB_ARTY_PUSH",true,true];

	_pos = getPosATL _obj;
	_car = createVehicle ["LIB_fake_car2", _pos, [], 0, "CAN_COLLIDE"];
	_car setDir (getDir _obj);
	_car allowDammage false;
	_car hideObject true;
	_car setCaptive true;
	
    if(surfaceIsWater _pos) then 
	{
        _pos = ATLToASL _pos;
        _car setPosASL _pos;	
    }
    else
    { 
        if(_pos select 2 < 0) then {_pos set [2,0]};	
        _car setPosATL _pos;
    };

	_attachPos = getArray (configFile >> "cfgVehicles" >> typeOf _obj >> "lib_attach_pos");
	_obj attachTO [_car,_attachPos];
	_caller setVariable ["LIB_FAKE_CAR",_car,false];
	_caller setVariable ["LIB_GUN_MOVE",true,true];

	_idKeyDown = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call ACE_ifa3cannon_fnc_keyDown"];
	_idKeyUp = (findDisplay 46) displayAddEventHandler ["KeyUp", "_this call ACE_ifa3cannon_fnc_keyUp"];
	
	
	waitUntil {([_caller,_obj] call _fnc_checkCaller)};
	
	//hint "EXIT";
	
	_caller setVariable ["LIB_ARTY_CANCEL",false,false];
	_obj setVariable ["LIB_ARTY_PUSH",false,true];
	
	(findDisplay 46) displayRemoveEventHandler ["KeyDown",_idKeyDown];
	(findDisplay 46) displayRemoveEventHandler ["KeyUp",_idKeyUp];

	_pos = getPosATL _obj;
	_dir = getDir _obj;
	
	//hint str _dir;
	sleep 0.1;
	
	detach _obj;
	
	[QGVAR(setDir), [_obj,_dir]] call CBA_fnc_globalEvent;
    if(surfaceIsWater _pos) then 
	{
        _pos = ATLToASL _pos;
        [QGVAR(setPosASL), [_obj,_pos]] call CBA_fnc_globalEvent;	
    }
    else
    { 
        if(_pos select 2 < 0) then {_pos set [2,0]};	
		[QGVAR(setPosATL), [_obj,_pos]] call CBA_fnc_globalEvent;	
    };

	_caller setVariable ["LIB_FAKE_CAR",objNull,false];

	sleep 0.1;
	deleteVehicle _car;	
		
	{[_x,"released",true] call FUNC(setAnim)} forEach crew _obj;
	
if(true) exitWith {};
	