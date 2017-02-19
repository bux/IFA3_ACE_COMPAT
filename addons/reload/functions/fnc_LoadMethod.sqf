#include "script_component.hpp"

 private ["_method", "_veh_magz", "_i"];
    _method = 0;
    if (ACE_Player == (vehicle ACE_Player)) then 
    {
	    _playerMags = [];
        { _playerMags pushBack (toLower _x) } forEach (magazines ACE_Player);
	   
        if (_magazine in _playerMags) then 
        {
	        _method = 1;
        } 
        else 
	    {
	        if ((ACE_Player == (vehicle ACE_Player)) && { _magazine in ([] call FUNC(GetMagazinesAround)) }) then 
	        {
		        _method = 2;
	        }
		};		
    }
    else
    { 
		_veh_magz = magazinesAmmoCargo _vehicle;
		for "_i" from 0 to ((count _veh_magz) - 1) do 
		{
			_veh_mag = _veh_magz select _i;
			if ((_magazine == (_veh_mag select 0)) && ((_veh_mag select 1) > 0)) exitWith 
			{
				_method = 3;
			};
		};	        
    };
	
_method 