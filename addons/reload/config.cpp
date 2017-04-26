#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author = CSTRING(Team);
        authors[] = { "WOG", "El Tyranos" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "Extended_PreStart_EventHandlers.hpp"
#include "Extended_PreInit_EventHandlers.hpp"
#include "Extended_PostInit_EventHandlers.hpp"
#include "Extended_FiredBIS_EventHandlers.hpp"

#include "cfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_newEvents.hpp"