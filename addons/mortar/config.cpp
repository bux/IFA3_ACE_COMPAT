#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"LIB_GrWr34_ACE","LIB_BM37_ACE","LIB_M2_60_ACE"};
        weapons[] = {"LIB_BM37_ACE","LIB_GrWr34_ACE","LIB_M2_60_ACE"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F","A3_Static_F","LIB_weapons","ace_interaction","ace_mk6mortar","WW2_Assets_c_Vehicles_StaticWeapons_c","WW2_Assets_c_Weapons_Ammoboxes_c"};
        author = CSTRING(Team);
        authors[] = { "WOG", "El Tyranos" };
        authorUrl = CSTRING(Url);
        url = CSTRING(Url);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
