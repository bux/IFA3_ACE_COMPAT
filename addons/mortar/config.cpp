#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F","A3_Static_F","LIB_weapons","ace_interaction","ace_mk6mortar"};
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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;

#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
