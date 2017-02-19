#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction","LIB_ARTY_SCRIPTS"};
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
#include "Extended_GetIn_EventHandlers.hpp"
#include "Extended_GetOut_EventHandlers.hpp"
#include "CfgVehicles.hpp"