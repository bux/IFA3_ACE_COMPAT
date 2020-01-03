#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_medical_engine","WW2_Assets_c_Characters_ZZZ_LastLoaded_c"};
        author = CSTRING(Team);
        authors[] = { "Kerc" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
