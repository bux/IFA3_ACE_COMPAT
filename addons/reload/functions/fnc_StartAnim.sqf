    #include "script_component.hpp"
	
	if ((vehicle ACE_Player) == ACE_Player) then 
	{
	    if ((ACE_Player call CBA_fnc_getUnitAnim) select 0 == "stand") then {
        [ACE_Player, "AmovPercMstpSrasWrflDnon_diary", 1] call EFUNC(common,doAnimation);
    };

};