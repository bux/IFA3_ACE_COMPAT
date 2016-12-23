#include "script_component.hpp"

#define __DXL -0.5
#define __DXR 0.5
#define __DY 0.3
#define __DZ 0.7
#define __DIST 30



_Func_BackPackPos =
{
   params [ "_unit","_pack","_distX"];
   private ["_pos"];
   
   _pack attachTo [_unit,[ _distX,__DY,__DZ]];
   _pos =  getPosASL _pack;
   detach _pack;
   _pack setPosASL _pos;
   [QGVAR(setPosASL), [_pack,(getPosASL _pack)]] call CBA_fnc_globalEvent;
};

params ["_unit","_barrel","_tripod"];

    {
        if((_barrel) in (everyBackpack _x)) then {
		    [_unit,_x,__DXL] spawn _Func_BackPackPos;
		} else {		
	        if((_tripod) in (everyBackpack _x)) then {
			    [_unit,_x,__DXR] spawn _Func_BackPackPos;
			};
		};
    } forEach (nearestObjects [ (getPosASL _unit) ,['GroundWeaponHolder'],__DIST]);
