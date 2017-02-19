#include "script_component.hpp"

#define __TurretAction 'vehicle_turnout'
//=========================================================
_fnc_checkOutAhim = 
{
    params ["_unit"];
	private ["_animateState"];
 	_animateState = (toArray (animationState _unit));
	_animateState resize (count (toArray __TurretAction));
	if((toString _animateState) == __TurretAction) exitWith { false };
	
    true	
};
//=========================================================

params ["_weapon","_vehicle"];
private ["_check","_cannon"];
_check = false;

_cannon = _vehicle getvariable QGVAR(MainWeapon);
if!([_vehicle] call FUNC(isLoader)) then
{
    if(_weapon in (_vehicle weaponsTurret ((assignedVehicleRole ACE_Player) select 1))) then 
    {
	    if(_vehicle isKindOf 'Car') then
		{
		    _check = true;
		}
		else
		{
            if(_weapon != _cannon) then 
		    {
		        if(ACE_Player call _fnc_checkOutAhim) then { _check = true } ;
		    };
		};
    };
}
else
{
    if(_weapon != _cannon) then 
	{
		if(_weapon in (_vehicle weaponsTurret ((assignedVehicleRole ACE_Player) select 1))) then 
        {
		    if(ACE_Player call _fnc_checkOutAhim) then { _check = true } ;
		};
	}
	else
	{
	    if(ACE_Player call _fnc_checkOutAhim) then { _check = true } ;
	};
};
_check 