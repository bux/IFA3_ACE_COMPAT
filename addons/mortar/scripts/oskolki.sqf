if (local player) then 
{
	if (local player) then 
	{								     //высота точки начала разлёта
		_pos = [(_this select 0), (_this select 1), ((_this select 2)+1)];
_number1 = 75;
_number2 = 15; 
		_speed = (_number1 + (random _number2)); //дальность
		
		_pc = ((playersNumber EAST)+(playersNumber WEST)+(playersNumber RESISTANCE)+(playersNumber CIVILIAN)+(playersNumber sideENEMY));
		if (_pc == 0) then {_pc = 1;};
		
		for "_i" from 1 to (300/_pc) do //кол-во
		{
			_bullet = "oskolok_shell" createVehiclelocal _pos;
			_bullet setPos _pos;
			_ugol = (random 360);
			_height		=	6; //угол разлёта 
			_bullet setVelocity [(_speed*(sin _ugol)), (_speed*(cos _ugol)), (random _height)];
		};

	};
};