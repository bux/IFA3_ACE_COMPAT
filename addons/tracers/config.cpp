#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_tracers","WW2_Assets_c_Vehicles_Weapons_c","WW2_Assets_c_Weapons_InfantryWeapons_c"};
        author = CSTRING(Team);
        authors[] = { "Wilhelm Haas" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
