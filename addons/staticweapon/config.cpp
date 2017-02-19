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
        requiredAddons[] = {};
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
#include "Extended_Init_EventHandlers.hpp"
#include "Extended_GetIn_EventHandlers.hpp"
#include "Extended_GetOut_EventHandlers.hpp"
//#include "Extended_WeaponAssembled_EventHandlers.hpp"
//#include "Extended_WeaponDisassembled_EventHandlers.hpp"
