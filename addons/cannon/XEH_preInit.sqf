#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

LIB_Wheeled_Towing = compile preprocessFileLineNumbers '\z\ifa3_comp_ace\addons\cannon\functions\fnc_Towing.sqf';

ADDON = true;
