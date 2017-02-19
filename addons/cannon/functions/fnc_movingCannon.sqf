#include "script_component.hpp"

#include "config.sqh"


params ["_vehicle"];


hint "ACE_MOVING";


if(isServer) then
{
    private ["_gun"];
    _gun = _vehicle getVariable ["Attached_gun",objNull];
	
	_gun setVariable ['LIB_ARTY_MOVING_TOWING',true,true];
	_gun setVariable ["LIB_ARTY_LOCK_STATUS", true, true];
	
    _typeVehicle = typeOf _vehicle;
    _typegun = typeOf _gun;

	_maxSpeed = (getNumber (configFile >> "CfgVehicles" >> _typeVehicle >> "maxSpeed"));
	_phase = (_gun animationPhase "wheel_1_1");	
	_adjX = 0;
	_adjY = 0;
	_adjZ = 0;
	_d = 1.2;
	_vz= 1.7;
    _vy= 3;	
	_arrayWheels = ["wheel_1_1","wheel_2_1"];	
	
	if(_typegun in _ZIS61k) then
	{
		_adjZ = -0.33;
		_arrayWheels = ["wheel_1_1","wheel_2_1","wheel_1_2","wheel_2_2"];
	    {if(typeOf _vehicle == (_x select 0)) exitWith { _adjX = _x select 1;_adjY = _x select 2 ;_d = _x select 3;_vy = _x select 4;_vz = _x select 5;}} foreach _TYPEGUNLIB61k;
	};
	if(_typegun in _ZISBASE) then
	{
		{if(typeOf _vehicle == (_x select 0)) exitWith { _adjX = _x select 1;_adjY = _x select 2 ;_d = _x select 3;_vy = _x select 4;_vz = _x select 5;}} foreach _TYPEGUNLIBZIS;
	};
	if(_typegun in _POLBASE) then
	{
		{if(typeOf _vehicle == (_x select 0)) exitWith { _adjX = _x select 1;_adjY = _x select 2 ;_d = _x select 3;_vy = _x select 4;_vz = _x select 5;}} foreach _TYPEGUNLIBPOL;
	};
		
	{_x call LIB_Animate_Source_Group} forEach [[_gun, 'expand_stands', 0], [_gun, 'chassis_lift', 1]];
	
	if (isArray (configFile/"LIB_ModelConfig"/_typegun/"Animation_Source_Group"/"chassis_lift"/"Animations")) then
	{
		waitUntil {((_gun animationPhase ((getArray (configFile/"LIB_ModelConfig"/_typegun/"Animation_Source_Group"/"chassis_lift"/"Animations")) select 0)) >= 1)};
	};
	
	_array = boundingBox _vehicle;
    _bY = (((((_array select 1) select 1) - ((_array select 0) select 1))/2)*_d);	

	_gPosG = _MODELTOWORLD(_gun);
	_vehicle setVariable [ "gun_dir",(getDir _gun),true];
    _vehicle setVariable [ "gun_pos",(getPosATL _gun),true];
	_checkAngle = true;


	while {((_gun getVariable 'LIB_ARTY_MOVING_TOWING') && ((getDammage _vehicle) < _DIGZEROSEVEN) && _checkAngle)} do 
	{
		_vehicle setVariable [ "gun_pos",(getPosATL _gun),true];
		_vehiclePos = getPosATL _vehicle;
		if( surfaceIswater _vehiclePos) then {_vehiclePos = ATLToASL _vehiclePos};
		_x = (((_vehiclePos) select 0) - (_bY * _DIGZEROFIVE)*sin(getDir _vehicle));
		_y = (((_vehiclePos) select 1) - (_bY * _DIGZEROFIVE)*cos(getDir _vehicle));
		_dX = _x - (_gPosG select 0);
		_dY = _y - (_gPosG select 1);
		
		_dir = _dX atan2 _dY;
		
		_check_dir = (_dir - (getDir _vehicle));
		if(_check_dir > _DIGNORD) then { _check_dir = _check_dir - _DIGNORD};
		if(_check_dir < _DIGZERO) then { _check_dir = _check_dir + _DIGNORD};		
		if(((_check_dir >= _KOEF) && (_check_dir < _DIGWEST)) || ((_check_dir >  _DIGEAST) && (_check_dir < _KOEF))) exitWith 
		{
		    _gun setVariable ['LIB_ARTY_MOVING_TOWING',false,true];
			_checkAngle = false;
		};
		
		if!(_gun getVariable 'LIB_ARTY_MOVING_TOWING') exitWith {};
		if!((getDammage _vehicle) < _DIGZEROSEVEN) exitWith {_gun setVariable ['LIB_ARTY_MOVING_TOWING',false,true]};
		
		_posX = _x - ((_bY*_DIGZEROSIX) * sin(_dir));
		_posY = _y - ((_bY*_DIGZEROSIX) * cos(_dir));
		_gPosG = [_posX,_posY,(_vehiclePos select 2)];		
		_modelPos = _vehicle worldToModel _gPosG;		
		_attachPos = _modelPos vectorAdd [ _adjX,_adjY,_adjZ ];		
		_setVectorDir = [-sin (_dir),-cos(_dir),_DIGONE];		
		_vectorDir = _attachPos vectorAdd [ _DIGZERO,_vy,_vz];		
        _setVectorDirandUp = [_vectorDir,[_DIGZERO,_DIGZERO,_DIGONE]];
		
		_gun setVectorDirandUp _setVectorDirandUp;
		_gun setVectorDir _setVectorDir;
		_vehicle setVariable [ "gun_dir",(getDir _gun),true];
        [_gun,_vehicle,_attachPos,_setVectorDir,_setVectorDirandUp] remoteExec ["ACE_ifa3cannon_fnc_loopClient",-2,false];
		//[QGVAR(call), [[_gun,_vehicle,_attachPos,_setVectorDir,_setVectorDirandUp],ACE_ifa3cannon_fnc_loopClient]] call EFUNC(common,globalEvent);
		_gun attachTo [ _vehicle,_attachPos];
		
		_speedCar = (speed _vehicle);		
		if((_speedCar > _DIGONE) || (_speedCar < _DIGNEGONE)) then 
		{
			_moment = (_speedCar / _maxSpeed) / _DIGMOMENT;
			_phase = _phase - _moment;
			{[QGVAR(animate), [_gun,_x,_phase]] spawn CBA_fnc_globalEvent} forEach _arrayWheels;
		};
					
		_wait = time;
		waitUntil {time > _wait};
	};
	_gun setVariable ['LIB_ARTY_MOVING_TOWING',false,true];
    [QGVAR(allowdammage), [_vehicle,false ]] call CBA_fnc_globalEvent;
    [QGVAR(allowdammage), [_gun,false ]] call CBA_fnc_globalEvent;
	
	detach _gun;
	//sleep 1;
	waitUntil {(isNull attachedTo _gun)};
	//[_vehicle] remoteExec ["ACE_ifa3cannon_fnc_crewMessage",0,false];
	[QGVAR(spawn), [_vehicle,ACE_ifa3cannon_fnc_crewMessage]] call CBA_fnc_globalEvent;
    _vehicle setVariable ["Attached_gun",objNull,true];	
	   
	sleep 0.1;
	_gundir = (_vehicle getVariable "gun_dir");

	[QGVAR(setDir), [_gun,_gundir]] call CBA_fnc_globalEvent;

	sleep 0.1;
	_pos = (_vehicle getVariable "gun_pos");
	if!(surfaceIswater _pos) then
	{
		[QGVAR(setPosATL), [_gun,_pos]] call CBA_fnc_globalEvent;
        _setVectorUp = (surfaceNormal (getPosASL _gun));
		[QGVAR(setVectorUp), [_gun,_setVectorUp]] call CBA_fnc_globalEvent;
	} 
	else
	{
		_pos = ATLToASL _pos;
		[QGVAR(setPosASL), [_gun,_pos]] call CBA_fnc_globalEvent;	
	};
	
	{_x call LIB_Animate_Source_Group} forEach [[_gun, 'expand_stands', 1], [_gun, 'chassis_lift', 0]];
	
	if (isArray (configFile/"LIB_ModelConfig"/_typegun/"Animation_Source_Group"/"expand_stands"/"Animations")) then
	{
		waitUntil {((_gun animationPhase ((getArray (configFile/"LIB_ModelConfig"/_typegun/"Animation_Source_Group"/"expand_stands"/"Animations")) select 0)) >= 1)};
	};
	
    [QGVAR(allowdammage), [_vehicle,true ]] call CBA_fnc_globalEvent;
    [QGVAR(allowdammage), [_gun,true ]] call CBA_fnc_globalEvent;
	
	_gun setVariable ["LIB_ARTY_LOCK_STATUS", false, true];
};
if(true) exitWith {};


