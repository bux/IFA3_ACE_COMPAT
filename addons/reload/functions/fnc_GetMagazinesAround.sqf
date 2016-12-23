 #define X_SEARCHRADIUS 5
  
	private ["_mags_around", "_magazines", "_holders", "_mag"];
    _mags_around = [];
    _holders = nearestObjects [ACE_Player, ["GroundWeaponHolder"], X_SEARCHRADIUS];
    for "_i" from 0 to ((count _holders) - 1) do 
	{
	    _holder = _holders select _i;
	    _magazines = magazinesAmmoCargo _holder;
	    for "_i2" from 0 to ((count _magazines) - 1) do 
		{
		    _mag = _magazines select _i2;
		    if ((_mag select 1) > 0) then 
			{
			    _mags_around pushBack (toLower (_mag select 0));
		    };
	    };
    };
_mags_around 