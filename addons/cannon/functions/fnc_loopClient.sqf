if(local player) exitWith 
{
    params ["_gun","_vehicle","_attachPos","_setVectorDir","_setVectorDirandUp"];
	
    if!(_gun getVariable 'LIB_ARTY_MOVING_TOWING') then 
    {	
        detach _gun;
    }
	else
	{	    
		_gun setVectorDir _setVectorDir;
        _gun setVectorDirandUp _setVectorDirandUp;
		_gun attachTo [ _vehicle,_attachPos];
	};

};
if(true) exitWith {};