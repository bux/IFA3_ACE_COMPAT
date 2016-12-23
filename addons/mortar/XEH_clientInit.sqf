#include "script_component.hpp"

if (!hasInterface) exitWith {};

//["playerVehicleChanged", {_this call FUNC(handlePlayerVehicleChanged);}] call EFUNC(common,addEventHandler);

["vehicle", FUNC(handlePlayerVehicleChanged)] call CBA_fnc_addPlayerEventHandler;
//["ace_infoDisplayChanged", FUNC(turretDisplayLoaded)] call CBA_fnc_addEventHandler;