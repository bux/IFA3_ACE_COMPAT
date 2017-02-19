    #include "script_component.hpp"
	
	sleep _this;
    if ((vehicle ACE_Player) == ACE_Player) then 
	{
	    [ACE_Player, "", 2] call EFUNC(common,doAnimation);
    };