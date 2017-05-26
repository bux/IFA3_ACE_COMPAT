#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "WW2_Core_c_ZZZ_LastLoaded_c",
            "cba_ui","cba_xeh","cba_jr",
            "ace_main","ace_interaction","ace_repair","ace_refuel","ace_frag" // TODO: add more ace addons that are required
        };
        author = CSTRING(Team);
        authors[] = { "PIONEER", "Prarok" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
