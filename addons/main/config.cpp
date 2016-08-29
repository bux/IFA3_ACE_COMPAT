#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "IFA3_Core" };
        author = CSTRING(Team);
        authors[] = { "bux" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "ACE_Triggers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMods.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"