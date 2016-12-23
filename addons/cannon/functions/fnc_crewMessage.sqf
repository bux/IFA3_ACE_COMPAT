if(local player) then 
{
    params ["_vehicle"];
	if(player in crew _vehicle) then
	{
	    _chat = localize "STR_ACE_ifa3cannon_uncoupled_trailer";
		_time = time + 3;
		while {_time > time} do
		{
		    [ format [ "<t size='1' align='center' color='#ff0000' font='Zeppelin33'>%1</t>",_chat],0,0.25,0,0.125,0,87025] spawn bis_fnc_dynamicText;
		    sleep 0.25;
		};
	};
};